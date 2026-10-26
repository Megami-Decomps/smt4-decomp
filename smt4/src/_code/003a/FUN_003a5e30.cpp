/* NON_MATCHING: readable rebuild of a selection scene's constructor; the member arrays (nine 0x74-byte entries, nine 0x1002-byte pages) are default-constructed by loops here where retail calls the vector constructor helper with compiler-generated constructors, and the scene's layout is a view over the offsets the constructor writes. */
#include "classes/SelectionState.h"
#include "classes/Obj55ca08.h"
#include "classes/Obj4223ac.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"
#include "code/Code002c_VariantA.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

inline void *operator new(unsigned int, void *place) { return place; }

/* One selection entry (0x74 bytes). */
struct SceneEntry {
    SelectionFlags flags;
    u8 unk10[0x74 - sizeof(SelectionFlags)];
};

/* One page of selections (0x1002 bytes). */
struct ScenePage {
    u8 data[0x1002];
};

/* A selection scene (only the fields the constructor sets). */
struct SelectionScene {
    /* 0x0000 */ u32 unk0000;
    /* 0x0004 */ s32 stepA;
    /* 0x0008 */ s32 stepB;
    /* 0x000C */ u8 unk000C[4];
    /* 0x0010 */ s32 mode;
    /* 0x0014 */ s8 kind;
    /* 0x0015 */ u8 unk0015[3];
    /* 0x0018 */ s32 subKind;
    /* 0x001C */ u8 hasProgress;
    /* 0x001D */ u8 shown;
    /* 0x001E */ u8 unk001E[0x142];
    /* 0x0160 */ u32 unk0160[3];
    /* 0x016C */ u8 unk016C[0x204];
    /* 0x0370 */ u32 unk0370[3];
    /* 0x037C */ s32 buttonSprite;
    /* 0x0380 */ SelectionRectangle firstRectangle;
    /* 0x0394 */ SelectionRectangle secondRectangle;
    /* 0x03A8 */ u8 timers[0x28];
    /* 0x03D0 */ u8 unk03D0[0x458];
    /* 0x0828 */ Obj55ca08 touch;
    /* 0x0864 */ u8 unk0864[0x1C];
    /* 0x0880 */ SceneEntry entries[9];
    /* 0x0C94 */ ScenePage pages[9];
    /* 0x9CA6 */ u8 unk9CA6[2];
    /* 0x9CA8 */ SelectionFlags flags;
};

