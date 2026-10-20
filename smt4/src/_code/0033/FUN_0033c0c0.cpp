#include "common.h"

extern "C" {

int FUN_002b9024(u32 id);

typedef struct Source {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
} Source;

typedef struct Record {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ u16 unk2A;
} Record;

u16 FUN_0033c0c0(Source *source)
{
    Record *record = (Record *)FUN_002b9024(source->id);

    return record->unk2A;
}

} /* extern "C" */
