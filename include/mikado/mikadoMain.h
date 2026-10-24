/* mikado/mikadoMain.c: the mikado (field camera / event stage) controller. */
#ifndef MIKADO_MIKADOMAIN_H
#define MIKADO_MIKADOMAIN_H

#include "common.h"
#include "classes/FloatState.h"
#include "classes/Obj55ca08.h"
#include "classes/SelectionState.h"
#include "classes/UShortVec3.h"

extern "C" void *asdOperatorNew(u32 bytes);

/* The talk window's work object (0x17F0 bytes); a floating-point state sub-object sits at 0x4CC. */
class MikadoTalkWork {
public:
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    u8 unk000[0x4CC];
    FloatState state;
    u8 unk52C[0x17F0 - 0x4CC - sizeof(FloatState)];
};

/* The mikado camera object (0xEB0 bytes). Its constructor is inline: it clears a few fields and
 * constructs the members that have constructors. */
class MikadoCamera {
public:
    MikadoCamera() : unk00(0), unk10(0), flags(0) {}
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* Loads the scene resources (talk/check windows, button help, sprite tables) and clears the state. */
    void initialize();

    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01[0xF];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[0xF];
    /* 0x20 */ u32 flags;                  /* 0x80 = ... */
    /* 0x24 */ u8 ready;                  /* set once the scene finished loading */
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 state;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ s32 unk34;
    /* 0x38 */ u8 unk38[4];
    /* 0x3C */ UShortVec3 positionA;
    /* 0x42 */ UShortVec3 positionB;
    /* 0x48 */ u8 unk48[4];
    /* 0x4C */ u16 unk4C;
    /* 0x4E */ u16 unk4E;
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ f32 unk58;
    /* 0x5C */ f32 unk5C;
    /* 0x60 */ u8 unk60[0x3C];
    /* 0x9C */ SelectionFlags selectionFlags;
    /* 0xAB */ u8 unkAB[0x65];
    /* 0x110 */ Obj55ca08 sub;             /* secondary base object (the camera is deleted through it) */
    /* 0x14C */ u8 unk14C[0xD58 - 0x14C];
    /* 0xD58 */ u32 unkD58;
    /* 0xD5C */ u32 unkD5C;
    /* 0xD60 */ u8 unkD60[0xC];
    /* 0xD6C */ u32 unkD6C;
    /* 0xD70 */ u32 unkD70;
    /* 0xD74 */ u32 unkD74;
    /* 0xD78 */ u32 unkD78;
    /* 0xD7C */ u32 talkBf;                /* "mikado/talk.bf" */
    /* 0xD80 */ u32 talkMbm;               /* "mikado/talk.mbm" */
    /* 0xD84 */ u32 unkD84;
    /* 0xD88 */ u32 checkBf;               /* "mikado/check.bf" */
    /* 0xD8C */ u32 checkMbm;              /* "mikado/check.mbm" */
    /* 0xD90 */ u8 unkD90[0xDB0 - 0xD90];
    /* 0xDB0 */ u32 unkDB0;
    /* 0xDB4 */ u8 unkDB4[0xE5C - 0xDB4];
    /* 0xE5C */ MikadoTalkWork *talkWork;
    /* 0xE60 */ u8 unkE60[0xEB0 - 0xE60];
};

/* The mikado controller's work area. */
typedef struct MikadoWork {
    /* 0x00 */ u32 task;                   /* the controller's task handle */
    /* 0x04 */ u8 done;                    /* the task has finished */
    /* 0x05 */ u8 state;                   /* 0 = create the camera, 1 = running, 2 = tear down, 3 = finished */
    /* 0x06 */ u8 unk06[0x2];
    /* 0x08 */ MikadoCamera *camera;
} MikadoWork;

typedef struct MikadoGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MikadoWork *work;
    /* 0x08 */ u32 cameraStartA;           /* initial camera position components */
    /* 0x0C */ u32 cameraStartC;
} MikadoGlobals;

#endif
