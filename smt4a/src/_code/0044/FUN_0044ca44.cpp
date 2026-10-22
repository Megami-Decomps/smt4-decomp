/* NON_MATCHING: retail retains the trivial-element destruction loop and native base-destructor scheduling. */
#include "shard/LateStartResourceOwners.h"
struct DerivedResourceBuffers {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[12];
    /* 0x10 */ AllocatedResourceBuffer first;
    /* 0x20 */ AllocatedResourceBuffer second;
    /* 0x30 */ const void *interfaceVtable;
    /* 0x34 */ u8 unk34[0x2c];
    /* 0x60 */ AllocatedResourceBuffer records;
};
extern "C" {
extern const u32 DAT_0055b89c[];
extern const u32 DAT_0055b884[];
extern const u32 DAT_0055c4f0[];
DerivedResourceBuffers *FUN_0044ca44(DerivedResourceBuffers *object)
{
    object->vtable = DAT_0055b89c;
    object->records.clearAndRelease();
    object->interfaceVtable = DAT_0055c4f0;
    object->vtable = DAT_0055b884;
    object->second.clearAndRelease();
    object->first.clearAndRelease();
    return object;
}
}
