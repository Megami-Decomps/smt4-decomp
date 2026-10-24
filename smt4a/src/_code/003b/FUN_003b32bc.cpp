/* NON_MATCHING: same unrolled loop; retail keeps the count in r2 and the -1 constant in r1, this build counts in r1 and puts -1 in r2. */
#include "common.h"

struct Record {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[40];
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

extern "C" void FUN_003b32bc(Object *object)
{
    Records *records = object->records;
    Counts *counts = object->counts;
    s32 count = counts->count;
    Record *record = records->items;
    s32 i;

    for (i = 0; i < count; i++) {
        record[i].id = -1;
    }
}
