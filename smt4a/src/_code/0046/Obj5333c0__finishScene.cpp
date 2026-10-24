/* NON_MATCHING: same three stores; retail bumps the scene pointer with a post-incremented str and writes state/substate with one stm after loading the 19 late, armcc keeps the pointer and orders the constants differently. */
#include "classes/Obj5333c0.h"

void Obj5333c0::finishScene()
{
    flags |= 1;
    state = 19;
    substate = 0;
}
