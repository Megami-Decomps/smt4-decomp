#include "camp/Unite/UniteGlobals.h"
#include "camp/Unite/UniteDraw.h"
#include "camp/Unite/UnitePreferences.h"
#include "classes/Obj557af8.h"
#include "classes/Obj557c48.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match8_FusionSelection.h"
#include "shard/GameGlobals.h"
#include "shard/S1ModelEffect.h"
#include "ui/UiSpriteApi.h"
#include "ui/ParamsClearPacket.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "camp/Config/Config.h"
#include "code/Code0015_Smt4a.h"
#include "code/Code001c.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SearchTable.h"
#include "script/scrScriptProcess.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers_Smt4a.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

/* The original source file, as the debug hooks and the traced allocations name it. */
#define UNITE_SOURCE_FILE "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\Unite.cpp"

/* The screen's sprite animation tables. */
static const UiSpritePositionKey sUnitePositionKeys[] = {
    {320, 0, -50, 0, 40, 1, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {-320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {0, 0, 320, 0, 4, 0, 0},
    {40, 0, 0, 0, 8, 0, 0},
    {200, 0, 0, 0, 8, 0, 0},
    {30, 0, 0, 0, 5, 0, 0},
    {-30, 0, 0, 0, 5, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {0, 0, 30, 0, 3, 0, 0},
};
static const UiSpriteScalarKey sUniteAlphaKeys[] = {
    {1.0f, 0.5f, 20, 0, 0},
    {0.5f, 1.0f, 40, 0, 0},
    {1.0f, 0.0f, 20, 0, 0},
    {0.0f, 1.0f, 8, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {1.0f, 0.0f, 20, 0, 0},
};
static const SpriteAnimationCommand sUniteCommands[] = {
    {-3, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {6, 0, {0, 0, 0}, -3, 3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 4, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 7, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 7, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

extern "C" {

void FUN_0028625c(UniteWorkA *work);
void FUN_00514a54(const u32 *source, u32 *destination);
void FUN_00514b80(void);
u32 FUN_00514b08(u32 (*callback)(u32), const u32 *value);
s32 FUN_002fb0d4(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(UniteWorkA *),
                 UniteWorkA **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
FusionRaceSelection *fusionRaceSelectionInitialize(FusionRaceSelection *selection);
s32 histogramFindHighestSupportedValue(void);
void rebuildFusionCatalogLists(void);
void mapSettings5BSetValueIfActive(s32 flag);
s32 lmapMainIsRunning(void);
void FUN_0031416c(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1, s32 r2, s32 g2, s32 b2, s32 r3, s32 g3, s32 b3,
                  f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void resultReportIfFailed(ThreadStackStorage *stack, void *buffer, u32 size);
/* Lists the special fusions whose materials are available; returns their count. */
u32 fusionListAvailableSpecialRecipes(void *context, u16 *recipes);
void FUN_00184b90(u8 *owner, s32 direction); // declcheck: local (its header, shard/W5_W5Match5_GameSaveViews.h, declares asdMemoryAllocTraced with other types)
void *__aeabi_memset4(void *dest, s32 size, s32 value);

}

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is fatal. */
static __inline void uniteStartThread(void *thread, void (*entry)(UniteWorkA *), UniteWorkA *argument,
                                      ThreadStackStorage &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = reinterpret_cast<void (*)(void)>(FUN_00514a54);
    descriptor.callbacks[1] = FUN_00514b80;
    descriptor.callbacks[2] = reinterpret_cast<void (*)(void)>(FUN_00514b08);
    s32 result = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.info.address + stack.info.size, priority,
                              processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

/* dataTableGetEntry24Byte0's body: entry `index`'s option, -1 past the end. */
static u32 searchTableOption(u32 index)
{
    void *table = dataTableGet(0x24, 0);
    SearchTableRecordA *entries = searchTableRecordsA(table);
    u32 count = dataTableGetCount(table);
    if (index >= count) {
        return 0xFFFFFFFF;
    }
    return entries[index].option;
}

extern "C" {

/* Opens the fusion screen: allocates its work, starts its process, draw task and catalog thread, drops saved
   materials that are gone, builds the sprites and loads the script, the camera and the cathedral models. */
void uniteCreate(void)
{
    void *owner; /* the original passes this to operator new uninitialised */

    if (g_unite == NULL) {
        asdDebugTrace(UNITE_SOURCE_FILE, 7257);
        g_unite = (UniteWorkA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(UniteWorkA), 1);
    }
    UniteWorkA *work = g_unite;
    sysMemClear(work, sizeof(UniteWorkA));
    work->catalogThreadA.unk90A0 = -1;
    mapSettings5BSetValueIfActive(0);
    work->sprites.process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("Unite Calc"), 4, 0, 0, FUN_001f5294, NULL, 0);
    taskCreateDraw(reinterpret_cast<const s8 *>("Unite DDraw"), 234, 0, 0, uniteDrawPanel, NULL, 0,
                   reinterpret_cast<void *>(work->sprites.process));

    FusionRaceSelection *ctrl = static_cast<FusionRaceSelection *>(asdOperatorNew(0x1B8, owner));
    if (ctrl != NULL) {
        ctrl = fusionRaceSelectionInitialize(ctrl);
    }
    work->sprites.ctrl = ctrl;
    work->catalogThreadA.unk90A4 = histogramFindHighestSupportedValue();

    /* The thread that builds the fusion catalog. */
    work->catalogThreadA.stopRequested = 0;
    asdDebugTrace(UNITE_SOURCE_FILE, 7292);
    work->catalogThreadA.stackMemory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    ThreadStackStorage *stack = static_cast<ThreadStackStorage *>(asdOperatorNew(sizeof(ThreadStackStorage), owner));
    if (stack != NULL) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    work->catalogThreadA.stack = stack;
    resultReportIfFailed(work->catalogThreadA.stack, work->catalogThreadA.stackMemory, 0x1000);
    uniteStartThread(work->catalogThreadA.thread, FUN_0028625c, work, *work->catalogThreadA.stack, 17, -2);

    /* A fresh search until the screen has been used once. */
    if (!gameFlagIsSet(0x418)) {
        UniteSavedPreferencesA *preferences = reinterpret_cast<UniteSavedPreferencesA *>(saveGetUserSettingsBlock());
        preferences->catalog.firstSlot = -1;
        preferences->catalog.secondSlot = -1;
        preferences->catalog.firstId = 0;
        preferences->catalog.secondId = 0;
        preferences->catalog.race = 0;
        preferences->catalog.levelBand = 0;
        preferences->catalog.unk0A = 0;
        preferences->catalog.unk0C = 0;
        preferences->catalog.unk0E = -1;
        preferences->catalog.searchEnabled = 0;
        preferences->catalog.unk14 = 0;
        preferences->catalog.unk16Bit0 = 0;
        preferences->catalog.skillCategory = -1;
        preferences->catalog.unk16Bit1 = 0;
        preferences->catalog.unk17 = 0;
        rebuildFusionCatalogLists();
    }

    /* Forget a saved material whose slot now holds another demon, or one that can no longer be fused. */
    FusionCatalogCriteria *criteria = &reinterpret_cast<UniteSavedPreferencesA *>(saveGetUserSettingsBlock())->catalog;
    if (criteria->firstSlot >= 0) {
        if (criteria->firstId == 0) {
            criteria->firstSlot = -1;
        } else {
            SlotRecordA *unit = gameGetSlotRecord(criteria->firstSlot);
            if (unit->id != criteria->firstId || bitsAt60Test(unit, 10)) {
                criteria->firstSlot = -1;
                criteria->firstId = 0;
            }
        }
    }
    if (criteria->secondSlot >= 0) {
        if (criteria->secondId == 0) {
            criteria->secondSlot = -1;
        } else if (gameGetSlotRecord(criteria->secondSlot)->id != criteria->secondId) {
            criteria->secondSlot = -1;
            criteria->secondId = 0;
        }
    }
    __aeabi_memset4(work->touchA.rowRegions, 0xA0, -1);
    rebuildFusionCatalogLists();

    paramsClearPacket(&work->sprites.resources);
    paramsInit(&work->sprites.resources, sUnitePositionKeys, sizeof(sUnitePositionKeys), sUniteAlphaKeys,
               sizeof(sUniteAlphaKeys), NULL, 0, NULL, 0, sUniteCommands, sizeof(sUniteCommands));
    uiSpriteStateInitFromSource(&work->sprites.fade, 0x1A, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSelectAnim(&work->sprites.fade, 0);
    uiSpriteStateInitFromSource(&work->sprites.slide, 0x1A, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSelectAnim(&work->sprites.slide, 4);
    uiSpriteStateInitFromSource(&work->sprites.pulse, 0x1A, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSelectAnim(&work->sprites.pulse, 1);
    uiSpriteStateInitFromSource(&work->sprites.open, 0x1A, 0, &work->sprites.resources, 1, 1.0f);
    FUN_00184b90(reinterpret_cast<u8 *>(work), 1);
    uiSpriteStateInitFromSource(&work->sprites.listOffset, 0x1A, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSetKeyframe(&work->sprites.listOffset, 5, 0);
    uiSpriteStateInitFromSource(&work->sprites.unk02E0, 0x1A, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSelectAnim(&work->sprites.unk02E0, 2);
    uiSpriteStateInitFromSource(&work->sprites.unk036C, 0x1A, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSelectAnim(&work->sprites.unk036C, 3);

    loadSlotEnsureLoaded(0x24);
    loadSlotEnsureLoaded(0x22);
    work->request = -1;
    work->scriptA.pendingRequest = -1;
    work->menu.messageFile = asdLoadFileSyncDefault("unite/unite.mbm");
    work->menu.scriptFile = asdLoadFileSyncDefault("unite/unite.bf");
    work->menu.scriptProcess = reinterpret_cast<u32>(scrScriptProcessCreate(work->menu.scriptFile, work->menu.messageFile));

    if (lmapSceneGetScript() != NULL || lmapMainIsRunning() != 0) {
        FUN_0031416c(0, 0, 0, 0, 0, 0, 255, 0, 0, 255, 0, 0, 0.0f, -1.0f, -565.0f, 1335.0f, 0.0f, -100.0f, 1500.0f, 1500.0f,
                     100.0f);
    }

    /* The cathedral's camera clip and its two model sets. */
    u32 cameraSize;
    const AsdAnimCameraResource *cameraResource =
        (const AsdAnimCameraResource *)asdLoadFileWithSize("camp/jakyou_all.bch", &cameraSize, 1);
    void *cameraStorage = asdMemoryAllocTraced(sizeof(Obj557af8), UNITE_SOURCE_FILE, 7443);
    work->previewA.camera = cameraStorage ? new (cameraStorage) Obj557af8(cameraResource) : NULL;
    MoriModelContent *models = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), UNITE_SOURCE_FILE, 7445));
    if (models != NULL) {
        models = modelListInit(models);
    }
    work->previewA.firstModel = reinterpret_cast<UnitePreviewModel *>(models);
    modelLoadFileAsyncByName(models, "camp/jakyou_all.bam");
    models = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), UNITE_SOURCE_FILE, 7448));
    if (models != NULL) {
        models = modelListInit(models);
    }
    work->previewA.secondModel = reinterpret_cast<UnitePreviewModel *>(models);
    modelLoadFileAsyncByName(models, "camp/jakyou_all_mido.bam");
    g_handleRegistry->flags |= 1;
    work->previewA.resetCount = 0;
    work->previewA.frames = 0;
    work->menu.openedSeconds = saveBlockGetPlaySeconds();
    if (fusionListAvailableSpecialRecipes(work->sprites.ctrl, work->catalogThreadA.specialRecipes) != 0) {
        gameFlagSetValue(0x52C, 1, 1);
    } else {
        gameFlagSetValue(0x52C, 0, 1);
    }

    /* The flag of the search option that has to be unlocked (the table's option-15 row). */
    UniteWorkA *unite = g_unite;
    unite->catalogThreadA.unlockOption = 0;
    unite->catalogThreadA.unk92BE = 0;
    void *table = dataTableGet(0x24, 0);
    searchTableRecordsA(table);
    s32 count = dataTableGetCount(table);
    for (s32 i = 0; i < count; i++) {
        if (searchTableOption(i) != 15) {
            continue;
        }
        if (searchTableFlagId(i) == 0) {
            continue;
        }
        unite->catalogThreadA.unlockOption = searchTableFlagId(i);
    }
}

} /* extern "C" */
