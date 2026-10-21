/* NON_MATCHING: compiler uses different register allocation, frame setup or instruction scheduling than retail. */
#include "common.h"
extern "C" {
extern const u8 DAT_005585d0;
struct Object { const void *vtable; u8 unk04[2]; u16 port; };
void onlineSockAddrInit(Object *);
void onlineSockAddrSetHost(Object *, u32);
/* Initializes a socket address with its host and network-order port. */
Object *FUN_002f32ac(Object *object, u32 host, u16 port, u32 family) {
    object->vtable = &DAT_005585d0;
    onlineSockAddrInit(object);
    onlineSockAddrSetHost(object, host);
    object->port = (port << 8) | (port >> 8);
    return object;
}
}
