#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include "Object.h"
const std::string RES_PATH= "resources";
const std::string IMG_PATH= RES_PATH+"/img";

void CopyBidArrayElems(int**,int**,int,int);

void CopyBidArrayElems(int** from,int** to,int width,int height){
    for(int i=0; i<width;i++){
        for(int j=0; j<height;j++){
            to[j][i]= from[j][i];
        }
    }
}