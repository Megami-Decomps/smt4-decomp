#include "common.h"

extern "C" {

typedef struct Header {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 infoRef;
    /* 0x16 */ u8 unk16[0xA];
    /* 0x20 */ u8 sizedRef[1];
    /* 0x21 */ u8 unk21[0xB];
    /* 0x2C */ u8 dataRef[1];
} Header;

/* Finds the info block reference (id 0x4000) among the three header references. */
u32 nw_snd_internal_StreamSoundFile_FileHeader_GetInfoBlockOffset(Header *header)
{
    u16 *ref;

    if (header->infoRef == 0x4000) {
        ref = &header->infoRef;
    } else if (*(s16 *)header->sizedRef == 0x4000) {
        ref = (u16 *)header->sizedRef;
    } else if (*(s16 *)header->dataRef == 0x4000) {
        ref = (u16 *)header->dataRef;
    } else {
        ref = NULL;
    }
    return *(u32 *)(ref + 2);
}

} /* extern "C" */
