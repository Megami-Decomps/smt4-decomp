/* NON_MATCHING: retail stores rightmost/count with one strd (r2,r3 with r4/r5 saved); built stores them with two str */
#include "classes/Obj422380.h"

/* An empty container: the anchor node and both ends point back at the anchor. */
Obj422380::Obj422380()
    : head(&anchor), anchor(&anchor), color(0), leftmost(&anchor), rightmost(&anchor), count(0)
{
}
