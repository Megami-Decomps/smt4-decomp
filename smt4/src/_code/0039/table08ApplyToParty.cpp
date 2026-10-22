#include "common.h"

struct Table08Record {
    /* 0x00 */ u8 unk00[0x6e];
    /* 0x6E */ u8 flags;
};

struct GameSlotTable {
    /* 0x0000 */ u8 unk0000[0x90f0];
    /* 0x90F0 */ s8 slots[24];     /* negative when empty */
};

extern "C" {
Table08Record *dataTable08Sub1GetRecord(u32 id);
s32 FUN_00232b68(s32 slot, Table08Record *record, u32 option, s32 arg3, s32 arg4);
GameSlotTable *gameGetSlotTable(void);
void FUN_00250d84(u32 id, s32 mode);

/* Returns 0 when record `id` applies to the player or any filled slot (and, without `option`,
 * runs FUN_00250d84 on it unless its flag 0 is set); 1 otherwise. */
u32 table08ApplyToParty(u32 id, u32 option)
{
    bool applied = false;
    Table08Record *record = dataTable08Sub1GetRecord(id);
    GameSlotTable *table;
    s32 i;

    if (record != NULL) {
        if (FUN_00232b68(-1, record, option, 0, 0) == 0) {
            applied = true;
        }
        table = gameGetSlotTable();
        for (i = 0; i < 24; i++) {
            s32 slot = table->slots[i];
            if (slot >= 0 && FUN_00232b68(slot, record, option, 0, 0) == 0) {
                applied = true;
            }
        }
        if (applied) {
            if (option == 0 && (record->flags & 1) == 0) {
                FUN_00250d84(id, 1);
            }
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
