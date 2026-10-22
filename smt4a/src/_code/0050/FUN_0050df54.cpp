/* NON_MATCHING: first finalizer-registration call remains BL, while retail replaced it with an unrelocated NOP. */
#include "common.h"
struct GlobalState { u32 state; u8 active; };
extern "C" {
extern GlobalState DAT_005b3fa8;
extern u32 DAT_005b3f9c;
extern u8 entry;
void FUN_002fd02a(void *object);
void FUN_0042d200(void *object);
void emptyStub_002f4370(void *object, void (*destroy)(void *), void *module);

/* Initializes both module states and registers their finalizers. */
void FUN_0050df54(void)
{
    DAT_005b3f9c = 0;
    emptyStub_002f4370(&DAT_005b3f9c, FUN_0042d200, &entry);
    DAT_005b3fa8.state = 0;
    DAT_005b3fa8.active = 1;
    emptyStub_002f4370(&DAT_005b3fa8, FUN_002fd02a, &entry);
}
}
