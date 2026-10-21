/* NON_MATCHING: retail emits 'ldr r1, [pc, #36]'; compiler emits 'mov r6, r2' at the first differing instruction. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055a4c0, DAT_005596b4;
struct Object { const void *vtable; u8 active, kind; u8 unk06[2]; u8 child[0x10]; };
void *FUN_002ff858(void *object, u32 option);
void FUN_002ff8a8(void *object, u32 option);
Object *FUN_00303928(Object *object, u8 kind, u32 option) {
    object->vtable = &DAT_0055a4c0;
    object->active = 0;
    void *child = FUN_002ff858(object->child, 0);
    object = (Object *)((u8 *)child - 8);
    object->vtable = &DAT_005596b4;
    object->kind = kind;
    FUN_002ff8a8(child, option);
    return object;
}
}
