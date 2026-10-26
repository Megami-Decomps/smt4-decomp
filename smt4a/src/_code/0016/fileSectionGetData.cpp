#include "common.h"
#include "code/Code0016_Smt4a.h"

extern "C" {

typedef struct FileSection {
    /* 0x00 */ u32 offset;     /* data offset from the file base */
    /* 0x04 */ u32 size;
    /* 0x08 */ u32 dataOffset;
    /* 0x0C */ u32 unk0C;
} FileSection;                  /* 0x10 bytes */

typedef struct FileHeader {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 sectionTable;  /* byte offset of the section table */
} FileHeader;

/* Returns a pointer to section `index`'s data (NULL when it is empty) and its size through *size when given. */
u8 *fileSectionGetData(FileHeader *file, int index, u32 *size)
{
    FileSection *section = (FileSection *)((u8 *)file + index * 0x10 + file->sectionTable);

    if (size != NULL) {
        *size = section->size;
    }
    if (section->size == 0) {
        return NULL;
    }
    return (u8 *)file + section->dataOffset;
}

} /* extern "C" */
