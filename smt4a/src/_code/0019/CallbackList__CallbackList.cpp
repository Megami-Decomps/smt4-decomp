#include "shard/W5_W5Match1_RecordKeys.h"

/* Initializes an empty circular callback list. */
CallbackList::CallbackList()
{
    sentinel.next = &sentinel;
    count = 0;
    sentinel.previous = &sentinel;
}
