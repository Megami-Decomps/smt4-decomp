#include "common.h"

extern "C" {

typedef struct Header {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 offset;
} Header;

/* Address of the block the header's offset (relative to the header) points at. */
s32 FUN_0014d36c(Header *header)
{
    return (s32)header + header->offset;
}

} /* extern "C" */
