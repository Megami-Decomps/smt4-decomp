/* battle/Effect/EffectProcess.c: the battle effect process, a job that owns the effect resources. */
#ifndef BATTLE_EFFECT_EFFECTPROCESS_H
#define BATTLE_EFFECT_EFFECTPROCESS_H

#include "common.h"

/* The job's work area, Shin Megami Tensei IV layout. */
typedef struct EffectProcess {
    union {
        /* 0x000 */ u8 unk000[0x528];
        struct {
            u8 camera[0x508];
            /* 0x508 */ f32 eye[3];
            /* 0x514 */ f32 target[3];
            /* 0x520 */ f32 fieldOfView;
            /* 0x524 */ u32 process;
        } scene;
    };
    /* 0x528 */ u32 jobA;        /* sub-jobs stopped when the process is destroyed */
    /* 0x52C */ u32 jobB;
    /* 0x530 */ u8 keepScene;    /* 0 = the scene setup is torn down on destroy */
} EffectProcess;

/* The same work area in Apocalypse, which carries one more sub-job. */
typedef struct EffectProcessA {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ u32 jobA;
    /* 0x530 */ u32 jobB;
    /* 0x534 */ u32 jobC;
    /* 0x538 */ u8 keepScene;
} EffectProcessA;

#endif
