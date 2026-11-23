#include "classes/Obj55c840.h"

/* Builds the base controller (owner 1), clears its flag and words and sets frames to -1. */
Obj55c840::Obj55c840()
    : Obj55c81c(1)
{
    active = 0;
    words[0] = 0;
    words[1] = 0;
    words[2] = 0;
    words[3] = 0;
    words[4] = 0;
    words[5] = 0;
    frames = -1;
}
