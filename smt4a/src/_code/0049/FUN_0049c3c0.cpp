/* NON_MATCHING: readable rebuild of the Apocalypse selection scene's constructor (twin of smt4 FUN_003a5e30; the window class with the vtable at 0x55C880 is declared by its destructor only); the member arrays are default-constructed by loops here where retail calls the vector constructor helper with compiler-generated constructors. */
#include "classes/SelectionState.h"
#include "classes/Obj422594.h"
#include "classes/Obj55ca08.h"
#include "event/bustupEvent/BustupTex.h"

inline void *operator new(unsigned int, void *place) { return place; }

/* The scene's window (vtable at 0x55C880). */
class Obj55c880 : public Obj422594 {
public:
    virtual ~Obj55c880();
    /* 0x64 */ u32 positionId;
};

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
    /* 0x00000 */ u32 unk00000;
    /* 0x00004 */ s32 stepA;
    /* 0x00008 */ s32 stepB;
    /* 0x0000C */ u8 unk0000C[4];
    /* 0x00010 */ s32 previousStepA;
    /* 0x00014 */ s32 mode;
    /* 0x00018 */ s8 kind;
    /* 0x00019 */ u8 unk00019[3];
    /* 0x0001C */ s32 subKind;
    /* 0x00020 */ u8 hasProgress;
    /* 0x00021 */ u8 shown;
    /* 0x00022 */ u8 unk00022[0x162];
    /* 0x00184 */ u32 unk00184[3];
    /* 0x00190 */ u8 unk00190[0x204];
    /* 0x00394 */ u32 unk00394[3];
    /* 0x003A0 */ s32 buttonSprite;
    /* 0x003A4 */ SelectionRectangle firstRectangle;
    /* 0x003B8 */ SelectionRectangle secondRectangle;
    /* 0x003CC */ u8 timers[0x28];
    /* 0x003F4 */ u8 unk003F4[0x714];
    /* 0x00B08 */ Obj55ca08 touch;
    /* 0x00B44 */ u8 unk00B44[0x1C];
    /* 0x00B60 */ SceneEntry entries[9];
    /* 0x00F74 */ ScenePage pages[9];
    /* 0x09F86 */ u8 unk09F86[2];
    /* 0x09F88 */ SelectionFlags flags;
    /* 0x09F98 */ u8 unk09F98[0x606C];
    /* 0x16004 */ u32 tail[10];
    /* 0x1602C */ u8 unk1602C[0x28];
    /* 0x16054 */ u32 tailA;
    /* 0x16058 */ u32 tailB;
};

