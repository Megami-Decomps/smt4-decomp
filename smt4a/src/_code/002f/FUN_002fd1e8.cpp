/* NON_MATCHING: compiler uses different register allocation, frame setup or instruction scheduling than retail. */
#include "common.h"
extern "C" {
extern const u8 DAT_00559234;
struct Object { const void *vtable; u8 unk04[8]; u8 string[8]; u16 kind; u8 unk16[2]; u32 second; u32 third; };
Object *sharedRefInit(Object *);
void *onlineStringCopyConstruct(void *, u32);
/* Constructs the shared string object and clears its auxiliary fields. */
Object *FUN_002fd1e8(Object *object, u32 text, u32 option, u32 flags) {
    object = sharedRefInit(object);
    object->vtable = &DAT_00559234;
    onlineStringCopyConstruct(object->string, text);
    object->kind = 1; object->second = 0; object->third = 0;
    return object;
}
}