extern "C" {
void FUN_003a4518(SelectionScene *scene);
void FUN_003a169c(SelectionScene *scene);
void FUN_003a45fc(void);
void FUN_002637c8(void);
void FUN_00282bfc(s32 channel, s32 value);
void FUN_002a03d8(s32 a, s32 b);
s16 *FUN_002c0a2c(u8 kind, u32 sub);
void uiInitializeEightTimerSet(void *timers);
void rectangleInitializeSelection(SelectionRectangle *rectangle, s32 width, s32 a, s32 b);
void buttonHelpAcquireResources(void);
void buttonHelpCreate(void);
void questCenterSetFlag(s32 index, s32 value);
void qcSetPersistentStateFlag(s32 index, s32 value);
s32 bgmGetStateById(u32 id);
void soundChannelRequestIfEnabled(u32 id, s32 a, s32 frames);
void saveFlagBytesSetOneBased(u32 id, s32 value);
void gameCounterAddSaturating(s32 counter, s32 amount);

/* Builds a selection scene: constructs its rectangles, entries and pages, clears its state, creates
 * its window and, when opened with `mode` 1, its button help; otherwise starts the background
 * music for the quest kind and registers every flagged selection. */
SelectionScene *FUN_003a5e30(SelectionScene *scene, u32 mode, s32 kind, s32 subKind)
{
    scene->unk0000 = 0;
    new (&scene->firstRectangle) SelectionRectangle();
    new (&scene->secondRectangle) SelectionRectangle();
    new (&scene->touch) Obj55ca08();
    for (s32 i = 0; i < 9; i++)
        new (&scene->entries[i].flags) SelectionFlags();
    new (&scene->flags) SelectionFlags();
    FUN_003a4518(scene);
    scene->mode = mode;
    scene->unk0000 = 0;
    scene->kind = (s8)kind;
    scene->subKind = subKind;
    *(s32 *)scene->touch.unk38 = -1;
    ((u32 *)scene)[0x864 / 4] = 0;
    ((u32 *)scene)[0x15D24 / 4] = 0;
    ((u32 *)scene)[0x15D28 / 4] = 0;
    ((u32 *)scene)[0x15D40 / 4] = 0;
    ((u32 *)scene)[0x15D44 / 4] = 0;
    ((u32 *)scene)[0x15D48 / 4] = 0;
    scene->unk0160[0] = 0;
    scene->unk0160[1] = 0;
    scene->unk0160[2] = 0;
    scene->unk0370[0] = 0;
    scene->unk0370[1] = 0;
    scene->unk0370[2] = 0;
    scene->hasProgress = 0;
    scene->shown = 0;
    uiInitializeEightTimerSet(scene->timers);
    rectangleInitializeSelection(&scene->firstRectangle, 0x140, 0, 0x2B);
    rectangleInitializeSelection(&scene->secondRectangle, 0x140, 0, 0x2B);
    Obj4223ac *window = new Obj4223ac;
    scene->touch.unk34 = (u32)window;
    FUN_002637c8();
    if (*FUN_002c0a2c((u8)scene->kind, scene->subKind) != 0)
        scene->hasProgress = 1;
    if (scene->mode == 1) {
        scene->stepA = 13;
        scene->stepB = 0;
        buttonHelpAcquireResources();
        buttonHelpCreate();
        asdTMTexTableLoadSprites(0x2B);
        FUN_002c58c8(0x2B, 0);
        scene->buttonSprite = 0x83;
        FUN_003a45fc();
        scene->shown = 1;
        FUN_002a03d8(0, 1);
        FUN_002a03d8(1, 0);
        return scene;
    }
    scene->buttonSprite = 0x1F;
    scene->stepA = 0;
    scene->stepB = 0;
    FUN_003a169c(scene);
    FUN_00282bfc(0, 0xFF);
    FUN_00282bfc(1, 0xFF);
    u32 music = 0x1000060;
    if (kind == 0) {
        qcSetPersistentStateFlag(subKind, 1);
        if (subKind == 6 || subKind == 7) {
            if (bgmGetStateById(0x1000060) != 1)
                soundChannelRequestIfEnabled(music, 0, 0x3C);
        } else if (subKind != 8) {
            music = 0x100005B;
            if (bgmGetStateById(music) != 1)
                soundChannelRequestIfEnabled(music, 0, 0x3C);
        }
    } else if (kind == 1) {
        questCenterSetFlag(subKind, 1);
        if (subKind == 5) {
            if (bgmGetStateById(0x1000060) != 1)
                soundChannelRequestIfEnabled(music, 0, 0x3C);
        } else if (subKind != 9) {
            music = 0x100005C;
            if (bgmGetStateById(music) != 1)
                soundChannelRequestIfEnabled(music, 0, 0x3C);
        }
    }
    FUN_003a45fc();
    scene->shown = 1;
    for (s32 page = 0; page < 9; page++) {
        u8 *base = (u8 *)scene->pages + page * 0x1002;
        for (s32 i = 0; i < *(u16 *)(base + 0x1000); i++) {
            if (*(u16 *)(base + i * 4 + 2) & 1)
                saveFlagBytesSetOneBased(*(u16 *)(base + i * 4), 1);
        }
    }
    gameCounterAddSaturating(0x1C, 1);
    return scene;
}

} /* extern "C" */
