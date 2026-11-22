/* camp/CampCec/CampCecEdit.c: the StreetPass (cec) edit screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECEDIT_H
#define CAMP_CAMPCEC_CAMPCECEDIT_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "cec/CecMessage.h"
#include "camp/CampCec/CampCecEditList.h"

/* A sliding element of the screen: its position and how far its slide has run (0x14 bytes). */
typedef struct CampCecEditSlide {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
    /* 0x0C */ u32 frame;                  /* frames into the slide */
    /* 0x10 */ s8 done;                    /* the slide finished */
    /* 0x11 */ u8 unk11[0x3];
} CampCecEditSlide;

typedef char CampCecEditSlideCheck[sizeof(CampCecEditSlide) == 0x14 && offsetof(CampCecEditSlide, frame) == 0xC ? 1 : -1];

typedef struct CampCecEdit {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u32 statusScene;            /* the camp's status scene, which shows the card's owner */
    union {
        /* 0x08 */ u32 requestHandle;
        /* 0x08 */ CecProcessSlot *card;   /* the StreetPass card being edited */
    };
    /* 0x0C */ u32 nameLabels;             /* the card's name label set (campCecDrawSetCreate), released on close */
    /* 0x10 */ u32 infoPage;               /* the card's info page (campCecDrawPageCreate), released on close */
    /* 0x14 */ CampCecEditSlide upperSlides[2]; /* [1] is the selected image's position */
    /* 0x3C */ CampCecEditSlide lowerSlides[3]; /* the panel, title and header areas of the lower screen */
    /* 0x78 */ CampCecEditSlide cursorArea;
    /* 0x8C */ CampCecEditSlide listWindow;     /* the choice list's window slides in from 330 to 0 */
    /* 0xA0 */ ScriptProcess *resource;               /* released on close */
    /* 0xA4 */ void *scriptFile;          /* camp/CecEdit_scr.bf, freed on close */
    /* 0xA8 */ void *messageFile;         /* camp/CecEdit_msg.mbm, freed on close */
    /* 0xAC */ void *cardMessageFile;     /* camp/CecEdit_one_msg.mbm, freed on close */
    /* 0xB0 */ struct AsdText *text;       /* the screen's text object, released on close */
    /* 0xB4 */ s32 (*stateHandlers[9])(struct CampCecEdit *edit); /* 1 = close, 2 = change state */
    /* 0xD8 */ s32 messageEntries[10];    /* each message's entry in the screen's script */
    /* 0x100 */ s32 message;              /* the message being shown, -1 = none */
    /* 0x104 */ s32 nextMessage;          /* started once `message` is -1; -1 = none */
    /* 0x108 */ s32 prevState;
    /* 0x10C */ s32 state;
    /* 0x110 */ s32 nextState;            /* -1 = none */
    /* 0x114 */ s32 followingState;       /* the state the next one leads to */
    /* 0x118 */ s32 touchFrames;          /* frames the stylus has stayed on a list row */
    /* 0x11C */ s32 activeMemberCount;    /* stocked demons that are neither dead nor excluded */
    /* 0x120 */ s16 unit;                 /* the demon attached to the card, 0 = none */
    /* 0x122 */ u8 unk122;
    /* 0x123 */ u8 selectionMode;         /* the answer to the first question (0 or 1) */
    /* 0x124 */ u8 unk124;
    /* 0x125 */ u8 unk125;
    /* 0x126 */ u8 unk126[0x2];
    /* 0x128 */ u8 headerVisible;
    /* 0x129 */ u8 openMode;              /* campCecEditCreate's argument */
    /* 0x12A */ u8 unk12A;
    /* 0x12B */ u8 unk12B;
    /* 0x12C */ s32 listIndex;            /* the choice list's position among all its items */
    /* 0x130 */ u32 touchFlags;           /* CEC_EDIT_TOUCH_* */
    /* 0x134 */ s32 listTop;              /* the first item shown */
    /* 0x138 */ s32 listCount;
    /* 0x13C */ s32 listRow;              /* the selected row, counted from listTop */
    /* 0x140 */ u8 unk140;
    /* 0x141 */ u8 listActive;            /* the choice list is taking input */
    /* 0x142 */ u8 unk142[0x2];
    /* 0x144 */ s32 tickerX;              /* moves 8 a frame from -56 to 280 and wraps */
    /* 0x148 */ s32 messageBase;          /* id of the first greeting message in the list */
    /* 0x14C */ s32 rowSprite;            /* sprite of the list's rows: 224, or 225 while the stylus is on one */
    /* 0x150 */ s32 arrowHoldFrames;      /* frames the stylus has stayed on an arrow or the scroll bar */
    /* 0x154 */ s32 touchX;               /* where the stylus went down */
    /* 0x158 */ s32 touchY;
    /* 0x15C */ s32 shownTarget;          /* the message target value the help text was last set for */
} CampCecEdit;

