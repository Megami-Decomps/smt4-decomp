/* Battle UI state used when the battle UI job closes (Apocalypse). */
#ifndef SHARD_X14_BTLUICLOSE_H
#define SHARD_X14_BTLUICLOSE_H

#include "common.h"
#include <stddef.h>
struct BtlUiA;

/* A heap block that owns a helper job. */
typedef struct BtlUiHelper {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 job;
} BtlUiHelper;

/* Battle debug module state at 0x5715f8: the helper the UI job owns, the debug menu settings and the flag masks the debug menus test and toggle.
   The masks from 0x48 on are bits of the battle's debug flags (BtlMainStateA.markerMasks); the ones the "btl Flag Menu" toggles are named
   after its item labels (DAT_00571b40, quoted). */
typedef struct BtlUiCloseState {
    /* 0x00 */ s8 variant;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 helperActive;
    /* 0x04 */ s32 selection;
    /* 0x08 */ BtlUiHelper *helper;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ u64 editableMask;     /* combatant flags that mark an entry the debug editor may change */
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ u64 toggleMaskA;      /* flag bits of the first entry toggle in the debug editor */
    /* 0x38 */ u64 toggleMaskB;      /* flag bits of the second entry toggle in the debug editor */
    /* 0x40 */ u64 ownedFlags;       /* display flags the UI set; cleared from the work on close */
    /* 0x48 */ u64 noDamage;         /* "nodamage" */
    /* 0x50 */ u64 noPress;          /* "nopress" */
    /* 0x58 */ u64 noChange;         /* "nochange" */
    /* 0x60 */ u64 damage99999;      /* "damage99999" */
    /* 0x68 */ u64 skillDebug;       /* "skilldebug" */
    /* 0x70 */ u64 allHit;           /* "allhit" */
    /* 0x78 */ u64 allReflect;       /* "allhansya" */
    /* 0x80 */ u64 debugLog;         /* "debuglog" */
    /* 0x88 */ u64 noMp;             /* "nomp" */
    /* 0x90 */ u64 cutLSkill;        /* "cut lskill" */
    /* 0x98 */ u64 talkAll;
    /* 0xA0 */ u64 bustup;
    /* 0xA8 */ u64 maskA8;
    /* 0xB0 */ u64 maskB0;
    /* 0xB8 */ u64 maskB8;
    /* 0xC0 */ u64 weakAuto;         /* "weak auto" */
    /* 0xC8 */ u64 messageWindow;
    /* 0xD0 */ u64 maskD0;
    /* 0xD8 */ u64 talkBeginningLife;
    /* 0xE0 */ u64 escapeOk;         /* "escape ok" */
    /* 0xE8 */ u64 escapeNg;         /* "escape ng" */
    /* 0xF0 */ u64 ill100;           /* "ill100" */
    /* 0xF8 */ u64 useSkillAll;      /* "use skill all" */
    /* 0x100 */ u64 noBst;           /* "no bst" */
    /* 0x108 */ u64 noActGuest;      /* "no act guest" */
    /* 0x110 */ u64 noExp;           /* "noexp" */
    /* 0x118 */ u64 mask118;         /* "renzoku encount" */
    /* 0x120 */ u64 markerMask;      /* marker-mask bits the battle debug menus toggle */
    /* 0x128 */ u64 mask128;
    /* 0x130 */ u64 niyari100;       /* "niyari 100" */
    /* 0x138 */ u64 numDisp;         /* "num disp" */
    /* 0x140 */ u64 loan;            /* "loan" */
    /* 0x148 */ u8 unk148[0x10];
    /* 0x158 */ u64 mask158;
    /* 0x160 */ u64 notRand;         /* "not rand" */
    /* 0x168 */ u64 mask168;
    /* 0x170 */ u64 allMiss;         /* "allmiss" */
    /* 0x178 */ u8 unk178[8];
    /* 0x180 */ u64 stopPartnerAttack; /* "stop prtatk" */
} BtlUiCloseState;

/* The battle UI job's work area. */
typedef struct BtlUiCloseWork {
    /* 0x0000 */ u8 unk0000[0x80];
    /* 0x0080 */ u32 job;
    /* 0x0084 */ u8 unk0084[0x4524];
    /* 0x45A8 */ u64 flags;
} BtlUiCloseWork;

typedef char BtlUiCloseOffsets[offsetof(BtlUiCloseState, selection) == 0x4 &&
    offsetof(BtlUiCloseState, helper) == 0x8 &&
    offsetof(BtlUiCloseState, editableMask) == 0x20 && offsetof(BtlUiCloseState, toggleMaskA) == 0x30 &&
    offsetof(BtlUiCloseState, toggleMaskB) == 0x38 && offsetof(BtlUiCloseState, markerMask) == 0x120 &&
    offsetof(BtlUiCloseState, ownedFlags) == 0x40 && offsetof(BtlUiCloseWork, job) == 0x80 &&
    offsetof(BtlUiCloseWork, flags) == 0x45A8 && offsetof(BtlUiHelper, job) == 0x10 ? 1 : -1];
typedef char BtlUiCloseFlagMenuOffsets[offsetof(BtlUiCloseState, noDamage) == 0x48 &&
    offsetof(BtlUiCloseState, cutLSkill) == 0x90 && offsetof(BtlUiCloseState, weakAuto) == 0xC0 &&
    offsetof(BtlUiCloseState, escapeOk) == 0xE0 && offsetof(BtlUiCloseState, noExp) == 0x110 &&
    offsetof(BtlUiCloseState, niyari100) == 0x130 && offsetof(BtlUiCloseState, loan) == 0x140 &&
    offsetof(BtlUiCloseState, notRand) == 0x160 && offsetof(BtlUiCloseState, allMiss) == 0x170 &&
    offsetof(BtlUiCloseState, stopPartnerAttack) == 0x180 ? 1 : -1];
typedef char BtlUiCloseMaskOffsets[offsetof(BtlUiCloseState, talkAll) == 0x98 &&
    offsetof(BtlUiCloseState, bustup) == 0xA0 && offsetof(BtlUiCloseState, maskA8) == 0xA8 &&
    offsetof(BtlUiCloseState, maskB0) == 0xB0 && offsetof(BtlUiCloseState, maskB8) == 0xB8 &&
    offsetof(BtlUiCloseState, messageWindow) == 0xC8 && offsetof(BtlUiCloseState, maskD0) == 0xD0 &&
    offsetof(BtlUiCloseState, talkBeginningLife) == 0xD8 && offsetof(BtlUiCloseState, mask118) == 0x118 &&
    offsetof(BtlUiCloseState, mask128) == 0x128 && offsetof(BtlUiCloseState, mask158) == 0x158 &&
    offsetof(BtlUiCloseState, mask168) == 0x168 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void FUN_004aa780(struct BtlUiA *ui, u8 value);
#ifdef __cplusplus
}
#endif

#endif
