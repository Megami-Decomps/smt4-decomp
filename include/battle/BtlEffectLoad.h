/* The battle effect work's request names and loaded effect slots (the part the effect loaders touch). */
#ifndef BATTLE_BTLEFFECTLOAD_H
#define BATTLE_BTLEFFECTLOAD_H

#include "common.h"
#include <stddef.h>

/* The effect names the battle recognises (g_btlEffect). */
struct BtlEffectNames {
    /* 0x00 */ const char *numberedPrefix; /* "<prefix>NN" selects a numbered effect */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ const char *ignoredPrefix;
    /* 0x10 */ const char *ignoredName;
    /* 0x14 */ const char *ignoredNameB;
};

/* The effect names a battle unit asks for: eight 0x16-byte names from +0x58 (four per loader). */
struct BtlEffectRequest {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ char names[8][0x16];
};

/* A loaded effect file of the battle's effect work. */
struct BtlEffectFileSlot {
    /* 0x00 */ u8 handle;      /* keyed-record id, 0xFF while unregistered */
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ void *file;
    /* 0x08 */ char name[0x80];
    /* 0x88 */ u8 flags;
    /* 0x89 */ u8 unk89[3];
};

/* The battle effect work, Apocalypse layout (observed fields). */
struct BtlEffectWorkA {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ BtlEffectRequest *request;
    /* 0x1F58 */ u8 unk1F58[0x234];
    /* 0x218C */ BtlEffectFileSlot slots[8];
    /* 0x25EC */ u8 unk25EC[0xDBC];
    /* 0x33A8 */ u32 numberedEffect;
    /* 0x33AC */ u8 numberedIndex;
};

struct AsdMdlObject;

/* A model the effect work keeps for one of the battle state's target slots (BattleTargetSlot); 0x28 bytes. */
struct BtlEffectModelSlot {
    /* 0x00 */ AsdMdlObject *model;
    /* 0x04 */ s32 primaryId;   /* the two ids of the target slot it was created for */
    /* 0x08 */ s32 secondaryId;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ s32 selection;   /* its entry of BtlEffectWork::selections, negative for none */
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 flags;       /* BTL_EFFECT_MODEL_* */
};

enum {
    BTL_EFFECT_MODEL_USED = 2,   /* the slot holds a model */
    BTL_EFFECT_MODEL_LOADED = 4  /* its attachment has finished loading */
};

/* What a model slot publishes once its model is ready. */
struct BtlEffectModelSelection {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 index;
};

/* BtlEffectWork::flags: the stages of the model job (btlEffectModelJobDispatch) and its side tasks. */
enum {
    BTL_EFFECT_JOB_NUMBERED_EFFECT = 0x2,   /* the numbered effect is playing */
    BTL_EFFECT_JOB_COLOR_ONCE = 0x4,        /* give the unit model the default effect colour */
    BTL_EFFECT_JOB_COLOR_FOLLOW = 0x8,      /* the same, until the colour override ends */
    BTL_EFFECT_JOB_CREATE_MODELS = 0x10,    /* create the secondary models of the requested kind */
    BTL_EFFECT_JOB_WAIT_MODELS = 0x20,      /* wait for them, then reset their animation players */
    BTL_EFFECT_JOB_CLONE_MODELS = 0x40,     /* clone the cached models for the acting units */
    BTL_EFFECT_JOB_FINISH_MODELS = 0x80,
    BTL_EFFECT_JOB_MODEL_STAGES = 0xF0,
    BTL_EFFECT_JOB_LOAD_REFERENCES = 0x100, /* request the eleven reference effects */
    BTL_EFFECT_JOB_WAIT_REFERENCES = 0x200, /* wait for their files */
    BTL_EFFECT_JOB_REFERENCES_READY = 0x400
};

/* The same work in Shin Megami Tensei IV: the effect loaders' request and file slots, and what its model job
 * (btlEffectModelJobDispatch) reads: the model slots, the reference effects and the job's stage flags. */
struct BtlEffectWork {
    /* 0x0000 */ u8 unk0000[0x190];
    /* 0x0190 */ BtlEffectModelSlot models[50];
    /* 0x0960 */ u8 unk0960[0x6D0];
    /* 0x1030 */ BtlEffectModelSelection selections[109];
    /* 0x1398 */ u8 unk1398[0x964];
    /* 0x1CFC */ BtlEffectRequest *request;
    /* 0x1D00 */ u8 unk1D00[0x230];
    /* 0x1F30 */ BtlEffectFileSlot slots[8];
    /* 0x2390 */ u8 unk2390[0x230];
    /* 0x25C0 */ BtlEffectFileSlot referenceSlots[11]; /* the "ef_e_ref" effects */
    /* 0x2BC4 */ u8 unk2BC4[0x464];
    /* 0x3028 */ u32 flags;          /* BTL_EFFECT_JOB_* */
    /* 0x302C */ s32 effectKind;     /* the kind the model stages work on (0 and 22 have no models) */
    /* 0x3030 */ u32 frames;         /* frames since the kind was requested, up to 0xFFFF */
    /* 0x3034 */ u32 numberedEffect; /* the filter object filterCreateByKind returned (a BustupEffectLineObject) */
    /* 0x3038 */ u8 numberedIndex;   /* which numbered effect it is */
    /* 0x3039 */ u8 unk3039[0x1DB];
    /* 0x3214 */ s32 wait;           /* frames left of a countdown the job runs */
};

typedef char BtlEffectFileSlotLayoutCheck[sizeof(BtlEffectFileSlot) == 0x8C && offsetof(BtlEffectFileSlot, flags) == 0x88 ? 1 : -1];

typedef char BtlEffectWorkLayoutCheck[sizeof(BtlEffectModelSlot) == 0x28 &&
    offsetof(BtlEffectWork, models) == 0x190 && offsetof(BtlEffectWork, selections) == 0x1030 &&
    offsetof(BtlEffectWork, request) == 0x1CFC && offsetof(BtlEffectWork, slots) == 0x1F30 &&
    offsetof(BtlEffectWork, referenceSlots) == 0x25C0 && offsetof(BtlEffectWork, flags) == 0x3028 &&
    offsetof(BtlEffectWork, numberedEffect) == 0x3034 && offsetof(BtlEffectWork, numberedIndex) == 0x3038 &&
    offsetof(BtlEffectWork, wait) == 0x3214 ? 1 : -1];

typedef char BtlEffectWorkALayoutCheck[offsetof(BtlEffectWorkA, request) == 0x1F54 &&
    offsetof(BtlEffectWorkA, slots) == 0x218C && offsetof(BtlEffectWorkA, numberedEffect) == 0x33A8 &&
    offsetof(BtlEffectWorkA, numberedIndex) == 0x33AC ? 1 : -1];

#endif
