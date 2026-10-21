/* NON_MATCHING: retail emits 'mov r5, r0'; compiler emits 'mov r4, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Address { u8 unk00[6]; u16 port; };
struct Interface;
struct InterfaceVtable { u8 unk00[0x58]; s32 (*resolve)(Interface *, u16 *); };
struct Interface { InterfaceVtable *vtable; };
struct Owner { u32 reserved; u8 active; u8 unk05[0x33]; struct { u32 reserved; Interface *interface; } address; };
void onlineSockAddrCopy(void *output, const Address *source);
s32 FUN_002f2dfc(Owner *owner, Address *address) {
    Interface *interface = owner->address.interface;
    if (!interface) return 0;
    u16 port = address->port;
    port = (u16)((port << 8) | (port >> 8));
    if (!interface->vtable->resolve(interface, &port)) return 0;
    address->port = (u16)((port << 8) | (port >> 8));
    owner->active = 1;
    onlineSockAddrCopy(&owner->address, address);
    return 1;
}
}
