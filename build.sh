#!/bin/bash

srcdir="$PWD"

prjdir=prj


unix(){
    dir="$PWD/$prjdir/Unix"
    cd "$dir"
    make
}


ex(){
    cd "$srcdir"
}


unix
ex