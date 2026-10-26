#include "common.h"

struct Record {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[20];
};

struct Records {
    /* 0x00 */ Record *items;
};

struct Counts {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 count;
};

struct Object {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ Records *records;
    /* 0x40 */ Counts *counts;
};

extern "C" void FUN_0031a81c(Object *object)
{
    Records *records = object->records;
    Counts *counts = object->counts;
    Record *record = records->items;
    s32 count = counts->count;

    for (s32 i = 0; i < count; i++)
        record[i].id = -1;
}
