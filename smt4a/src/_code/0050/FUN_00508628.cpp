/* Returns the address of the record at the relative offset stored in `header`, or NULL if the offset is unset or the type tag is wrong. */
#include "common.h"

extern "C" {

typedef struct Header {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 tag;
    /* 0x1A */ u8 unk1A[2];
    /* 0x1C */ s32 offset;
} Header;

s32 FUN_00508628(Header *header)
{
    if (header->offset != -1 && header->tag == 0x2210) {
        return (s32)header + header->offset;
    }
    return 0;
}

}
