/* NON_MATCHING: register allocation only: retail keeps the table pointer in r2 and the reciprocal constant in r0, the build the reverse */
#include "common.h"

extern "C" {

typedef struct Record00144fa8 {
    /* 0x00 */ u8 data[0x14];
} Record00144fa8;

typedef struct TexTable00144fa8 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Record00144fa8 **records;
} TexTable00144fa8;

TexTable00144fa8 *asdTMTexTableCallFileA(void);
void FUN_002a8ac4(Record00144fa8 *record, u32 arg);

/* Passes record (index mod 1000) of the texture table's record list on. */
void texTableRecordCall(u32 unused, s32 index, u32 arg)
{
    TexTable00144fa8 *table = asdTMTexTableCallFileA();

    FUN_002a8ac4(*table->records + index % 1000, arg);
}

} /* extern "C" */
