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
    /* 0x14 */ Section sections[3];
} FileHeader;

/* Returns the size of the string block: the section of kind 0x2000 among the header's three sections. */
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(FileHeader *header)
{
    Section *section;

    if (header->sections[0].kind == 0x2000) {
        section = &header->sections[0];
    } else if (header->sections[1].kind == 0x2000) {
        section = &header->sections[1];
    } else if (header->sections[2].kind == 0x2000) {
        section = &header->sections[2];
    } else {
        section = NULL;
    }
    return section->size;
}

} /* extern "C" */
