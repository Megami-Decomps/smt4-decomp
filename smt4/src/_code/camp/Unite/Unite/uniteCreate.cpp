#include "camp/Unite/UniteGlobals.h"
#include "camp/Unite/UniteDraw.h"
#include "camp/Unite/UnitePreferences.h"
#include "camp/PlayLog/PlayLog.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/GameGlobals.h"
#include "ui/UiSpriteApi.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "code/Code002c_Smt4.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/FlagBitTests.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"
#include "code/Code0038.h"

/* The screen's sprite animation tables. */
static const UiSpritePositionKey sUnitePositionKeys[] = {
    {320, 0, -50, 0, 40, 1, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {-320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {0, 0, 320, 0, 4, 0, 0},
    {40, 0, 0, 0, 8, 0, 0},
    {200, 0, 0, 0, 8, 0, 0},
};
static const UiSpriteScalarKey sUniteAlphaKeys[] = {
    {1.0f, 0.5f, 20, 0, 0},
    {0.5f, 1.0f, 40, 0, 0},
    {1.0f, 0.0f, 15, 0, 0},
    {0.0f, 1.0f, 8, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
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
};

extern "C" {

struct UniteCtrl;

s32 FUN_0017ff9c(u32 job);
void FUN_001de340(UniteWork *work);
void FUN_003f6ea4(const u32 *source, u32 *destination);
void FUN_003f6fec(void);
u32 FUN_003f6f68(u32 (*callback)(u32), const u32 *value);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(UniteWork *),
                 UniteWork **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
UniteCtrl *uniteCtrlBuildRaceLists(UniteCtrl *unite);
s32 FUN_0029aef0(void);
void uniteRebuildFusionCatalog(void);
void mapMainCallIfFlag(s32 flag);
u32 fileSlotLoad(u32 id);
s32 lmapMainIsRunning(void);
void FUN_00294834(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1, s32 r2, s32 g2, s32 b2, s32 r3, s32 g3, s32 b3,
                  f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void statusCameraSelectPreset(s32 preset);
void *__aeabi_memset4(void *dest, s32 size, s32 value);

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is fatal. */
static __inline void uniteStartThread(void *thread, void (*entry)(UniteWork *), UniteWork *argument,
                                      ThreadStackStorage &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = reinterpret_cast<void (*)(void)>(FUN_003f6ea4);
    descriptor.callbacks[1] = FUN_003f6fec;
    descriptor.callbacks[2] = reinterpret_cast<void (*)(void)>(FUN_003f6f68);
    s32 result = FUN_002bcc60(thread, &descriptor, entry, &argument, stack.info.address + stack.info.size, priority,
                              processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

/* Opens the fusion screen: allocates its work, starts its process, draw task and catalog thread, drops saved
   materials that are gone, builds the sprites and loads the script, the camera and the cathedral models. */
void uniteCreate(void)
{
    void *owner; /* the original passes this to operator new uninitialised */

    if (g_unite == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\Unite\\Unite.cpp", 6272);
        g_unite = (UniteWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(UniteWork), 1);
    }
    UniteWork *work = g_unite;
    memClear(work, sizeof(UniteWork));
    work->unk9460 = -1;
    mapMainCallIfFlag(0);
    work->sprites.process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("Unite Calc"), 2, 0, 0, FUN_0017ff9c, NULL, 0);
    taskCreateDraw(reinterpret_cast<const s8 *>("Unite DDraw"), 230, 0, 0, uniteDrawPanel, NULL, 0,
                   reinterpret_cast<void *>(work->sprites.process));

    UniteCtrl *ctrl = static_cast<UniteCtrl *>(asdOperatorNew(0x180, owner));
    if (ctrl != NULL) {
        ctrl = uniteCtrlBuildRaceLists(ctrl);
    }
    work->sprites.ctrl = ctrl;
    work->unk9464 = FUN_0029aef0();

    /* The thread that builds the fusion catalog. */
    work->stopRequested = 0;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\Unite\\Unite.cpp", 6307);
    work->stackMemory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    ThreadStackStorage *stack = static_cast<ThreadStackStorage *>(asdOperatorNew(sizeof(ThreadStackStorage), owner));
    if (stack != NULL) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    work->stack = stack;
    resultReportIfFailed(work->stack, work->stackMemory, 0x1000);
    uniteStartThread(work->thread, FUN_001de340, work, *work->stack, 17, -2);

    /* A fresh search until the screen has been used once. */
    if (!gameFlagIsSet(0x418)) {
        UniteSavedPreferences *preferences = reinterpret_cast<UniteSavedPreferences *>(gameDataGetSortPreferences());
        preferences->catalog.firstSlot = -1;
        preferences->catalog.secondSlot = -1;
        preferences->catalog.firstId = 0;
        preferences->catalog.secondId = 0;
        preferences->catalog.unk08 = 0;
        preferences->catalog.unk0A = 0;
        preferences->catalog.unk0C = 0;
        preferences->catalog.unk0E = -1;
        preferences->catalog.searchEnabled = 0;
        preferences->catalog.unk14 = 0;
        preferences->catalog.unk15 = -1;
        preferences->catalog.unk16 = 0;
        preferences->catalog.unk17 = 0;
        uniteRebuildFusionCatalog();
    }

    /* Forget a saved material whose slot now holds another demon, or one that can no longer be fused. */
    FusionCatalogCriteria *criteria = &reinterpret_cast<UniteSavedPreferences *>(gameDataGetSortPreferences())->catalog;
    if (criteria->firstSlot >= 0) {
        if (criteria->firstId == 0) {
            criteria->firstSlot = -1;
        } else {
            StatBlock *unit = gameGetUnitRecord(criteria->firstSlot);
            if (unit->id != criteria->firstId || flagWordTestBit(unit, 10)) {
                criteria->firstSlot = -1;
                criteria->firstId = 0;
            } else if (flagWordTestBit(unit, 2)) {
                criteria->firstSlot = -1;
                criteria->firstId = 0;
            }
        }
    }
    if (criteria->secondSlot >= 0) {
        if (criteria->secondId == 0) {
            criteria->secondSlot = -1;
        } else if (gameGetUnitRecord(criteria->secondSlot)->id != criteria->secondId) {
            criteria->secondSlot = -1;
            criteria->secondId = 0;
        }
    }
    __aeabi_memset4(work->touchIV.rowRegions, 0x80, -1);
    uniteRebuildFusionCatalog();

    drawParameterBlockClear(&work->sprites.resources);
    paramsInit(&work->sprites.resources, sUnitePositionKeys, sizeof(sUnitePositionKeys), sUniteAlphaKeys,
               sizeof(sUniteAlphaKeys), NULL, 0, NULL, 0, sUniteCommands, sizeof(sUniteCommands));
    uiSpriteStateInitFromSource(&work->sprites.fade, 0x24, 0, &work->sprites.resources, 1, 1.0f);
    spriteStartAnimationByIndex(&work->sprites.fade, 0);
    uiSpriteStateInitFromSource(&work->sprites.slide, 0x24, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSetKeyframe(&work->sprites.slide, 0, 0);
    uiSpriteStateInitFromSource(&work->sprites.pulse, 0x24, 0, &work->sprites.resources, 1, 1.0f);
    spriteStartAnimationByIndex(&work->sprites.pulse, 1);
    uiSpriteStateInitFromSource(&work->sprites.open, 0x24, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSetKeyframe(&work->sprites.open, 1, 0);
    uiSpriteStateInitFromSource(&work->sprites.listOffset, 0x24, 0, &work->sprites.resources, 1, 1.0f);
    uiSpriteSetKeyframe(&work->sprites.listOffset, 5, 0);
    uiSpriteStateInitFromSource(&work->sprites.unk02E0, 0x24, 0, &work->sprites.resources, 1, 1.0f);
    spriteStartAnimationByIndex(&work->sprites.unk02E0, 2);
    uiSpriteStateInitFromSource(&work->sprites.unk036C, 0x24, 0, &work->sprites.resources, 1, 1.0f);
    spriteStartAnimationByIndex(&work->sprites.unk036C, 3);

    fileSlotLoad(0x24);
    fileSlotLoad(0x22);
    work->request = -1;
    work->scriptIV.pendingRequest = -1;
    work->menu.messageFile = asdLoadFileSyncDefault("unite/unite.mbm");
    work->menu.scriptFile = asdLoadFileSyncDefault("unite/unite.bf");
    work->menu.scriptProcess = reinterpret_cast<u32>(scrScriptProcessCreate(work->menu.scriptFile, work->menu.messageFile));

    if (lmapSceneGetScript() != NULL || lmapMainIsRunning() != 0) {
        FUN_00294834(0, 0, 0, 0, 0, 0, 255, 0, 0, 255, 0, 0, 0.0f, -1.0f, -565.0f, 1335.0f, 0.0f, -100.0f, 1500.0f, 1500.0f,
                     100.0f);
    }
    work->preview.camera = asdCameraLoadFromFile("camp/jakyou_all.bccam");
    statusCameraSelectPreset(1);
    work->preview.previewSound = asdMdlManagerCreateSecondList("camp/jakyou_all.bam", 7);
    work->preview.previewModel = asdMdlManagerCreateSecondList("camp/jakyou_all_mido.bam", 7);
    work->unk95D8 = 0;
    work->unk95DC = 0;
    work->menu.openedSeconds = saveBlockGetPlaySeconds();
}

} /* extern "C" */
