#include "shard/Shard0046.h"
#include "gamedata/GameFlags.h"
#include "classes/Obj5333c0.h"
#include "code/Code0037.h"
#include "code/Code003a.h"
#include "code/Code002c_Smt4a.h"
#include "code/Code003c_Smt4a.h"

extern "C" {
void messageSetMode(s32 mode);
void placeWinStartText(const u8 *name);
void messageBannerRestartOrClear(void);

Entry40 *dataTable28Type0GetEntry(u32 unused, u32 index);
u8 gameFlagIsSet(u32 flag);
u32 messageWindowIsState1(void);

/* Starts the interaction's next script: the quest announcement, the active quest's talk or the entry's confirmation;
 * a non-interactive entry ends in state 17. */
void questInteractionChooseEntry(Obj5333c0 *object)
{
    FUN_003a7630(1);
    s32 activeQuest = 0;
    for (u16 index = 0; index < 32; ++index) {
        if (gameDataStatusFlagGet(index) == 1) {
            activeQuest = index;
            break;
        }
    }
    u32 specialAvailable = 0;
    u32 announced = gameFlagIsSet(0x586);
    if (activeQuest == 6 && object->location != 0) {
        if (object->kind != 14) {
            specialAvailable = 1;
        }
        gameFlagSetValue(0x586, 1, 1);
    }
    if ((specialAvailable & ~announced) != 0 && object->location != 0) {
        messageMainClearBannerRequest();
        messageSetMode(1);
        pickObjStart(object, "qc_total_quest_ann");
        object->scriptActive = 1;
        object->startState(14);
        return;
    }
    if (activeQuest > 0 && specialAvailable == 0 && object->location != 0) {
        messageMainClearBannerRequest();
        messageSetMode(1);
        pickObjStart(object, "qc_total_quest");
        object->scriptActive = 1;
        object->startState(14);
        return;
    }
    Entry40 *entry = dataTable28Type0GetEntry((u32)&object->talkTable, object->kind);
    placeWinStartText(entry->data);
    if (object->location != 0) {
        messageMainRequestBanner();
        pickObjStart(object, "qc_confirm");
        object->startState(6);
        return;
    }
    FUN_0037d6e4(0);
    object->clearFlags(0x200);
    object->startState(17);
    if (messageWindowIsState1() != 0) {
        messageBannerRestartOrClear();
    }
}
} /* extern "C" */
