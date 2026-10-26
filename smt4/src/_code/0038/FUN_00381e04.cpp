/* NON_MATCHING: only the order of the two constant setups at entry differs (retail loads 0 into r6 before 5 into r5). */
#include "common.h"
#include "util/CalleeContracts.h"
#include "gamedata/SaveSlotTableIV.h"

/* The healing counter scene of the quest center: its state and substate words, and the script it runs. */
struct HealingScene199 {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[0x5b4];
    /* 0x5C4 */ u32 *script;
};

extern "C" {
void buttonHelpSetPreset(s32 preset);
void scrScriptProcessStartMappedEntry(HealingScene199 *scene, const char *name);
void messageMainSetTargetFlags(s32 flags);
s32 scrRunOpcodesStub(u32 script);
s32 messageMainGetChoiceResult(void);
s32 messageMainTargetIsClear(void);
s32 FUN_0029cc44(s32 value);
void partyMoneyAddForward(s32 amount);
s32 questCenterGetHealingFee(void);
}

/* State 1 of the healing counter: plays the healing talk, offers the choice, takes the fee. */
extern "C" void FUN_00381e04(HealingScene199 *scene)
{
    switch (scene->substate) {
    case 0:
        buttonHelpSetPreset(0xa3);
        scrScriptProcessStartMappedEntry(scene, "qc_HealingYN");
        messageMainSetTargetFlags(1);
        scene->substate++;
        break;
    case 1:
        if (scrRunOpcodesStub(*scene->script) == 2) {
            s32 choice = messageMainGetChoiceResult();
            if (choice == 0) {
                if (gameGetSlotTable()->money < questCenterGetHealingFee()) {
                    scrScriptProcessStartMappedEntry(scene, "qc_HealingNoMoney");
                    FUN_0029cc44(0);
                    buttonHelpSetPreset(0xa3);
                    scene->substate = 5;
                } else {
                    FUN_0029c43c(-questCenterGetHealingFee(), 0);
                    scene->substate++;
                }
            } else if (choice == 1) {
                scene->substate = 5;
                FUN_0029cc44(0);
            }
        }
        break;
    case 2:
        if (messageMainTargetIsClear() == 1) {
            scene->substate++;
        }
        break;
    case 3:
        if (FUN_0029cc44(0) == 1) {
            scene->substate++;
            scene->unk0C = 0;
            partyMoneyAddForward(-questCenterGetHealingFee());
        }
        break;
    case 4:
        buttonHelpSetPreset(0xa3);
        scrScriptProcessStartMappedEntry(scene, "qc_Healing");
        scene->substate++;
        break;
    case 5:
        if (scrRunOpcodesStub(*scene->script) == 2) {
            scene->state = 5;
            scene->substate = 0;
        }
        break;
    }
}
