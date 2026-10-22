/* NON_MATCHING: native constructor vtable and embedded-interface address scheduling differ. */
#include "common.h"
struct InterfaceOwner663 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[0x40];
    /* 0x44 */ const void *firstInterface;
    /* 0x48 */ u8 unk48[8];
    /* 0x50 */ const void *secondInterface;
};
extern "C" {
extern const u8 DAT_0055c30c[];
extern const u8 DAT_0055c24c[];
void FUN_0046605c(InterfaceOwner663 *object);
InterfaceOwner663 *FUN_00466330(InterfaceOwner663 *object)
{
    object->firstInterface = DAT_0055c30c + 0x34;
    object->vtable = DAT_0055c30c;
    object->secondInterface = DAT_0055c30c + 0x48;
    FUN_0046605c(object);
    object->vtable = DAT_0055c24c;
    return object;
}
}
