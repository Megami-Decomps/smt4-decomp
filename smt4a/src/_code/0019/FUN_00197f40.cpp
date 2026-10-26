#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Initializes an empty circular callback list. */
void FUN_00197f40(CallbackList *list)
{
    list->sentinel.next = &list->sentinel;
    list->count = 0;
    list->sentinel.previous = &list->sentinel;
}

} /* extern "C" */
