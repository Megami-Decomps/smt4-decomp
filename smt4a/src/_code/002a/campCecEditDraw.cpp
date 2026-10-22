#include "shard/Shard0032.h"

extern "C" {

void requestImageDraw(u32 handle, u8 *member);

extern StateAtF4 *g_campCecEdit;

/* Passes the active camp edit object's handle and member to requestImageDraw. */
u32 campCecEditDraw(void)
{
    StateAtF4 *object;

    object = g_campCecEdit;
    if (object->imageActive != 0) {
        requestImageDraw((u32)object->unk08, object->image);
    }
    return 0;
}

} /* extern "C" */
