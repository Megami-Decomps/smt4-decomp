#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include <stddef.h>
extern "C" {
void FUN_003c8428(s32 selection);
s32 gameGetOptionProgressStatus(void);
void FUN_00256194(void);
void FUN_00256124(void);
void gameOptionsEnableAndReset(void);
void FUN_002560a4(s32 command);
void FUN_003c86bc(void);
PartyDamageSlotsIV *gameGetSlotTable(void);
void FUN_00337cfc(BtlMainState *state, void *snapshot, GameUnitSortRecord *unit);
void FUN_00255e38(BtlMainState *state, void *snapshot, s32 mode, s32 slot, s32 flags);

// Apply the selected option action, then queue the reserve unit's battle snapshot.
void btlApplyOptionAndSnapshotReserve(BtlMainState *state)
{
    struct OptionActionView {
        u8 prefix[0x11C];
        u16 selection;
        u8 unk11E[0x2F28 - 0x11E];
        s32 command;
    };
    struct ReserveSlotsView {
        u8 prefix[0x910C];
        GameUnitSortRecord unit;
    };
    struct EntrySnapshotView {
        u8 prefix[0xCC];
        u8 snapshot[0x18C];
    };
    typedef char OptionActionOffsets[offsetof(OptionActionView, selection) == 0x11C &&
        offsetof(OptionActionView, command) == 0x2F28 ? 1 : -1];
    typedef char ReserveSlotsOffset[offsetof(ReserveSlotsView, unit) == 0x910C ? 1 : -1];
    typedef char EntrySnapshotOffset[offsetof(EntrySnapshotView, snapshot) == 0xCC &&
        sizeof(EntrySnapshotView) <= sizeof(BtlEntry) ? 1 : -1];
    OptionActionView *action = (OptionActionView *)state;
    if (state->battleFlags & 0x40000)
        return;
    if (action->selection != 0) {
        FUN_003c8428((s16)action->selection);
    } else {
        s32 progress = gameGetOptionProgressStatus();
        if (action->command > 0) {
            switch (progress) {
            case 1:
                FUN_00256194();
                gameOptionsEnableAndReset();
                break;
            case 2:
                FUN_00256124();
                gameOptionsEnableAndReset();
                break;
            }
            FUN_002560a4(action->command);
        } else {
            if (progress == 0)
                return;
            switch (progress) {
            case 1:
                FUN_003c86bc();
                break;
            case 2:
                break;
            default:
                return;
            }
        }
    }
    GameUnitSortRecord *unit = &((ReserveSlotsView *)gameGetSlotTable())->unit;
    if (unit->id != 0) {
        BtlEntry entry;
        EntrySnapshotView *view = (EntrySnapshotView *)&entry;
        FUN_00337cfc(state, view->snapshot, unit);
        FUN_00255e38(state, view->snapshot, 2, 54, 0);
    }
}
}
