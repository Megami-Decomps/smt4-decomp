#include "common.h"

extern "C" {

typedef struct SectionRef {
    /* 0x0 */ u16 kind;
    /* 0x2 */ u16 unk2;
    /* 0x4 */ s32 offset;
    /* 0x8 */ u32 size;
} SectionRef;

typedef struct WaveArchiveHeader {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ SectionRef sections[2];
} WaveArchiveHeader;

/* Finds the info block section (kind 0x6800) and returns the block's address. */
s32 nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlock(WaveArchiveHeader *header)
{
    SectionRef *section;

    if (header->sections[0].kind == 0x6800) {
        section = &header->sections[0];
    } else if (header->sections[1].kind == 0x6800) {
        section = &header->sections[1];
    } else {
        section = NULL;
    }
    return (s32)header + section->offset;
}

} /* extern "C" */
