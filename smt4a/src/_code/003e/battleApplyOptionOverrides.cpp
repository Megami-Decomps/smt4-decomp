#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SaveSlotTable.h"
#include "battle/BtlGlobals.h"

extern "C" {
s32 gameOptionsClassifyMode(void);
void btlEntryApplyOptionOverrides(BtlMainStateA *battle, void *parameters, const PartySlotA *source);
void FUN_004ca63c(BtlMainStateA *battle, void *parameters, s32 kind, s32 index, s32 mode);
void optionsApplyOverride(s32 value);
void FUN_004d9ebc(s32 mode);
void optionsResetIfFlagSet(void);
void optionsResetIfNoFlag(void);
void supportUnitInitializeRandomCategory(void);
void optionsSetFlag1(void);

/* Applies battle-specific option overrides and rebuilds the player's temporary combatant. */
void battleApplyOptionOverrides(BtlMainStateA *battle)
{
    struct OptionStateView {
        /* 0x0000 */ u8 unk0000[0x150];
        /* 0x0150 */ u16 mode;
        /* 0x0152 */ u8 unk0152[0x2ED6];
        /* 0x3028 */ s32 overrideValue;
    };
    struct OptionMaskView {
        /* 0x000 */ u8 unk000[0x130];
        /* 0x130 */ u64 suppressed;
    };
    typedef char OptionViewOffsetsCheck[offsetof(OptionStateView, mode) == 0x150 &&
        offsetof(OptionStateView, overrideValue) == 0x3028 &&
        offsetof(OptionMaskView, suppressed) == 0x130 ? 1 : -1];
    BtlCombatantEntryA temporary;
    OptionStateView *options = (OptionStateView *)battle;
    u64 suppressed = ((OptionMaskView *)&g_btlMain)->suppressed;
    u64 flags = battle->stateFlags64.bits;
    if ((suppressed & flags) != 0) {
        return;
    }
    if (options->mode != 0) {
        FUN_004d9ebc((s16)options->mode);
    } else {
        s32 mode = gameOptionsClassifyMode();
        if (options->overrideValue > 0) {
            switch (mode) {
            case 1:
                optionsResetIfNoFlag();
                optionsSetFlag1();
                break;
            case 2:
                optionsResetIfFlagSet();
                optionsSetFlag1();
                break;
            }
            optionsApplyOverride(options->overrideValue);
        } else {
            switch (mode) {
            case 0:
                return;
            case 1:
                supportUnitInitializeRandomCategory();
                break;
            case 2:
                break;
            default:
                return;
            }
        }
    }
    PartySlotA *player = &gameGetSlotTable()->player;
    if (player->record.id != 0) {
        btlEntryApplyOptionOverrides(battle, &temporary.data, player);
        FUN_004ca63c(battle, &temporary.data, 2, 54, 0);
    }
}
}
