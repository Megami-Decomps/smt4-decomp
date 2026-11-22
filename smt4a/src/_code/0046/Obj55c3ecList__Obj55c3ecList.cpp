/* NON_MATCHING: as IV's twin Obj421f54List::Obj421f54List: retail clears unk00 first and stores unk04 and the
 * sentinel's next link with one strd; armcc stores the two links first. */
#include "classes/Obj55c3ec.h"

/* An empty list: the sentinel's links point back at itself. */
Obj55c3ecList::Obj55c3ecList() : unk00(0), unk04(0)
{
    sentinel.next = &sentinel;
    sentinel.prev = &sentinel;
}
