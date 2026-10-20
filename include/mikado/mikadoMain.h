/* mikado/mikadoMain.c: the mikado (field camera / event stage) controller. */
#ifndef MIKADO_MIKADOMAIN_H
#define MIKADO_MIKADOMAIN_H

#include "common.h"

/* The mikado camera object. */
typedef struct MikadoCamera {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 flags;                  /* 0x80 = ... */
    /* 0x24 */ u32 unk24;
    /* 0x28 */ s32 state;
    /* 0x2C */ u8 unk2C[0xE4];
    /* 0x110 */ u8 sub;                     /* secondary base object (the camera is deleted through it) */
    /* 0x111 */ u8 unk111[0x3];
} MikadoCamera;

/* The mikado controller's work area. */
typedef struct MikadoWork {
    /* 0x00 */ u32 task;                   /* the controller's task handle */
    /* 0x04 */ u8 done;                    /* the task has finished */
    /* 0x05 */ u8 unk05[0x3];
    /* 0x08 */ MikadoCamera *camera;
} MikadoWork;

typedef struct MikadoGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MikadoWork *work;
} MikadoGlobals;

#endif
