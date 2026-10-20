#include "shard/Shard0042.h"

extern "C" {

typedef struct Obj8Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 unk08;
} Obj8Holder;

extern u8 g_nnosAddressSpaceManager;
extern void nn_os_AddressSpaceManager_Free(u8 *dst, Obj8Holder *obj);

void registerObj8Holder(Obj8Holder *obj)
{
    if (obj->unk08 != 0) {
        nn_os_AddressSpaceManager_Free(&g_nnosAddressSpaceManager, obj);
    }
}

} /* extern "C" */
