#include "common.h"
#include "script/scrScriptProcess.h"
#include "font/PlaceWin.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct ScriptFile;
struct ScriptProcessWork;

/* A place-window scene (only the fields the start-up touches). */
struct PlaceScene {
    /* 0x00000 */ u8 unk00000[4];
    /* 0x00004 */ s32 state;
    /* 0x00008 */ s32 substate;
    /* 0x0000C */ u8 unk0000C[8];
    /* 0x00014 */ u8 placeKind;
    /* 0x00015 */ u8 unk00015[3];
    /* 0x00018 */ s32 placeKey;
    /* 0x0001C */ u8 unk0001C[0x144];
    /* 0x00160 */ ScriptFile *scriptFile;
    /* 0x00164 */ u32 scriptOwner;
    /* 0x00168 */ ScriptRunState *scriptA;
    /* 0x0016C */ ScriptRunState *scriptB;
    /* 0x00170 */ u8 unk00170[0x15BD0];
    /* 0x15D40 */ u32 jobA;
    /* 0x15D44 */ u32 jobB;
};

/* A record of data table 0x17/1 (0x68 bytes). */
struct PlaceRecord {
    /* 0x00 */ u8 text[0x20];
    /* 0x20 */ s32 key;
    /* 0x24 */ u16 kind;
    /* 0x26 */ u8 unk26[0x42];
};

extern "C" {
s32 jobIsValid(u32 job);
s32 eventTexJobSlotsDone(u32 job);
ScriptProcessWork *FUN_00297060(ScriptFile *file, u32 owner);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
void FUN_002a03d8(s32 a, s32 b);
void messageBannerInitSelection(s32 a, s32 b);
void messageTargetSetValue(s32 value, s32 arg);
PlaceRecord *dataTable17Sub1GetRecord(u32 *ignored, u32 index);
s32 dataTable17Sub1GetCount(u32 *ignored);
s32 FUN_0028e9d0(u32 flag);
void FUN_003a4210(PlaceScene *scene);
void buttonHelpSetPreset(s32 preset);
void FUN_0029ee6c(s32 slot, u32 color);

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
    if (scene->scriptFile == NULL || scene->scriptOwner == 0)
        return;
    if (!asdTMTexTableNodeIsLoaded(0x2B, 0))
        return;
    if (jobIsValid(scene->jobA) && !eventTexJobSlotsDone(scene->jobA))
        return;
    if (jobIsValid(scene->jobB) && !eventTexJobSlotsDone(scene->jobB))
        return;

    scene->scriptA = reinterpret_cast<ScriptRunState *>(FUN_00297060(scene->scriptFile, scene->scriptOwner));
    scriptProcessSetMode(scene->scriptA, 2);
    scene->scriptB = reinterpret_cast<ScriptRunState *>(FUN_00297060(scene->scriptFile, scene->scriptOwner));
    scriptProcessSetMode(scene->scriptB, 2);
    FUN_002a03d8(0, 10);
    FUN_002a03d8(1, 10);
    messageBannerInitSelection(1, 0);
    messageTargetSetValue(0, 0);

    u32 kind = scene->placeKind;
    s32 key = scene->placeKey;
    s32 found = -1;
    u32 ignored;
    PlaceRecord *records = dataTable17Sub1GetRecord(&ignored, 0);
    for (s32 i = 0; i < dataTable17Sub1GetCount(&ignored); i++) {
        if (records[i].kind == kind && records[i].key == key) {
            found = i;
            break;
        }
    }
    u32 ignoredSecond;
    PlaceRecord *record = dataTable17Sub1GetRecord(&ignoredSecond, found);
    placeWinStartText(record->text);

    if (placeFlagsAnySet()) {
        scene->substate = 0;
        scene->state = 1;
        FUN_003a4210(scene);
        buttonHelpSetPreset(0x75);
        FUN_0029ee6c(0, 0x323232FF);
    } else {
        scene->substate = 0;
        scene->state = 3;
    }
}

} /* extern "C" */
