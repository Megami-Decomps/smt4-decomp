#include "common.h"

extern "C" {

typedef struct GimicEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x1B];
    /* 0x1C */ s32 gimicId;
    /* 0x20 */ s16 flagOn;       /* flag that must be set, 0 for none */
    /* 0x22 */ s16 flagOff;      /* flag that must be clear, 0 for none */
    /* 0x24 */ u8 unk24[4];
} GimicEntry;                    /* 0x28 bytes */

typedef struct MapGimic {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 unk05[5];
    /* 0x0A */ u16 unk0A;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ GimicEntry entries[24];
} MapGimic;

extern MapGimic *g_mapGimic; /* 0x447a48 */

extern int FUN_002878fc(s16 gimicId);
extern int gameFlagIsSet(int flag);

/* Resets the map gimic block and re-triggers every active entry whose flag condition holds. */
void mapGimicReset(void)
{
    MapGimic *gimic = g_mapGimic;
    int i;

    gimic->enabled = 1;
    gimic->unk00 = 0;
    gimic->unk0A = 0;
    gimic->unk0C = 0;
    gimic->unk10 = 0;
    for (i = 0; i < 24; i++) {
        GimicEntry *entry = &g_mapGimic->entries[i];

        if (entry->active != 0) {
            s32 flagOn = entry->flagOn;
            s32 flagOff = entry->flagOff;

            if ((flagOn != 0 && gameFlagIsSet(flagOn) == 0) || (flagOff != 0 && gameFlagIsSet(flagOff) != 0)) {
                FUN_002878fc(entry->gimicId);
            }
        }
    }
}

} /* extern "C" */
