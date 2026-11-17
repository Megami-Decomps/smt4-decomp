#include "common.h"
#include "nw/ArchiveSection.h"

extern "C" {

typedef struct FileHeader {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ ArchiveSection sections[2];
} FileHeader;

/* Returns the offset of the info block: the section of kind 0x6800 among the header's two sections. */
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(FileHeader *header)
{
    ArchiveSection *section;

    if (header->sections[0].kind == 0x6800) {
        section = &header->sections[0];
    } else if (header->sections[1].kind == 0x6800) {
        section = &header->sections[1];
    } else {
        section = NULL;
    }
    return section->offset;
}

} /* extern "C" */
