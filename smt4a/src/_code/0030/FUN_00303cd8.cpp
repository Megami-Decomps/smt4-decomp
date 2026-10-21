/* NON_MATCHING: retail emits 'ldr r1, [pc, #44]'; compiler emits 'ldr r1, [pc, #40]' at the first differing instruction. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055b0dc;
struct Child { u8 unk00[0x10]; u32 first, second; u8 unk18[8]; u32 third; };
struct Object { const void *vtable; u8 unk04[0xC]; Child child; };
Object *FUN_002f2afc(Object *object);
Child *FUN_002e9ff4(Child *child);
void FUN_0030fecc(Object *object);
void FUN_001219cc(Object *object);
void FUN_0030fea4(Object *object);
Object *FUN_00303cd8(Object *object) {
    object = FUN_002f2afc(object);
    object->vtable = &DAT_0055b0dc;
    Child *child = FUN_002e9ff4(&object->child);
    child->first = child->second = child->third = 0;
    FUN_0030fecc(object);
    FUN_001219cc(object);
    FUN_0030fea4(object);
    return object;
}
}
