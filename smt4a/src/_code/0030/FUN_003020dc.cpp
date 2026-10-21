/* NON_MATCHING: retail emits 'push {r2, r3, r4, r5, r6, lr}'; compiler emits 'push {r4, r5, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct CallbackObject;
struct CallbackTable { u8 unk00[0x14]; void (*invoke)(CallbackObject *, u32, u32, u32, u32, u32); };
struct CallbackObject { CallbackTable *vtable; };
extern struct { u32 reserved, value; CallbackObject *callback; } g_systemTable;
void FUN_003020dc(u32 first, u32 second, u32 third, u32 fourth) {
    CallbackObject *callback = g_systemTable.callback;
    callback->vtable->invoke(callback, first, second, third, fourth, g_systemTable.value);
}
}
