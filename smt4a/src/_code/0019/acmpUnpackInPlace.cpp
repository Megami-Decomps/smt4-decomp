#include "common.h"

extern "C" {

#define ACMP_GUARD 0x01234567

/* Header of an "ACMP" compressed blob; the packed data follows it. */
typedef struct AcmpHeader {
    /* 0x00 */ char magic[4];      /* "ACMP" */
    /* 0x04 */ u32 packedSize;
    /* 0x08 */ u32 headerSize;     /* always 0x20 */
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unpackedSize;
    /* 0x14 */ u32 guard[3];       /* ACMP_GUARD */
} AcmpHeader;

void FUN_002e59f8(void *src, void *dst, u32 size);
void FUN_0019fb60(void *data, u32 packedSize, u32 capacity);

/* Unpacks an ACMP blob in place: drops its header, then decompresses into the `capacity`-byte buffer. */
void acmpUnpackInPlace(u32 unused, AcmpHeader *header, u32 capacity)
{
    if (header->magic[0] == 'A' && header->magic[1] == 'C' && header->magic[2] == 'M'
        && header->magic[3] == 'P' && header->headerSize == sizeof(AcmpHeader)
        && header->packedSize != 0 && header->unpackedSize != 0
        && header->guard[0] == ACMP_GUARD && header->guard[1] == ACMP_GUARD
        && header->guard[2] == ACMP_GUARD) {
        u32 packedSize = header->packedSize;

        FUN_002e59f8(header + 1, header, packedSize);
        FUN_0019fb60(header, packedSize, capacity);
    }
}

} /* extern "C" */