/* smt4a: the edit screen has a different layout; see campCecEditCreate. */
typedef char CampCecEditLayoutCheck[sizeof(CampCecEdit) == 0x160 ? 1 : -1];

typedef char CampCecEditListOffsets[offsetof(CampCecEdit, listWindow.x) == 0x90 &&
    offsetof(CampCecEdit, listWindow.frame) == 0x98 && offsetof(CampCecEdit, touchFrames) == 0x118 &&
    offsetof(CampCecEdit, listIndex) == 0x12C && offsetof(CampCecEdit, listRow) == 0x13C &&
    offsetof(CampCecEdit, tickerX) == 0x144 && offsetof(CampCecEdit, touchY) == 0x158 ? 1 : -1];

typedef char CampCecEditStateOffsets[offsetof(CampCecEdit, lowerSlides[2].done) == 0x74 && offsetof(CampCecEdit, headerVisible) == 0x128 && offsetof(CampCecEdit, nextState) == 0x110 && offsetof(CampCecEdit, unk125) == 0x125 ? 1 : -1];
typedef char CampCecEditMessageOffsets[offsetof(CampCecEdit, listWindow.done) == 0x9C && offsetof(CampCecEdit, messageEntries) == 0xD8 &&
    offsetof(CampCecEdit, message) == 0x100 && offsetof(CampCecEdit, prevState) == 0x108 &&
    offsetof(CampCecEdit, followingState) == 0x114 && offsetof(CampCecEdit, unit) == 0x120 &&
    offsetof(CampCecEdit, selectionMode) == 0x123 && offsetof(CampCecEdit, unk12A) == 0x12A &&
    offsetof(CampCecEdit, listCount) == 0x138 && offsetof(CampCecEdit, listActive) == 0x141 &&
    offsetof(CampCecEdit, messageBase) == 0x148 && offsetof(CampCecEdit, shownTarget) == 0x15C ? 1 : -1];
typedef char CampCecEditOffsets[offsetof(CampCecEdit, requestHandle) == 8 && offsetof(CampCecEdit, upperSlides[1]) == 0x28 ? 1 : -1];

/* Clears the five list positions of the screen (the three at 0x3C first, then the two at 0x14). */
static __inline void campCecEditResetPositions(CampCecEdit *edit)
{
    edit->lowerSlides[0].frame = 0;
    edit->lowerSlides[0].done = 0;
    edit->lowerSlides[1].frame = 0;
    edit->lowerSlides[1].done = 0;
    edit->lowerSlides[2].frame = 0;
    edit->lowerSlides[2].done = 0;
    edit->upperSlides[0].frame = 0;
    edit->upperSlides[0].done = 0;
    edit->upperSlides[1].frame = 0;
    edit->upperSlides[1].done = 0;
}

extern "C" s32 campCecClassifyRequestedUnit(CampCecEdit *edit);

#endif
