#include <all.h>

Manager::Manager(int _scale, std::vector<std::pair<int,sf::Color>> _sets){
    scale=_scale;
    sets=_sets;
}

Manager::Manager(){
    scale=-1;
    std::vector<std::pair<int,sf::Color>> empty;
    empty.clear();
    sets= empty;
}

void Manager::SetScale(int _scale){
    scale=_scale;
}

void Manager::SetSets(std::vector<std::pair<int,sf::Color>> _sets){
    sets=_sets;
}

sf::Color Manager::FindColorOfValue(int value){
    for(int i=0; i<sets.size();i++){
        if(sets[i].first==value){
            return sets[i].second;
        }
    }
    return sf::Color::Transparent;
}

int Manager::FindValueOfColor(sf::Color color){
    for(int i=0; i<sets.size();i++){
        if(sets[i].second==color){
            return sets[i].first;
        }
    }
    return 0;
}

Rect::Rect(int _x, int _y, int _width, int _height,sf::Color _color){
    x=_x;
    y=_y;
    width=_width;
    height=_height;
    color=_color;
}

Object::Object(int _x, int _y, int rotation,Manager _manager,std::vector<std::vector<int>> _map,int _W_width, int _W_height,int _speed){
    Dead=false;
    x=_x;
    y=_y;
    lastx=x;
    lasty=y;
    manager.SetScale(_manager.GetScale());
    manager.SetSets(_manager.GetSets());
    //map
    speed=_speed;
    map=_map;
    W_width=_W_width;
    W_height= _W_height;
    Rotate(rotation);
    Configure();
}

void Object::Draw(sf::RenderWindow &window){
    for(int i=0; i<rects.size();i++){
        Rect act= rects[i];
        sf::RectangleShape recttodraw;
        recttodraw.setPosition(act.GetX()*manager.GetScale()+x,act.GetY()*manager.GetScale()+y);
        recttodraw.setSize(sf::Vector2f(act.GetWidth()*manager.GetScale(),act.GetHeight()*manager.GetScale()));
        recttodraw.setFillColor(act.GetColor());
        window.draw(recttodraw);
    }
}

void Object::Rotate(int rotation){
    map= RotateMap(rotation,map);
    Configure();
    //check if rotation is not out of the screen or something similar
    //x
    if(x<0){
        x=0;
        //Configure();
    }
    else if(x>(W_width-width)){
        x= W_width-width;
        //Configure();
    }

    //y
    if(y<0){
        y=0;
        //Configure();
    }
    else if(y>(W_height-height)){
        y= W_height-height;
        //Configure();
    }

}

void Object::Configure(){
    height= map.size()*manager.GetScale();
    width= map[0].size()*manager.GetScale();
    rects.clear();
    rects= FillRects(map,manager);
}

void Object::Move(int dir, int _width,int _height,int _map[W_HEIGHT/scale][W_WIDTH/scale] ,bool moveY){
    if(dir<0){
        if((x>=(0+manager.GetScale())) && (!Collision(_map,x-manager.GetScale(),y,rects))){
            lastx=x;
            x-= manager.GetScale();
        }
    }
    else if(dir>0){
        if((x+manager.GetScale()<=_width-width) && (!Collision(_map,x+manager.GetScale(),y,rects))){
            lastx=x;
            x+= manager.GetScale();
        }
    }
    //x=_x;
    if(moveY){
        if(y+(speed*manager.GetScale())<= _height-height){
            if(Collision(_map,x,(y+speed*manager.GetScale()),rects)){
                lastx=x;
                Dead=true;
                lasty=y;
                y+=speed*manager.GetScale();
                int i;
                for(i=y;i>=lasty;i--){
                    if(!Collision(_map,x,i,rects)){
                        lasty=i;
                        y=lasty;
                        return;   
                    }
                }
                lasty=i;
                y=lasty;
                return;
            }
            else{
                lasty=y;
                y+=speed*manager.GetScale();
            }
        }
        else{
            lasty=y;
            y= _height-height;
            lasty=y;
            lastx=x;
            Dead=true;
        }
    }
}

