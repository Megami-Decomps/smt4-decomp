#include "common.h"

struct CopyRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ u8 bytes[20];
};

extern "C" {

/* Virtual slot: copies another record's two words and 20 payload bytes. */
void _ZN9Obj4225648copyFlagsEPK20SelectionValueRecord(CopyRecord *self, const CopyRecord *other)
{
    for (u32 index = 0; index < 20; index++) {
        self->bytes[index] = other->bytes[index];
    }
    self->first = other->first;
    self->second = other->second;
}

} /* extern "C" */
