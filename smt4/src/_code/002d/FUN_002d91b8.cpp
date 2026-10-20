/* NON_MATCHING: register allocation only: retail loads the table pointer into r2 (built: r1) */
#include "common.h"

extern "C" {

typedef struct FlagData {
    /* 0x00000 */ u8 unk00000[0x1ec10];
    /* 0x1ec10 */ u8 flagsA[0x40];    /* flags for ids 0..0x3f, indexed by id */
    /* 0x1ec50 */ u8 unk1ec50[0x590c];
    /* 0x2455c */ u8 unk2455c[0x600];
    /* 0x24b5c */ u8 flagsB[0x48];    /* flags for ids 0x40..0x47, indexed by id */
} FlagData;

typedef struct FlagTable {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ FlagData data;
} FlagTable;

typedef struct GameDataBlocks {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ FlagTable *table;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

/* Sets bit 2 of the flag byte for id `id` (0..0x47). */
void FUN_002d91b8(s32 id)
{
    FlagTable *table;
    FlagData *data;
    u8 *flag;

    if (id < 0x48) {
        if (id >= 0) {
            table = g_gameDataBlocks.table;
            data = &table->data;
            if (id >= 0x40) {
                flag = &data->flagsB[id];
            } else {
                flag = &data->flagsA[id];
            }
            if (flag != NULL) {
                *flag |= 4;
            }
        }
    }
}

} /* extern "C" */
