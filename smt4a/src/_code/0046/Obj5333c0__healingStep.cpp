#include "classes/Obj5333c0.h"
#include "gamedata/GameFlags.h"
#include "gamedata/PartyMoney.h"

extern "C" {
void sysPlaySe(s32 id);
void pickObjStart(void *scene, const char *name);
void messageSetMode(s32 mode);
void messageMainSetTargetFlags(s32 flags);
s32 scrRunOpcodesStub(u32 script);
s32 messageGetChoiceResult(void);
s32 messageDismissNumericBanner(s32 value);
const u32 *gameGetSlotTable(void);
s32 FUN_00467df8(void);
void panelSetMode3(s32 amount, s32 flag);
s32 panelStateIs0(void);

s32 gameFlagIsSet(u32 flag);
}

void Obj5333c0::healingStep()
{
    switch (substate) {
    case 0:
        sysPlaySe(0xa5);
        pickObjStart(this, "qc_HealingYN");
        messageSetMode(1);
        messageMainSetTargetFlags(1);
        substate++;
        break;
    case 1:
        if (scrRunOpcodesStub(*script) == 2) {
            s32 choice = messageGetChoiceResult();
            if (choice == 0) {
                if ((s32)*gameGetSlotTable() < FUN_00467df8()) {
                    pickObjStart(this, "qc_HealingNoMoney");
                    messageDismissNumericBanner(0);
                    sysPlaySe(0xa5);
                    substate = 5;
                } else {
                    panelSetMode3(-FUN_00467df8(), 0);
                    substate++;
                }
            } else if (choice == 1) {
                substate = 5;
                messageDismissNumericBanner(0);
            }
        }
        break;
    case 2:
        if (panelStateIs0() == 1) {
            substate++;
        }
        break;
    case 3:
        if (messageDismissNumericBanner(0) == 1) {
            substate++;
            unk0C = 0;
            partyAddMoneyClampedForward(-FUN_00467df8());
        }
        break;
    case 4: {
        sysPlaySe(0xa5);
        pickObjStart(this, "qc_Healing");
        substate++;
        switch (kind) {
        case 2: gameFlagSetValue(0x468, 1, 1); break;
        case 3: gameFlagSetValue(0x469, 1, 1); break;
        case 4: gameFlagSetValue(0x46a, 1, 1); break;
        case 5: gameFlagSetValue(0x46b, 1, 1); break;
        case 6: gameFlagSetValue(0x46c, 1, 1); break;
        case 14: gameFlagSetValue(0x46d, 1, 1); break;
        }
        if (!gameFlagIsSet(0x4c4) &&
            gameFlagIsSet(0x468) && gameFlagIsSet(0x469) && gameFlagIsSet(0x46a) &&
            gameFlagIsSet(0x46b) && gameFlagIsSet(0x46c) && gameFlagIsSet(0x46d)) {
            gameFlagSetValue(0x4c4, 1, 1);
        }
        break;
    }
    case 5:
        if (scrRunOpcodesStub(*script) == 2) {
            state = 5;
            substate = 0;
            messageSetMode(0);
        }
        break;
    }
}
