/* NON_MATCHING: the final location-byte load is hoisted before the state/substate STM and the STM uses r4 instead of a scratch register. */
#include "classes/Obj5333c0.h"
#include "gamedata/GameFlags.h"
#include "shard/Shard0046.h"
#include "ui/UiControl.h"
#include "code/Code003a.h"
#include "code/Code002c_Smt4a.h"
#include "code/Code003c_Smt4a.h"

extern "C" {
void sysPlaySe(s32 id);
void placeWinStartText(const u8 *name);

Entry40 *dataTable28Type0GetEntry(u32 unused, u32 index);
u8 gameFlagIsSet(u32 flag);
}

/* Runs pending quest announcements before starting or resuming the conversation. */
extern "C" void questCenterBeginConversation(Obj5333c0 *object)
{
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
        if (object->kind != 14)
            specialAvailable = 1;
        gameFlagSetValue(0x586, 1, 1);
    }
    if ((specialAvailable & ~announced) != 0 && object->location != 0) {
        messageMainClearBannerRequest();
        messageSetMode(1);
        sysPlaySe(0x92);
        pickObjStart(object, "qc_total_quest_ann");
        object->scriptActive = 1;
        object->startState(14);
        return;
    }
    if (activeQuest > 0 && specialAvailable == 0 && object->location != 0) {
        messageMainClearBannerRequest();
        messageSetMode(1);
        sysPlaySe(0x92);
        pickObjStart(object, "qc_total_quest");
        object->scriptActive = 1;
        object->startState(14);
        return;
    }
    FUN_003a7630(1);
    messageMainRequestBanner();
    if (object->scriptActive != 0)
        pickObjStart(object, "qc_restart");
    else
        pickObjStart(object, "qc_start");
    Entry40 *entry = dataTable28Type0GetEntry((u32)&object->talkTable, object->kind);
    placeWinStartText(entry->data);
    object->startState(6);
    if (object->location != 0)
        return;
    sysPlaySe(0xa0);
}
