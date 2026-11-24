/* camp/UIQuest/UIQuest.cpp: the quest menu's creation. */
#include "shard/W5_W5Match7_UiQuest.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers_Smt4a.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "camp/UIFade/UIFade.h"
#include "code/Code0015_Smt4a.h"
#include "code/Code001b.h"
#include "event/bustupEvent/BustupTex.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/RosterView.h"
#include "quest_center/QuestRecordA.h"
#include "quest_center/QuestStatus.h"
#include "script/scrScriptProcess.h"
#include "sys/RuntimeObjects_Smt4a.h"
#include "ui/ParamsClearPacket.h"
#include "ui/UiSpriteApi.h"

extern "C" {

s32 uiQuestCalc(u32 job);
s32 uiQuestDrawUpper(u32 job);
s32 uiQuestDrawLower(u32 job);
void asdTMTexTableLoadSprites(s32 table);
void uiQuestRebuildLists(void);
void gameFlagClearModeBits(s32 index);
void uiGetLayoutPointDifference(UiSpriteState *sprite, u32 table, u32 first, u32 second);
void uiStoreTextureEntryCenter(UiSpriteState *sprite, u32 table, s32 image);

/* The quest menu's animation tables; the original file defined them statically. */
static const UiSpritePositionKey sQuestPositionKeys[12] = {
    { 30, 0, 0, 0, 4, 0, 0 },
    { -30, 0, 0, 0, 4, 0, 0 },
    { 0, 0, -30, 0, 3, 0, 0 },
    { 0, 0, 30, 0, 3, 0, 0 },
    { 0, 0, -30, 0, 4, 0, 0 },
    { 0, 0, 30, 0, 4, 0, 0 },
    { 300, 0, -60, 0, 40, 1, 0 },
    { 50, 0, 0, 0, 8, 0, 0 },
    { -50, 0, 0, 0, 8, 0, 0 },
    { 50, 0, 50, 0, 2, 0, 0 },
    { 50, 0, 0, 0, 8, 0, 0 },
    { 0, 0, -50, 0, 4, 0, 0 },
};
static const UiSpriteScalarKey sQuestAlphaKeys[25] = {
    { 1.0f, 0.5f, 20, 0, 0 },
    { 0.5f, 1.0f, 40, 0, 0 },
    { 1.0f, 0.0f, 15, 0, 0 },
    { 0.0f, 1.0f, 10, 0, 0 },
    { 0.0f, 1.0f, 6, 0, 0 },
    { 1.0f, 0.0f, 14, 0, 0 },
    { 0.0f, 1.0f, 4, 0, 0 },
    { 1.0f, 0.0f, 26, 0, 0 },
    { 0.0f, 1.0f, 4, 0, 0 },
    { 1.0f, 0.0f, 3, 0, 0 },
    { 1.0f, 0.0f, 4, 0, 0 },
    { 0.0f, 1.0f, 8, 0, 0 },
    { 0.0f, 0.0f, 2, 0, 0 },
    { 0.0f, 1.0f, 8, 0, 0 },
    { 0.0f, 0.0f, 4, 0, 0 },
    { 0.0f, 1.0f, 8, 0, 0 },
    { 1.0f, 0.0f, 8, 0, 0 },
    { 0.0f, 1.0f, 5, 0, 0 },
    { 1.0f, 1.0f, 10, 0, 0 },
    { 1.0f, 0.8f, 20, 0, 0 },
    { 0.8f, 0.4f, 40, 0, 0 },
    { 0.4f, 0.8f, 40, 0, 0 },
    { 0.0f, 0.4f, 5, 0, 0 },
    { 0.4f, 0.0f, 5, 0, 0 },
    { 1.0f, 0.0f, 5, 0, 0 },
};
static const UiSpriteScalarKey sQuestScaleKeys[13] = {
    { 3.0f, 0.8f, 5, 0, 0 },
    { 0.8f, 1.0f, 5, 0, 0 },
    { 0.0f, 2.0f, 6, 0, 0 },
    { 2.0f, 0.0f, 14, 0, 0 },
    { 1.0f, 0.0f, 5, 0, 0 },
    { 1.5f, 1.5f, 4, 0, 0 },
    { 1.5f, 2.0f, 8, 0, 0 },
    { 2.0f, 2.5f, 11, 0, 0 },
    { 1.2f, 1.2f, 5, 0, 0 },
    { 1.2f, 1.0f, 10, 0, 0 },
    { 1.0f, 1.0f, 20, 0, 0 },
    { 1.0f, 0.8f, 40, 0, 0 },
    { 0.8f, 1.0f, 40, 0, 0 },
};
static const SpriteAnimationCommand sQuestCommands[37] = {
    { -3, 0, { 0, 0, 0 }, -3, 0, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 1, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, -2, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 2, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 2, 1, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, -2, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 3, 0, { 0, 0, 0 }, 0, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, -3, 0, { 0, 0, 0 }, 1, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 4, 0, { 0, 0, 0 }, 2, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 5, 0, { 0, 0, 0 }, 3, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { 2, 0, { 0, 0, 0 }, -3, -3, 0, { 0, 0, 0 }, 4, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 6, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 7, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { 9, 0, { 0, 0, 0 }, -3, 12, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { 10, 0, { 0, 0, 0 }, -3, 13, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 14, 0, { 0, 0, 0 }, 5, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 15, 0, { 0, 0, 0 }, 6, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 16, 0, { 0, 0, 0 }, 7, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 17, 0, { 0, 0, 0 }, 8, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 18, 0, { 0, 0, 0 }, 9, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 19, 0, { 0, 0, 0 }, 10, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 20, 0, { 0, 0, 0 }, 11, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 21, 0, { 0, 0, 0 }, 12, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, -2, 0, { 0, 0, 0 }, -2, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 22, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -3, 0, { 0, 0, 0 }, -3, 23, 0, { 0, 0, 0 }, -3, 0, { 0, 0, 0 } },
    { -1, 0, { 0, 0, 0 }, -1, -1, 0, { 0, 0, 0 }, -1, 0, { 0, 0, 0 } },
};

/* Creates the quest menu: its work block, process and draw tasks, messages and script, then drops the
 * stale quest flags, builds the quest lists and sets up the sixteen sprites. */
void uiQuestCreate(void)
{
    if (g_uiQuest == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\UIQuest\\UIQuest.cpp", 5209);
        g_uiQuest = static_cast<UiQuestApoc *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(UiQuestApoc), 1));
    }
    UiQuestApoc *quest = g_uiQuest;
    sysMemClear(quest, sizeof(UiQuestApoc));
    quest->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("UIQuest Calc"), 4, 0, 0, uiQuestCalc, NULL, 0);
    taskCreateDraw(reinterpret_cast<const s8 *>("UIQuest UDrawLeft"), 129, 0, 0, uiQuestDrawUpper, NULL, 0,
                   reinterpret_cast<void *>(quest->process));
    taskCreateDraw(reinterpret_cast<const s8 *>("UIQuest UDrawRight"), 221, 0, 0, uiQuestDrawUpper, NULL, 0,
                   reinterpret_cast<void *>(quest->process));
    taskCreateDraw(reinterpret_cast<const s8 *>("UIQuest DDraw"), 234, 0, 0, uiQuestDrawLower, NULL, 0,
                   reinterpret_cast<void *>(quest->process));

    quest = g_uiQuest;
    uiFadeSetVisible(0);
    quest->script.messages = asdLoadFileSyncDefault("event/quest/QuestSys.mbm");
    quest->script.program = asdLoadFileSyncDefault("event/quest/QuestScr.bf");
    quest->script.process = scrScriptProcessCreate(quest->script.program, quest->script.messages);
    quest->selectedId = 0;
    quest->detailMode = 0;
    asdTMTexTableLoadSprites(30);
    asdTMTexTablePrepareNodeImage(30, 0);
    loadSlotEnsureLoaded(52);

    /* A quest of the add-on range whose record is gone is no longer listed. */
    u16 first = 101;
    for (u16 id = first; id < 400 && id < first + 249; ++id) {
        if (questDataGetRecord(id) == NULL) {
            RosterFlags *flags = &reinterpret_cast<RosterView *>(gameFlagBlockGet())->flags[id];
            if (flags != NULL)
                flags->status.known = 0;
        }
    }
    uiQuestRebuildLists();
    for (u16 id = 0; id < 400; ++id) {
        if (gameFlagEntryGetBit(id, 2) != 0 && dataTable1bOr1cRecordHasFlag1(id) != 0 &&
            (partyEntryGetBit5(id) != 0 || partyEntryGetBit6(id) != 0))
            gameFlagClearModeBits(id);
    }
    for (u16 id = 0; id < 400; ++id) {
        if (gameFlagEntryGetBit(id, 2) != 0 && dataTable1bOr1cRecordHasFlag1(id) == 0 &&
            (partyEntryGetBit5(id) != 0 || partyEntryGetBit6(id) != 0))
            gameFlagClearModeBits(id);
    }

    paramsClearPacket(&quest->resources);
    paramsInit(&quest->resources, sQuestPositionKeys, sizeof(sQuestPositionKeys), sQuestAlphaKeys, sizeof(sQuestAlphaKeys),
               sQuestScaleKeys, sizeof(sQuestScaleKeys), NULL, 0, sQuestCommands, sizeof(sQuestCommands));
    uiSpriteStateInitFromSource(quest->sprite(0), 30, 0, &quest->resources, 201, 1.0f);
    uiSpriteSetKeyframe(quest->sprite(0), 0, 0);
    uiSpriteSetImageKeyframe(quest->sprite(0), 8, 0);
    uiSpriteStateInitFromSource(quest->sprite(1), 30, 0, &quest->resources, 201, 1.0f);
    uiSpriteSelectAnim(quest->sprite(1), 0);
    uiSpriteStateInitFromSource(quest->sprite(2), 30, 0, &quest->resources, 201, 1.0f);
    uiSpriteSetKeyframe(quest->sprite(2), 6, 0);
    uiSpriteStateInitFromSource(quest->sprite(3), 30, 0, &quest->resources, 201, 1.0f);
    uiSpriteStateInitFromSource(quest->sprite(4), 30, 97, &quest->resources, 104, 1.0f);
    uiSpriteSelectAnim(quest->sprite(4), 2);
    uiGetLayoutPointDifference(quest->sprite(4), 30, 42, 97);
    uiSpriteStateInitFromSource(quest->sprite(5), 30, 93, &quest->resources, 161, 1.0f);
    uiSpriteSelectAnim(quest->sprite(5), 2);
    uiStoreTextureEntryCenter(quest->sprite(5), 30, 83);
    uiSpriteInitializeState(quest->sprite(6), 30, -1, 18, &quest->resources, 201, 1.0f);
    uiSpriteSelectAnim(quest->sprite(6), 3);
    spriteSetLayer(quest->sprite(6), 2);
    pairSetHalves(reinterpret_cast<Holder *>(quest->sprite(6)), 0, 120);
    uiSpriteStateInitFromSource(quest->sprite(7), 30, 92, &quest->resources, 161, 1.0f);
    uiSpriteSetKeyframe(quest->sprite(7), 0, 0);
    uiSpriteSetImageKeyframe(quest->sprite(7), 8, 0);
    uiGetLayoutPointDifference(quest->sprite(7), 30, 90, 92);
    uiSpriteStateInitFromSource(quest->sprite(8), 30, 0, &quest->resources, 201, 1.0f);
    uiSpriteSetKeyframe(quest->sprite(8), 2, 0);
    uiSpriteSetImageKeyframe(quest->sprite(8), 9, 0);
    uiSpriteStateInitFromSource(quest->sprite(9), 30, 0, &quest->resources, 201, 1.0f);
    uiSpriteSelectAnim(quest->sprite(9), 5);
    uiSpriteStateInitFromSource(quest->sprite(10), 30, 76, &quest->resources, 201, 1.0f);
    uiSpriteStateInitFromSource(quest->sprite(11), 30, 0, &quest->resources, 201, 1.0f);
    uiSpriteStateInitFromSource(quest->sprite(12), 30, 93, &quest->resources, 201, 1.0f);
    uiSpriteStateInitFromSource(quest->sprite(13), 30, 87, &quest->resources, 201, 1.0f);
    uiSpriteStateInitFromSource(quest->sprite(14), 30, 75, &quest->resources, 201, 1.0f);
    uiSpriteStateInitFromSource(quest->sprite(15), 30, 77, &quest->resources, 201, 1.0f);

    uiQuestEnterMenuState(g_uiQuest, 0);
}

} /* extern "C" */
