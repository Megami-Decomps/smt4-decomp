/* NON_MATCHING: O3 combines the final flags/state/counter writes into one STM instead of retail's STR plus STM; zero/one load order also differs. O2 candidate. */
#include "shard/Shard0046.h"
#include "shard/W6_W6Match7_QuestInteraction.h"

extern "C" {
void messageSetMode(s32 mode);
void placeWinStartText(const u8 *name);
void messageBannerRestartOrClear(void);
void FUN_0037d6e4(s32 mode);
void FUN_003a7630(s32 mode);
void FUN_003c1060(void);
void FUN_003c3e14(void);
void gameFlagSetValue(u32 flag, s32 value, u32 enabled);
s32 pickObjStart(QuestInteraction *object, const char *entry);
Entry40 *dataTable28Type0GetEntry(u32 unused, u32 index);
u8 gameFlagIsSet(u32 flag);
s32 FUN_002c2758(u16 index);
u32 messageWindowIsState1(void);

void questInteractionChooseEntry(QuestInteraction *object)
{
    FUN_003a7630(1);
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
        if (object->kind != 14) {
            specialAvailable = 1;
        }
        gameFlagSetValue(0x586, 1, 1);
    }
    if ((specialAvailable & ~announced) != 0 && object->interactive != 0) {
        FUN_003c3e14();
        messageSetMode(1);
        pickObjStart(object, "qc_total_quest_ann");
        object->scriptActive = 1;
        object->state = 14;
        object->counter = 0;
        return;
    }
    if (activeQuest > 0 && specialAvailable == 0 && object->interactive != 0) {
        FUN_003c3e14();
        messageSetMode(1);
        pickObjStart(object, "qc_total_quest");
        object->scriptActive = 1;
        object->state = 14;
        object->counter = 0;
        return;
    }
    Entry40 *entry = dataTable28Type0GetEntry(reinterpret_cast<u32>(&object->entryToken), object->kind);
    placeWinStartText(entry->data);
    if (object->interactive != 0) {
        FUN_003c1060();
        pickObjStart(object, "qc_confirm");
        object->state = 6;
        object->counter = 0;
        return;
    }
    FUN_0037d6e4(0);
    object->flags &= ~0x200u;
    object->state = 17;
    object->counter = 0;
    if (messageWindowIsState1() != 0) {
        messageBannerRestartOrClear();
    }
}
}
