/* NON_MATCHING: -O2 candidate; UI-root/true registers swap, common flag-set block placement differs, and field/widget addresses are cached instead of recomputed. */
#include "battle/btlUI.h"

struct Menu32;
struct BattleTargetFlagView {
    u8 unk00[0x74b0];
    u8 requiresTargetSelection;
};
struct CommandSkillRecord {
    u8 unk00[0x28];
    u32 : 5;
    u32 target : 4;
    u32 : 23;
};
struct CommandItemRecord {
    u8 unk00[0x32];
    u16 skill;
    u8 unk34[6];
    u8 category;
    u8 unk3b[0x2d];
    u32 flags;
};

static inline bool commandRequiresTargetSelection(const CommandSkillRecord *skill)
{
    return skill->target == 2 || skill->target == 3 || skill->target == 4;
}

extern "C" {
extern BtlUiGlobalsA g_btlUi;
CommandItemRecord *dataTable8FindRecord(s32 id);
CommandSkillRecord *dataTable04FindById(u32 id);
void FUN_002ccde8(Menu32 *menu, s16 *kind, s16 *id);
void FUN_002fa7a8(Menu32 *menu);
void menu32EnterState27(Menu32 *menu);
s32 menu32ModeIsNot5(BtlUiObjAA *menu);
s32 FUN_00280030(BtlUiObjBA *owner);
void uiWorkEndState1(BtlUiObjAA *menu);
void owner2DCInitSub(BtlUiObjBA *owner);

void btlUiSelectCommandTargetState()
{
    BtlUiA *ui = g_btlUi.ui;
    BattleTargetFlagView *target = (BattleTargetFlagView *)ui;
    target->requiresTargetSelection = 0;
    s16 kind = 0;
    s16 id = 0;
    FUN_002ccde8((Menu32 *)&ui->objC, &kind, &id);
    switch (kind) {
    case 2:
    case 3: {
        const CommandSkillRecord *skill = dataTable04FindById(id);
        if (commandRequiresTargetSelection(skill)) {
            target->requiresTargetSelection = 1;
        }
        break;
    }
    case 8: {
        const CommandItemRecord *item = dataTable8FindRecord(id);
        if (item->skill != 0) {
            const CommandSkillRecord *skill = dataTable04FindById(item->skill);
            if (commandRequiresTargetSelection(skill)) {
                target->requiresTargetSelection = 1;
            }
        } else if (!(item->flags & 4)) {
            item = dataTable8FindRecord(id);
            if ((item->category & 0x7f) != 1) {
                target->requiresTargetSelection = 1;
            }
        }
        break;
    }
    }
    if (target->requiresTargetSelection != 0) {
        ui->state = 16;
        FUN_002fa7a8((Menu32 *)&ui->objC);
    } else {
        ui->state = 12;
        menu32EnterState27((Menu32 *)&ui->objC);
        BtlUiA *current = g_btlUi.ui;
        if (menu32ModeIsNot5(&current->objA) != 0 &&
            FUN_00280030(&current->objB) != 0) {
            uiWorkEndState1(&current->objA);
            owner2DCInitSub(&current->objB);
        }
    }
}
}
