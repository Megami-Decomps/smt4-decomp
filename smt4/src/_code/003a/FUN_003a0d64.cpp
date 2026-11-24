#include "common.h"
#include "script/scrScriptProcess.h"
#include "font/PlaceWin.h"
#include "gamedata/PlaceRecordTable.h"
#include "shop/PlaceScene.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"



extern "C" {
s32 jobIsValid(u32 job);
s32 eventTexJobSlotsDone(u32 job);
void titleSetSlotValueState2(s32 a, s32 b);
void messageBannerInitSelection(s32 a, s32 b);
void messageTargetSetValue(s32 value, s32 arg);
s32 FUN_0028e9d0(u32 flag);
void saleListBuild(PlaceScene *scene);
void buttonHelpSetPreset(s32 preset);
void buttonHelpSetText(s32 slot, u32 color);

/* Whether any flag of the place's two flag ranges is set. */
static bool placeFlagsAnySet()
{
    for (u32 flag = 0x3B7; flag <= 0x47E; flag++) {
        if (FUN_0028e9d0(flag))
            return true;
    }
    for (u32 flag = 0x47F; flag <= 0x79E; flag++) {
        if (FUN_0028e9d0(flag))
            return true;
    }
    return false;
}

/* Waits for the place window's textures and jobs, then builds its two windows, starts the place's
 * text and switches to state 1 when any of the place flags is set (state 3 when none is). */
void FUN_003a0d64(PlaceScene *scene)
{
    if (scene->scriptFile == NULL || scene->scriptOwner == NULL)
        return;
    if (!asdTMTexTableNodeIsLoaded(0x2B, 0))
        return;
    if (jobIsValid(scene->jobA) && !eventTexJobSlotsDone(scene->jobA))
        return;
    if (jobIsValid(scene->jobB) && !eventTexJobSlotsDone(scene->jobB))
        return;

    scene->scriptA = scrScriptProcessCreate(scene->scriptFile, scene->scriptOwner);
    scriptProcessSetMode(scene->scriptA, 2);
    scene->scriptB = scrScriptProcessCreate(scene->scriptFile, scene->scriptOwner);
    scriptProcessSetMode(scene->scriptB, 2);
    titleSetSlotValueState2(0, 10);
    titleSetSlotValueState2(1, 10);
    messageBannerInitSelection(1, 0);
    messageTargetSetValue(0, 0);

    u32 kind = scene->placeKind;
    s32 key = scene->placeKey;
    s32 found = -1;
    Table17Handle ignored;
    PlaceRecord *records = dataTable17Sub1GetRecord(&ignored, 0);
    for (s32 i = 0; i < dataTable17Sub1GetCount(&ignored); i++) {
        if (records[i].kind == kind && records[i].key == key) {
            found = i;
            break;
        }
    }
    Table17Handle ignoredSecond;
    PlaceRecord *record = dataTable17Sub1GetRecord(&ignoredSecond, found);
    placeWinStartText(record->text);

    if (placeFlagsAnySet()) {
        scene->substate = 0;
        scene->state = 1;
        saleListBuild(scene);
        buttonHelpSetPreset(0x75);
        buttonHelpSetText(0, 0x323232FF);
    } else {
        scene->substate = 0;
        scene->state = 3;
    }
}

} /* extern "C" */
