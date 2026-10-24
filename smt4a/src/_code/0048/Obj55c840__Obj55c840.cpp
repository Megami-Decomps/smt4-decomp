/* NON_MATCHING: needs multifile with _ZN9Obj55c81cC1Ej (scratch run matched except r2/r3 naming caused by the unmatched callee): retail pushes just lr */
#include "classes/Obj55c840.h"

/* Clears the rest of its words and sets frames to -1. */
Obj55c840::Obj55c840()
{
    words[1] = 0;
    words[2] = 0;
    words[3] = 0;
    words[4] = 0;
    words[5] = 0;
    frames = -1;
}
