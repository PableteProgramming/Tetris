#!/bin/bash

srcdir="$PWD"

prjdir=prj


unix(){
    echo "configuring for Unix Makefiles"
    dir="$PWD/$prjdir/Unix"
    cd "$dir"
    cmake -G "Unix Makefiles" ../..
}


ex(){
    cd "$srcdir"
}


unix
ex