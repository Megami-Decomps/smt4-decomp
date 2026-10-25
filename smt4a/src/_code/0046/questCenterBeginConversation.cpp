/* NON_MATCHING: O3 hoists the final interactive byte load before the state/counter STM and consumes r4 instead of a temporary base (123/123). */
#include "shard/W6_W6Match7_QuestInteraction.h"
#include "gamedata/GameFlags.h"
#include "shard/Shard0046.h"
#include "shard/messageSetMode.h"
#include "util/FUN_003a7630.h"

extern "C" {
void sysPlaySe(s32 id);
void placeWinStartText(const u8 *name);
void FUN_003c1060();
void FUN_003c3e14();

s32 pickObjStart(QuestInteraction *object, const char *entry);
Entry40 *dataTable28Type0GetEntry(u32 unused, u32 index);
u8 gameFlagIsSet(u32 flag);
s32 FUN_002c2758(u16 index);
}

// Run pending quest announcements before starting or resuming the conversation.
extern "C" void questCenterBeginConversation(QuestInteraction *object)
{
    s32 activeQuest = 0;
    for (u16 index = 0; index < 32; ++index) {
        if (FUN_002c2758(index) == 1) {
            activeQuest = index;
            break;
        }
    }
    u32 specialAvailable = 0;
    u32 announced = gameFlagIsSet(0x586);
    if (activeQuest == 6 && object->interactive != 0) {
        if (object->kind != 14)
            specialAvailable = 1;
        gameFlagSetValue(0x586, 1, 1);
    }
    if ((specialAvailable & ~announced) != 0 && object->interactive != 0) {
        FUN_003c3e14();
        messageSetMode(1);
        sysPlaySe(0x92);
        pickObjStart(object, "qc_total_quest_ann");
        object->scriptActive = 1;
        object->state = 14;
        object->counter = 0;
        return;
    }
    if (activeQuest > 0 && specialAvailable == 0 && object->interactive != 0) {
        FUN_003c3e14();
        messageSetMode(1);
        sysPlaySe(0x92);
        pickObjStart(object, "qc_total_quest");
        object->scriptActive = 1;
        object->state = 14;
        object->counter = 0;
        return;
    }
    FUN_003a7630(1);
    FUN_003c1060();
    if (object->scriptActive != 0)
        pickObjStart(object, "qc_restart");
    else
        pickObjStart(object, "qc_start");
    Entry40 *entry = dataTable28Type0GetEntry(reinterpret_cast<u32>(&object->entryToken), object->kind);
    placeWinStartText(entry->data);
    object->state = 6;
    object->counter = 0;
    if (object->interactive != 0)
        return;
    sysPlaySe(0xa0);
}
