#ifndef SMT4_NW_ARCHIVESECTION_H
#define SMT4_NW_ARCHIVESECTION_H

#include "common.h"

typedef struct ArchiveSection {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 offset;
    /* 0x08 */ u32 size;
} ArchiveSection;

#endif
