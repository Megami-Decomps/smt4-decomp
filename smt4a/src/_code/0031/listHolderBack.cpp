#include "shard/Shard0031.h"

extern "C" {

/* The last element of the held list, or 0 when it is empty. */
u32 listHolderBack(ListHolder *holder)
{
    if (holder->size != 0) {
        return holder->sentinel->prev->value;
    }
    return 0;
}

} /* extern "C" */
