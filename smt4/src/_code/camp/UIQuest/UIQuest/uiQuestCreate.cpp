#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "camp/UIFade/UIFade.h"
#include "camp/UIQuest/UIQuest.h"
#include "code/Code0028_Smt4.h"
#include "code/Code0029.h"
#include "code/Code002c_Smt4.h"
#include "event/bustupEvent/BustupTex.h"
#include "script/scrScriptProcess.h"
#include "shard/TextureDrawCall.h"
#include "shard/W4_W4Match2_UiQuest.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "sys/RuntimeObjects_Smt4.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiTexturePlacement.h"

extern "C" {
s32 uiQuestCalc(u32 job);
s32 uiQuestDrawUpper(u32 job);
s32 uiQuestDrawLower(u32 job);
void FUN_00189c24(void);
u32 fileSlotLoad(u32 slot);
u32 questReadRuntimeFlag(u32 questId, u32 selector);
void gameFlagClearModeBits(s32 id);
}

/* Animation keys for the quest sprites. */
static const UiSpritePositionKey sQuestPositionKeys[5] = {
    { 320, 0, 0, 0, 8, 0, 0 },
    { -320, 0, 0, 0, 8, 0, 0 },
    { 0, 0, -320, 0, 4, 0, 0 },
    { 0, 0, 320, 0, 4, 0, 0 },
    { 300, 0, -60, 0, 40, 1, 0 },
};
static const UiSpriteScalarKey sQuestAlphaKeys[8] = {
    { 1.0f, 0.5f, 20, 0, 0 },
    { 0.5f, 1.0f, 40, 0, 0 },
    { 1.0f, 0.0f, 15, 0, 0 },
    { 0.0f, 1.0f, 10, 0, 0 },
    { 0.0f, 1.0f, 6, 0, 0 },
    { 1.0f, 0.0f, 14, 0, 0 },
    { 0.0f, 1.0f, 4, 0, 0 },
    { 1.0f, 0.0f, 26, 0, 0 },
};
static const UiSpriteScalarKey sQuestScaleKeys[5] = {
    { 3.0f, 0.8f, 5, 0, 0 },
    { 0.8f, 1.0f, 5, 0, 0 },
    { 0.0f, 2.0f, 6, 0, 0 },
    { 2.0f, 0.0f, 14, 0, 0 },
    { 1.0f, 0.0f, 5, 0, 0 },
};
static const SpriteAnimationCommand sQuestCommands[19] = {
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
};

// Allocate the menu, load its scripts and textures, and initialize the quest list and sprites.
extern "C" void uiQuestCreate(void)
{
    if (g_uiQuest == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\UIQuest\\UIQuest.cpp", 3545);
        g_uiQuest = static_cast<UiQuest *>(asdMemAlloc(0x100, 0x100, 0, sizeof(UiQuest), 1));
    }
    UiQuest *quest = g_uiQuest;
    memClear(quest, sizeof(UiQuest));
    quest->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("UIQuest Calc"), 2, 0, 0, uiQuestCalc, NULL, 0);
    taskCreateDraw(reinterpret_cast<const s8 *>("UIQuest UDrawLeft"), 125, 0, 0, uiQuestDrawUpper, NULL, 0,
                   reinterpret_cast<void *>(quest->process));
    taskCreateDraw(reinterpret_cast<const s8 *>("UIQuest UDrawRight"), 219, 0, 0, uiQuestDrawUpper, NULL, 0,
                   reinterpret_cast<void *>(quest->process));
    taskCreateDraw(reinterpret_cast<const s8 *>("UIQuest DDraw"), 230, 0, 0, uiQuestDrawLower, NULL, 0,
                   reinterpret_cast<void *>(quest->process));

    quest = g_uiQuest;
    uiFadeSetVisible(0);
    quest->script.messages = asdLoadFileSyncDefault("event/quest/QuestSys.mbm");
    quest->script.program = asdLoadFileSyncDefault("event/quest/QuestScr.bf");
    quest->script.process = scrScriptProcessCreate(quest->script.program, quest->script.messages);
    quest->selectedId = 0;
    quest->detailMode = 0;
    asdTMTexTableLoadSprites(41);
    asdTMTexTablePrepareNodeImage(41, 0);
    fileSlotLoad(52);
    FUN_00189c24();

    for (u16 id = 0; id < 400; ++id) {
        if (questReadRuntimeFlag(id, 2) && FUN_00298f88(id) && (FUN_002886c8(id) || FUN_002886b0(id)))
            gameFlagClearModeBits(id);
    }
    for (u16 id = 0; id < 400; ++id) {
        if (questReadRuntimeFlag(id, 2) && !FUN_00298f88(id) && (FUN_002886c8(id) || FUN_002886b0(id)))
            gameFlagClearModeBits(id);
    }

    drawParameterBlockClear(&quest->resources);
    paramsInit(&quest->resources, sQuestPositionKeys, sizeof(sQuestPositionKeys),
               sQuestAlphaKeys, sizeof(sQuestAlphaKeys), sQuestScaleKeys,
               sizeof(sQuestScaleKeys), NULL, 0, sQuestCommands, sizeof(sQuestCommands));

    uiSpriteStateInitFromSource(&quest->sprites[0], 41, 0, &quest->resources, 201, 1.0f);
    timerStart(&quest->sprites[0], 0, 0);
    uiSpriteStateInitFromSource(&quest->sprites[1], 41, 0, &quest->resources, 201, 1.0f);
    spriteStartAnimationByIndex(&quest->sprites[1], 0);
    uiSpriteStateInitFromSource(&quest->sprites[2], 41, 0, &quest->resources, 201, 1.0f);
    timerStart(&quest->sprites[2], 4, 0);
    uiSpriteStateInitFromSource(&quest->sprites[3], 41, 0, &quest->resources, 201, 1.0f);
    uiSpriteStateInitFromSource(&quest->sprites[4], 41, 97, &quest->resources, 104, 1.0f);
    spriteStartAnimationByIndex(&quest->sprites[4], 2);
    uiStoreTextureEntryCenter(reinterpret_cast<PointDeltaWork *>(&quest->sprites[4]), 41, 42);
    uiSpriteStateInitFromSource(&quest->sprites[5], 41, 93, &quest->resources, 161, 1.0f);
    spriteStartAnimationByIndex(&quest->sprites[5], 2);
    uiStoreTextureEntryCenter(reinterpret_cast<PointDeltaWork *>(&quest->sprites[5]), 41, 83);
    uiSpriteInitializeState(&quest->sprites[6], 41, -1, 18, &quest->resources, 201, 1.0f);
    spriteStartAnimationByIndex(&quest->sprites[6], 3);
    spriteSetLayer(&quest->sprites[6], 2);
    pairSetHalves(reinterpret_cast<Obj *>(&quest->sprites[6]), 0, 120);
    uiSpriteStateInitFromSource(&quest->sprites[7], 41, 92, &quest->resources, 161, 1.0f);
    timerStart(&quest->sprites[7], 0, 0);
    FUN_00262210(reinterpret_cast<PointDeltaWork *>(&quest->sprites[7]), 41, 90, 92);
    uiSpriteStateInitFromSource(&quest->sprites[8], 41, 0, &quest->resources, 201, 1.0f);
    timerStart(&quest->sprites[8], 2, 0);
    uiSpriteStateInitFromSource(&quest->sprites[9], 41, 0, &quest->resources, 201, 1.0f);
    spriteStartAnimationByIndex(&quest->sprites[9], 5);
    uiQuestEnterState(g_uiQuest, 0);
}
