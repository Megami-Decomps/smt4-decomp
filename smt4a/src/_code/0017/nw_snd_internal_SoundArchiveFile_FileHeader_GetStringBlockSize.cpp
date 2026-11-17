#include "common.h"
#include "nw/ArchiveSection.h"

extern "C" {

typedef struct FileHeader {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ ArchiveSection sections[3];
} FileHeader;

/* Returns the size of the string block: the section of kind 0x2000 among the header's three sections. */
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(FileHeader *header)
{
    ArchiveSection *section;

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
