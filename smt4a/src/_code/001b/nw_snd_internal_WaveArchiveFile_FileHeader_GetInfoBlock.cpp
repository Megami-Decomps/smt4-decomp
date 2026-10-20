#include "common.h"

extern "C" {

typedef struct Section {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 offset;
    /* 0x08 */ u32 size;
} Section;

typedef struct FileHeader {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Section sections[2];
} FileHeader;

/* Returns the info block: the section of kind 0x6800 among the header's two sections. */
u8 * nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlock(FileHeader *header)
{
    Section *section;

    if (header->sections[0].kind == 0x6800) {
        section = &header->sections[0];
    } else if (header->sections[1].kind == 0x6800) {
        section = &header->sections[1];
    } else {
        section = NULL;
    }
    return (u8 *)header + section->offset;
}

} /* extern "C" */
