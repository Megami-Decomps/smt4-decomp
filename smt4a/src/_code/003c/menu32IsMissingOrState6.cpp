#include "shard/Shard003C.h"

extern "C" {

/* True when there is no menu or its unk3F8 is 6. */
u8 menu32IsMissingOrState6(Menu32 *menu)
{
    return menu == NULL || menu->unk3F8 == 6;
}

} /* extern "C" */