void Object::SetSpeed(int _speed){
    speed=_speed;
}

std::vector<std::vector<int>> RotateMap(int angle,std::vector<std::vector<int>> map){
    std::vector<std::vector<int>> r;
    r.clear();
    //std::cout<<"map.size()= "<<map.size()<<std::endl;
    //std::cout<<"angle: "<<angle<<std::endl;
    if(angle<=0 || angle>=360 || (angle>0 && angle<45) || (angle>=315 && angle <=360)){
        //0º
        //std::cout<<"all right"<<std::endl;
        r=map;
    }
    else if(angle==90 || (angle>=45 && angle<=90) || ( angle>=90 && angle<135)){
        //90º
        int height= map.size();
        int width= map[0].size();
        std::vector<int> r1;
        for(int x=0;x<width;x++){
            r1.clear();
            for(int y=height-1;y>=0;y--){
                r1.push_back(map[y][x]);
            }
            r.push_back(r1);
        }
        //PrintMap(r);
    }
    else if(angle==180 || (angle>=135 && angle<=180) || (angle>=180 && angle<225)){
        //180º
        int height= map.size();
        int width= map[0].size();
        std::vector<int> r1;
        for(int y=height-1;y>=0;y--){
            r1.clear();
            for(int x=width-1;x>=0;x--){
                r1.push_back(map[y][x]);
            }
            r.push_back(r1);
        }
    }
    else if(angle==270 || (angle>=225 && angle<=270) || (angle>=270 && angle<315)){
        //270º = -90º
        int height= map.size();
        int width= map[0].size();
        std::vector<int> r1;
        for(int x=width-1;x>=0;x--){
            r1.clear();
            for(int y=0;y<height;y++){
                r1.push_back(map[y][x]);
            }
            r.push_back(r1);
        }
    }
    else{
        //0º
        r=map;
    }

    //std::cout<<"r.size()= "<<r.size()<<std::endl;
    return r;
}


void PrintMap(std::vector<std::vector<int>> map){
    int _width= map[0].size();
    int _height= map.size();
    std::cout<<"Width: "<<_width<<"; Height: "<<_height<<std::endl;
    for(int y=0; y<_height;y++){
        std::cout<<"[";
        for(int x=0; x<_width;x++){
            std::cout<<map[y][x]<<",";
        }
        std::cout<<"]"<<std::endl;
    }
}

void fillMap(int _map[W_HEIGHT/scale][W_WIDTH/scale], int v){
    for(int y=0; y<(W_HEIGHT/scale);y++){
        for(int x=0; x<(W_WIDTH/scale); x++){
            _map[y][x]=v;
        }
    }
}

void DrawMap(sf::RenderWindow& window,int _map[W_HEIGHT/scale][W_WIDTH/scale],Manager manager){
    std::vector<Rect> rects= FillRects(MapToVector(_map),manager);
    for(int i=0; i<rects.size();i++){
        Rect act= rects[i];
        sf::RectangleShape recttodraw;
        recttodraw.setPosition(act.GetX()*manager.GetScale(),act.GetY()*manager.GetScale());
        recttodraw.setSize(sf::Vector2f(act.GetWidth()*manager.GetScale(),act.GetHeight()*manager.GetScale()));
        recttodraw.setFillColor(act.GetColor());
        window.draw(recttodraw);
    }
}

std::vector<Rect> FillRects(std::vector<std::vector<int>> _map,Manager manager){
    std::vector<Rect> rects;
    rects.clear();
    int _width= _map[0].size();
    int _height= _map.size();
    for(int y=0; y<_height;y++){
        for(int x=0; x<_width;x++){
            if(_map[y][x]>0){
                sf::Color c= manager.FindColorOfValue(_map[y][x]);
                Rect recttopushback(x,y,1,1,c);
                rects.push_back(recttopushback);
            }
        }
    }
    return rects;
}

std::vector<std::vector<int>> MapToVector(int _map[W_HEIGHT/scale][W_WIDTH/scale]){
    std::vector<std::vector<int>> r;
    r.clear();
    std::vector<int> r1;
    for(int y=0; y<(W_HEIGHT/scale);y++){
        r1.clear();
        for(int x=0; x<(W_WIDTH/scale); x++){
            r1.push_back(_map[y][x]);
        }
        r.push_back(r1);
    }
    return r;
}