extern "C" {
void FUN_0049a8b8(SelectionScene *scene);
void FUN_0049669c(SelectionScene *scene);
void FUN_0049a9a8(void);
void FUN_0031e198(void);
void FUN_004cf7cc(void *timers);
void rectangleInitializeSelection(SelectionRectangle *rectangle, s32 width, s32 a, s32 b);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void asdTMTexTableLoadSprites(s32 table);
void FUN_00148bb8(s32 a, s32 b);
s16 *FUN_00145f04(u8 kind, u32 sub);
void FUN_0040a640(void);
void statsSetSecondBankFlag(s32 index, s32 value);
void statsSetFirstBankFlag(s32 index, s32 value);
s32 bgmGetStateById(u32 id);
void soundChannelRequestIfEnabled(u32 id, s32 a, s32 frames);
void FUN_0022677c(s32 channel, s32 value);
void FUN_003d54f8(s32 a, s32 b);
void FUN_0040a710(u32 id, s32 value);
void FUN_00408184(s32 a, s32 b);

/* Builds the Apocalypse selection scene: constructs its rectangles, entries and pages, clears its
 * state, creates its window and, when opened with `mode` 1, its button help; otherwise starts the
 * music for the kind and registers every flagged selection. */
SelectionScene *FUN_0049c3c0(SelectionScene *scene, u32 mode, s32 kind, s32 subKind)
{
    scene->unk00000 = 0;
    new (&scene->firstRectangle) SelectionRectangle();
    new (&scene->secondRectangle) SelectionRectangle();
    new (&scene->touch) Obj55ca08();
    for (s32 i = 0; i < 9; i++)
        new (&scene->entries[i].flags) SelectionFlags();
    new (&scene->flags) SelectionFlags();
    FUN_0049a8b8(scene);
    scene->mode = mode;
    scene->unk00000 = 0;
    scene->kind = (s8)kind;
    scene->subKind = subKind;
    *(s32 *)scene->touch.unk38 = -1;
    ((u32 *)scene)[0xB44 / 4] = 0;
    scene->tail[0] = 0;
    scene->tail[1] = 0;
    scene->tail[7] = 0;
    scene->tail[8] = 0;
    scene->tail[9] = 0;
    scene->unk00184[0] = 0;
    scene->unk00184[1] = 0;
    scene->unk00184[2] = 0;
    scene->unk00394[0] = 0;
    scene->unk00394[1] = 0;
    scene->unk00394[2] = 0;
    scene->hasProgress = 0;
    scene->shown = 0;
    FUN_004cf7cc(scene->timers);
    rectangleInitializeSelection(&scene->firstRectangle, 0x140, 0, 0x20);
    rectangleInitializeSelection(&scene->secondRectangle, 0x140, 0, 0x20);
    Obj55c880 *window = new Obj55c880;
    scene->touch.unk34 = (u32)window;
    scene->tailA = 0;
    scene->tailB = 0;
    FUN_0031e198();
    s16 *progress = FUN_00145f04((u8)scene->kind, scene->subKind);
    s32 sub = scene->subKind;
    FUN_00148bb8(sub, (u8)scene->kind);
    if (sub == 0)
        FUN_0040a640();
    if (*progress != 0)
        scene->hasProgress = 1;
    if (scene->mode == 1) {
        scene->previousStepA = scene->stepA;
        scene->stepA = 15;
        scene->stepB = 0;
        campButtonHelpLoad();
        campButtonHelpAcquire();
        asdTMTexTableLoadSprites(0x20);
        FUN_0014afd0(0x20, 0);
        scene->buttonSprite = 0x83;
        FUN_0049a9a8();
        scene->shown = 1;
        FUN_003d54f8(0, 1);
        FUN_003d54f8(1, 0);
        return scene;
    }
    scene->buttonSprite = 0x1F;
    scene->previousStepA = scene->stepA;
    scene->stepA = 0;
    scene->stepB = 0;
    FUN_0049669c(scene);
    FUN_0022677c(0, 0xFF);
    FUN_0022677c(1, 0xFF);
    u32 music = 0x1000047;
    if (kind == 0) {
        statsSetFirstBankFlag(subKind, 1);
        if (subKind == 6 || subKind == 7 || subKind == 9) {
            if (bgmGetStateById(0x1000047) != 1)
                soundChannelRequestIfEnabled(music, 0, 0x3C);
        } else if (subKind != 8) {
            music = 0x1000042;
            if (bgmGetStateById(music) != 1)
                soundChannelRequestIfEnabled(music, 0, 0x3C);
        }
    } else if (kind == 1) {
        statsSetSecondBankFlag(subKind, 1);
        if (subKind == 5) {
            if (bgmGetStateById(0x1000047) != 1)
                soundChannelRequestIfEnabled(music, 0, 0x3C);
        } else if (subKind != 9) {
            music = 0x1000043;
            if (bgmGetStateById(music) != 1)
                soundChannelRequestIfEnabled(music, 0, 0x3C);
        }
    }
    FUN_0049a9a8();
    scene->shown = 1;
    for (s32 page = 0; page < 9; page++) {
        u8 *base = (u8 *)scene->pages + page * 0x1002;
        for (s32 i = 0; i < *(u16 *)(base + 0x1000); i++) {
            if (*(u16 *)(base + i * 4 + 2) & 1)
                FUN_0040a710(*(u16 *)(base + i * 4), 1);
        }
    }
    FUN_00408184(0x1C, 1);
    return scene;
}

} /* extern "C" */
