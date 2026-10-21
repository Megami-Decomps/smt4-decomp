/* NON_MATCHING: retail emits 'push {r4, r5, r6, lr}'; compiler emits 'push {r3, r4, r5, r6, r7, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Address { u8 unk00[6]; u16 port; };
struct Object { u8 unk00[0x138]; Address address; u8 unk140[0x6C]; u8 resolver; };
u16 FUN_002f815c(void);
s32 FUN_002f2dfc(void *owner, Address *address, u32 option);
s32 FUN_002fd706(Object *object) {
    for (u32 attempt = 0; attempt < 5; ++attempt) {
        u16 port = FUN_002f815c();
        object->address.port = (u16)((port << 8) | (port >> 8));
        if (FUN_002f2dfc(&object->resolver, &object->address, 0)) return 1;
    }
    return 0;
}
}
