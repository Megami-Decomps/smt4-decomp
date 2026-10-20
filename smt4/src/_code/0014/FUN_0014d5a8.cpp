#include "common.h"

extern "C" {

typedef struct Header {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 offset;
} Header;

/* Address of the block the header's offset (relative to the header) points at. */
s32 FUN_0014d5a8(Header *header)
{
    return (s32)header + header->offset;
}

} /* extern "C" */
