/* Reports the table-four category of the highest-valued battle-list entry. */
#include "battle/btlMain.h"
#include "gamedata/Table8Record.h"
#include "gamedata/Table04Record.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
s32 scrGetArg(u32 index);
u32 FUN_001ba3d4(u32 id);
Table8Record *dataTable8FindRecord(u32 id);
Table04Record *dataTable04FindById(u32 id);
void scrSetResult(u32 result);

u32 btlScriptGetBestEntryCategory(void)
{
    s32 enabled = scrGetArg(0);
    u32 best = 0;
    u32 selected = 0;
    u32 category = 0;
    /* This list extends past the shared BtlMainStateA layout. */
    struct BattleListView {
        u8 unk0000[0x4E58];
        u16 *begin;
        u16 *end;
    };
    BattleListView *state = (BattleListView *)btlGetMainState();
    if (enabled != 0) {
        for (u16 *entry = state->begin; entry != state->end; ++entry) {
            u16 id = *entry;
            u32 value = (u16)FUN_001ba3d4(id);
            if (value > best) {
                best = value;
                selected = id;
            }
        }
        Table8Record *entry = dataTable8FindRecord(selected);
        Table04Record *record = dataTable04FindById(entry->unk32);
        if (record != NULL) {
            category = (record->properties & 0xFFFF) >> 11;
        }
    }
    scrSetResult(category);
    return 1;
}
}
