/* camp/CampCec/CampCecEdit.c: the StreetPass (cec) edit screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECEDIT_H
#define CAMP_CAMPCEC_CAMPCECEDIT_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "cec/CecMessage.h"

typedef struct CampCecEdit {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u32 linkHolder;
    union {
        /* 0x08 */ u32 requestHandle;
        /* 0x08 */ CecProcessSlot *card;   /* the StreetPass card being edited */
    };
    /* 0x0C */ u32 handleC;                /* released on close */
    /* 0x10 */ u32 handleD;                /* released on close */
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ u8 unk25[0x3];
    /* 0x28 */ u8 selectedImage[1];
    /* 0x29 */ u8 unk29[0xB];
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u8 unk38;
    /* 0x39 */ u8 unk39[0xF];
    /* 0x48 */ u32 unk48;
    /* 0x4C */ u8 unk4C;
    /* 0x4D */ u8 unk4D[0xF];
    /* 0x5C */ u32 unk5C;
    /* 0x60 */ u8 unk60;
    /* 0x61 */ u8 unk61[0xF];
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u8 unk74;
    /* 0x75 */ u8 unk75[0x23];
    /* 0x98 */ u32 unk98;
    /* 0x9C */ u8 unk9C;
    /* 0x9D */ u8 unk9D[0x3];
    /* 0xA0 */ ScriptProcess *resource;               /* released on close */
    /* 0xA4 */ void *heapA;               /* heap block, freed on close */
    /* 0xA8 */ void *heapB;               /* heap block, freed on close */
    /* 0xAC */ void *heapC;               /* heap block, freed on close */
    /* 0xB0 */ u32 handleE;                /* released on close */
    /* 0xB4 */ s32 (*stateHandlers[9])(struct CampCecEdit *edit); /* 1 = close, 2 = change state */
    /* 0xD8 */ s32 messageEntries[10];    /* each message's entry in the screen's script */
    /* 0x100 */ s32 message;              /* the message being shown, -1 = none */
    /* 0x104 */ s32 nextMessage;          /* started once `message` is -1; -1 = none */
    /* 0x108 */ s32 prevState;
    /* 0x10C */ s32 state;
    /* 0x110 */ s32 nextState;            /* -1 = none */
    /* 0x114 */ s32 followingState;       /* the state the next one leads to */
    /* 0x118 */ u8 unk118[0x4];
    /* 0x11C */ s32 unk11C;
    /* 0x120 */ s16 unit;                 /* the demon attached to the card, 0 = none */
    /* 0x122 */ u8 unk122;
    /* 0x123 */ u8 selectionMode;         /* the answer to the first question (0 or 1) */
    /* 0x124 */ u8 unk124;
    /* 0x125 */ u8 unk125;
    /* 0x126 */ u8 unk126[0x4];
    /* 0x12A */ u8 unk12A;
    /* 0x12B */ u8 unk12B[0xD];
    /* 0x138 */ s32 unk138;
    /* 0x13C */ u8 unk13C[0x5];
    /* 0x141 */ u8 unk141;
    /* 0x142 */ u8 unk142[0x6];
    /* 0x148 */ s32 unk148;
    /* 0x14C */ u8 unk14C[0x10];
    /* 0x15C */ s32 shownTarget;          /* the message target value the help text was last set for */
} CampCecEdit;

/* smt4a: the edit screen has a different layout; see campCecEditCreate. */
typedef char CampCecEditLayoutCheck[sizeof(CampCecEdit) == 0x160 ? 1 : -1];

typedef char CampCecEditStateOffsets[offsetof(CampCecEdit, unk74) == 0x74 && offsetof(CampCecEdit, nextState) == 0x110 && offsetof(CampCecEdit, unk125) == 0x125 ? 1 : -1];
typedef char CampCecEditMessageOffsets[offsetof(CampCecEdit, unk98) == 0x98 && offsetof(CampCecEdit, messageEntries) == 0xD8 &&
    offsetof(CampCecEdit, message) == 0x100 && offsetof(CampCecEdit, prevState) == 0x108 &&
    offsetof(CampCecEdit, followingState) == 0x114 && offsetof(CampCecEdit, unit) == 0x120 &&
    offsetof(CampCecEdit, selectionMode) == 0x123 && offsetof(CampCecEdit, unk12A) == 0x12A &&
    offsetof(CampCecEdit, unk138) == 0x138 && offsetof(CampCecEdit, unk141) == 0x141 &&
    offsetof(CampCecEdit, unk148) == 0x148 && offsetof(CampCecEdit, shownTarget) == 0x15C ? 1 : -1];
typedef char CampCecEditOffsets[offsetof(CampCecEdit, requestHandle) == 8 && offsetof(CampCecEdit, selectedImage) == 0x28 ? 1 : -1];

/* Clears the five list positions of the screen (the three at 0x3C first, then the two at 0x14). */
static __inline void campCecEditResetPositions(CampCecEdit *edit)
{
    edit->unk48 = 0;
    edit->unk4C = 0;
    edit->unk5C = 0;
    edit->unk60 = 0;
    edit->unk70 = 0;
    edit->unk74 = 0;
    edit->unk20 = 0;
    edit->unk24 = 0;
    edit->unk34 = 0;
    edit->unk38 = 0;
}

extern "C" s32 campCecClassifyRequestedUnit(CampCecEdit *edit);

#endif
