#include "classes/Obj557ae8.h"

/* Empties the slot: no owner, mode 7, no target or callback, no resource name. */
Obj557ae8Slot::Obj557ae8Slot()
{
    state = 0;
    kind = 7;
    child = NULL;
    callback = NULL;
    name[0] = 0;
}
