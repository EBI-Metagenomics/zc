#!/bin/bash

cfile=$1
module=${cfile%.*}
MODULE=$(echo "$module" | tr '[:lower:]' '[:upper:]')

{
    echo "#ifndef ${MODULE}_STATIC_H"
    echo "#define ${MODULE}_STATIC_H"
    echo
    sed 's/^#define ZC_API$/#define ZC_API static/' "$module.c" |
        sed 's/^#include "zc_strto.h"$//' |
        sed '/./,$!d'
    echo
    echo "#endif"
}
