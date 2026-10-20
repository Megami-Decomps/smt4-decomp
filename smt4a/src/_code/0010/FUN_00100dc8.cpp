#include "common.h"

extern "C" {

/* The shared singleton instance; `refCount` counts the handles pointing at it. */
typedef struct Instance {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ s32 refCount;
} Instance;

extern Instance *DAT_005c4c00;
void FUN_002e4064(void);               /* creates the singleton */

/* Points `handle` at the singleton (creating it first when needed) and takes a reference. */
Instance **FUN_00100dc8(Instance **handle)
{
    Instance *instance;

    if (DAT_005c4c00 == NULL) {
        FUN_002e4064();
    }
    instance = DAT_005c4c00;
    *handle = DAT_005c4c00;
    instance->refCount = instance->refCount + 1;
    return handle;
}

} /* extern "C" */
