#include "classes/Obj421f54.h"

/* An empty list: the sentinel's links point back at itself. */
Obj421f54List::Obj421f54List() : unk00(0), unk04(0)
{
    sentinel.next = &sentinel;
    sentinel.prev = &sentinel;
}
