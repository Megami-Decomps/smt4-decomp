#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

struct RosterSelectionState {
    u8 unk00[0x10];
    u16 group; // 0x10
    s8 column; // 0x12
    s8 row; // 0x13
};
typedef char RosterSelectionStateOffsetsCheck[
    sizeof(RosterSelectionState) == 0x14 && offsetof(RosterSelectionState, group) == 0x10 &&
    offsetof(RosterSelectionState, column) == 0x12 && offsetof(RosterSelectionState, row) == 0x13 ? 1 : -1];

// Restore the selected active roster position, falling back to the first active reserve entry.
extern "C" void FUN_004f452c(RosterSelectionState *selection, BtlMainStateA *battle)
{
    if (battle != NULL && battle->roster != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BattleRosterRecordA *entry = &battle->roster[index];
            if ((entry->liveFlags.unk50 & 1) && (entry->liveFlags.unk50 & 0x80)) {
                entry->liveFlags.unk50 &= ~8;
            }
        }
    }
    BattleRosterRecordA **roster = &battle->roster;
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA *entry = &(*roster)[index];
        if ((entry->liveFlags.unk50 & 1) != 0 && (entry->liveFlags.unk50 & 0x80) != 0 &&
            entry->selection.column == selection->column && entry->selection.row == selection->row) {
            entry->liveFlags.unk50 |= 8;
            selection->group = entry->motion.group;
            return;
        }
    }
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA *entry = &(*roster)[index];
        if ((entry->liveFlags.unk50 & 1) != 0 && (entry->liveFlags.unk50 & 0x80) != 0) {
            entry->liveFlags.unk50 |= 8;
            selection->group = entry->motion.group;
            selection->column = entry->selection.column;
            selection->row = entry->selection.row;
            return;
        }
    }
}
