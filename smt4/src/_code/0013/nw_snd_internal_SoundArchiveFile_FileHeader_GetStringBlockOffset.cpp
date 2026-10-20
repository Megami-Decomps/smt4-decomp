#include "common.h"

extern "C" {

/* One entry of the file header's section table. */
typedef struct SectionRef {
    /* 0x0 */ u16 kind;
    /* 0x2 */ u16 unk2;
    /* 0x4 */ u32 offset;
    /* 0x8 */ u32 size;
} SectionRef;

typedef struct FileHeader {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ SectionRef sections[3];
} FileHeader;

/* Finds the string block (kind 0x2000) among the first three sections and returns its offset. */
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockOffset(FileHeader *header)
{
    SectionRef *section;

    if (header->sections[0].kind == 0x2000) {
        section = &header->sections[0];
    } else if (header->sections[1].kind == 0x2000) {
        section = &header->sections[1];
    } else if (header->sections[2].kind == 0x2000) {
        section = &header->sections[2];
    } else {
        section = NULL;
    }
    return section->offset;
}

} /* extern "C" */
