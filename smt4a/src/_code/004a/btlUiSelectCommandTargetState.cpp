/* NON_MATCHING: the UI global base and constant 1 swap saved registers; this build also inserts two padding hints before the panel-operation check. */
#include "battle/BtlUiGlobal.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/ConsumableRecordA.h"

struct Menu32;
struct CommandSkillRecord {
    u8 unk00[0x28];
    u32 : 5;
    u32 target : 4;
    u32 : 23;
};

static inline bool commandRequiresTargetSelection(const CommandSkillRecord *skill)
{
    return skill->target == 2 || skill->target == 3 || skill->target == 4;
}

extern "C" {
void btlMenuResolveHighlightedCommand(Menu32 *menu, s16 *kind, s16 *id);
void FUN_002fa7a8(Menu32 *menu);
void menu32EnterState27(Menu32 *menu);
s32 menu32ModeIsNot5(BtlUiObjAA *menu);
s32 btlUiPanelOperationIsAllowed(BtlUiObjBA *owner);
BtlUiObjBA *FUN_00502754(u8 *subobject); /* returns the subobject's sprite (+0xBC) */
void uiWorkEndState1(BtlUiObjAA *menu);
void owner2DCInitSub(BtlUiObjBA *owner);

void btlUiSelectCommandTargetState()
{
    BtlUiA *ui = g_btlUi.ui;
    ui->requiresTargetSelection = 0;
    s16 kind = 0;
    s16 id = 0;
    btlMenuResolveHighlightedCommand((Menu32 *)&ui->objC, &kind, &id);
    switch (kind) {
    case 2:
    case 3: {
        const CommandSkillRecord *skill = (const CommandSkillRecord *)skillDataFindById(id);
        if (commandRequiresTargetSelection(skill)) {
            ui->requiresTargetSelection = 1;
        }
        break;
    }
    case 8: {
        const ConsumableRecordA *item = itemTableGetItemRecord(id);
        if (item->skillId != 0) {
            const CommandSkillRecord *skill = (const CommandSkillRecord *)skillDataFindById(item->skillId);
            if (commandRequiresTargetSelection(skill)) {
                ui->requiresTargetSelection = 1;
            }
        } else if (!(item->flags & 4)) {
            item = itemTableGetItemRecord(id);
            if ((item->groupFlags & 0x7f) != 1) {
                ui->requiresTargetSelection = 1;
            }
        }
        break;
    }
    }
    if (ui->requiresTargetSelection != 0) {
        ui->state = 16;
        FUN_002fa7a8((Menu32 *)&ui->objC);
    } else {
        ui->state = 12;
        menu32EnterState27((Menu32 *)&ui->objC);
        BtlUiA *current = g_btlUi.ui;
        if (menu32ModeIsNot5(&current->objA) != 0 &&
            btlUiPanelOperationIsAllowed(FUN_00502754(current->objA.tail.subobject)) != 0) {
            uiWorkEndState1(&current->objA);
            owner2DCInitSub(&current->objB);
        }
    }
}
}
