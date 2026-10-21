/* NON_MATCHING: retail emits 'mov r4, r1'; compiler emits 'mov r6, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct String { u8 storage[8]; };
struct Source { const void *vtable; String first; u16 firstKind; u8 unk0E[2]; String second; u16 secondKind; u8 firstFlag, secondFlag; u32 value; u8 active; };
struct Object { u8 unk00[0xDC]; Source value; };
void onlineStringAssign(String *output, const String *source);
void FUN_002fd784(Object *object, const Source *source) {
    onlineStringAssign(&object->value.first, &source->first);
    object->value.firstKind = source->firstKind;
    onlineStringAssign(&object->value.second, &source->second);
    object->value.secondKind = source->secondKind;
    object->value.firstFlag = source->firstFlag;
    object->value.secondFlag = source->secondFlag;
    object->value.value = source->value;
    object->value.active = source->active;
}
}
