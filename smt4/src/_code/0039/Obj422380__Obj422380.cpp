/* NON_MATCHING: store grouping only: retail stores the vtable pointer and the head with one stm, saves r4/r5 for a strd and writes the sentinel links one by one; built uses str/stm in a different order */
#include "classes/Obj422380.h"

/* An empty container: the anchor node and both ends point back at the anchor. */
Obj422380::Obj422380()
{
    head = &anchor;
    anchor.next = &anchor;
    anchor.prev = &anchor;
    anchor.parent = &anchor;
    color = 0;
    leftmost = &anchor;
    rightmost = &anchor;
    count = 0;
}