void UpdateMap(int _map[W_HEIGHT/scale][W_WIDTH/scale],std::vector<Rect> rectsToAdd, Object actpiece){
    for(int i=0; i<rectsToAdd.size();i++){
        Rect actrect= rectsToAdd[i];
        //std::cout<<"ma["<<actrect.GetY()+(actpiece.GetY()/scale)<<"]["<<actrect.GetX()+(actpiece.GetX()/scale)<< "]="<<manager.FindValueOfColor(actrect.GetColor())<<std::endl;
        //std::cout<<"actrect.GetY(): "<<actrect.GetY()<<std::endl;
        _map[actrect.GetY()+(actpiece.GetLastY()/scale)][actrect.GetX()+(actpiece.GetLastX()/scale)]= actpiece.GetManager().FindValueOfColor(actrect.GetColor());
    }
}

std::vector<std::vector<int>> Map::lright= {
        {3,0},
        {3,0},
        {3,0},
        {3,3}
};

std::vector<std::vector<int>> Map::square= {
        {4,4},
        {4,4}
};

std::vector<std::vector<int>> Map::lleft= {
        {0,1},
        {0,1},
        {0,1},
        {1,1}
};

std::vector<std::vector<int>> Map::line={
    {1},
    {1},
    {1},
    {1}
};

std::vector<std::vector<int>> Map::inversedT={
    {0,1,0},
    {1,1,1}
};

std::vector<std::vector<int>> Map::inversedz={
    {0,1,1},
    {1,1,0}
};

std::vector<std::vector<int>> Map::z={
    {1,1,0},
    {0,1,1}
};

std::vector<std::pair<int,sf::Color>> Map::ColorSet={
    {1,sf::Color{0,0,255}/*blue*/},
    {2,sf::Color{0,255,0}/*green*/},
    {3,sf::Color{255,102,0}/*orange*/},
    {4,sf::Color{204,0,204}/*purple*/},
    {5,sf::Color{255,0,0}/*red*/},
    {6,sf::Color{255,255,255}/*white*/},
};

bool Collision(int _map[W_HEIGHT/scale][W_WIDTH/scale],int _x,int _y,std::vector<Rect> rects){
    for(int i=0; i<rects.size();i++){
        Rect actrect= rects[i];
        //std::cout<<"ma["<<actrect.GetY()+(actpiece.GetY()/scale)<<"]["<<actrect.GetX()+(actpiece.GetX()/scale)<< "]="<<manager.FindValueOfColor(actrect.GetColor())<<std::endl;
        //std::cout<<"actrect.GetY(): "<<actrect.GetY()<<std::endl;
        if(_map[actrect.GetY()+(_y/scale)][actrect.GetX()+(_x/scale)]!=0){
            return true;
        }
    }
    return false;
}

void UpdatePiece(int _startx,int _starty,int& _x,int& _y,std::vector<Object>& _pieces,Object& _actpiece,std::vector<std::vector<std::vector<int>>> _allpieces,int& _nextindex,std::vector<std::vector<int>>& _nextmap,Manager _manager,int _W_WIDTH,int _W_HEIGHT){
    _x= _startx;
    _y= _starty;
    _actpiece= _pieces[0];
    _pieces[1]=_pieces[0];
    _nextindex= rand()%(_allpieces.size());
    _nextmap=_allpieces[_nextindex];
    ChangeColor(_nextmap,(rand()%(Map::ColorSet.size())+1));
    _pieces[0]= Object(_x,_y,0,_manager,_nextmap,_W_WIDTH,_W_HEIGHT);
}

void ChangeColor(std::vector<std::vector<int>>& _map,int colornum){
    int _width= _map[0].size();
    int _height= _map.size();
    for(int _y=0; _y<_height;_y++){
        for(int _x=0; _x<_width;_x++){
            if(_map[_y][_x]!=0){
                _map[_y][_x]=colornum;
            }
        }
    }
}