/* NON_MATCHING: compiler keeps the constructed address in r4 and subtracts the member offset only for socketReset. */
#include "common.h"
#include <stddef.h>
extern "C" {
struct AddressObject { u8 address[0x10]; u8 socket[0x28]; u32 value; };
void socketReset(void *socket);
void *onlineSockAddrConstruct(void *address);
/* Constructs the socket address and resets the socket object. */
AddressObject *FUN_00301490(AddressObject *object) {
    object = (AddressObject *)((u8 *)onlineSockAddrConstruct(&object->socket) - offsetof(AddressObject, socket));
    object->value = 0;
    socketReset(object);
    return object;
}
}
