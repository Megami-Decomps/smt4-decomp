/* NON_MATCHING: State-mask word loads and scratch parameter-address reuse differ from retail. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
void *gameGetSlotTable(void);
s32 gameOptionsClassifyMode(void);
void FUN_003eb760(BtlMainStateA *battle, void *parameters, const BattleSlotSourceRecordA *source);
void FUN_004ca63c(BtlMainStateA *battle, void *parameters, s32 kind, s32 index, s32 mode);
void optionsApplyOverride(s32 value);
void FUN_004d9ebc(s32 mode);
void optionsResetIfFlagSet(void);
void optionsResetIfNoFlag(void);
void FUN_004da144(void);
void optionsSetFlag1(void);
extern BtlMainGlobalsA g_btlMain;

/* Applies battle-specific option overrides and rebuilds the player's temporary combatant. */
void FUN_003e87a8(BtlMainStateA *battle)
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
    /* This player record lies past the shared slot-table prefix. */
    struct PlayerSlotView {
        /* 0x0000 */ u8 unk0000[0x1CA4];
        /* 0x1CA4 */ BattleSlotSourceRecordA player;
    };
    typedef char OptionViewOffsetsCheck[offsetof(OptionStateView, mode) == 0x150 &&
        offsetof(OptionStateView, overrideValue) == 0x3028 &&
        offsetof(OptionMaskView, suppressed) == 0x130 &&
        offsetof(PlayerSlotView, player) == 0x1CA4 ? 1 : -1];
    BtlCombatantEntryA temporary;
    OptionStateView *options = (OptionStateView *)battle;
    if ((battle->stateFlags64.bits & ((OptionMaskView *)&g_btlMain)->suppressed) != 0) {
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
                FUN_004da144();
                break;
            case 2:
                break;
            default:
                return;
            }
        }
    }
    PlayerSlotView *slots = (PlayerSlotView *)gameGetSlotTable();
    BattleSlotSourceRecordA *player = &slots->player;
    if (player->id != 0) {
        void *parameters = &temporary.unitParameters.parameterBlock;
        FUN_003eb760(battle, parameters, player);
        FUN_004ca63c(battle, parameters, 2, 54, 0);
    }
}
}
