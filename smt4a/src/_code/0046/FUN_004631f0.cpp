/* NON_MATCHING: native constructor vtable and embedded-interface address scheduling differ. */
#include "common.h"
struct InterfaceOwner631 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[0x40];
    /* 0x44 */ const void *firstInterface;
    /* 0x48 */ u8 unk48[8];
    /* 0x50 */ const void *secondInterface;
};
extern "C" {
extern const u8 DAT_0055c1ec[];
extern const u8 DAT_0055c24c[];
void FUN_004630d0(InterfaceOwner631 *object);
InterfaceOwner631 *FUN_004631f0(InterfaceOwner631 *object)
{
    object->firstInterface = DAT_0055c1ec + 0x30;
    object->vtable = DAT_0055c1ec;
    object->secondInterface = DAT_0055c1ec + 0x44;
    FUN_004630d0(object);
    object->vtable = DAT_0055c24c;
    return object;
}
}
