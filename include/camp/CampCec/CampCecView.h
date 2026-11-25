/* camp/CampCec/CampCecView.c: the StreetPass (cec) view screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECVIEW_H
#define CAMP_CAMPCEC_CAMPCECVIEW_H

#include "common.h"

/* A StreetPass mark entry of IV's save data (saveGetIndexedMapValue), 0x4C bytes. */
typedef struct CampCecMarkEntryIV {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 flags;                   /* bit 0x10: entry not yet seen */
    /* 0x21 */ u8 unk21[0x27];
    /* 0x48 */ u16 count;                  /* 0 = unused entry */
    /* 0x4A */ u8 unk4A[2];
} CampCecMarkEntryIV;

/* A panel's slide animation. */
typedef struct CampCecViewSlide {
    /* 0x00 */ f32 value;
    /* 0x04 */ s32 offset;                 /* x offset in pixels, CAMP_CEC_VIEW_SLIDE_START when off screen */
    /* 0x08 */ u32 unk08;
    /* 0x0C */ s32 frame;
    /* 0x10 */ u8 done;
    /* 0x11 */ u8 unk11[3];
} CampCecViewSlide;

/* Work area, Shin Megami Tensei IV (0x16C bytes). */
typedef struct CampCecView {
    /* 0x000 */ u32 task;                  /* the screen's task handle */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 statusScene;           /* the overlay's status scene */
    /* 0x00C */ struct CampCecMarkEntryIV *current; /* the selected entry */
    /* 0x010 */ u8 unk010[0x90];
    /* 0x0A0 */ struct CampCecViewSlide headerSlides[2];
    /* 0x0C8 */ struct CampCecViewSlide rowSlides[5];
    /* 0x12C */ u32 handle[3];             /* the visible rows' label sets; released on close */
    /* 0x138 */ u32 handleB;               /* the character info panel; released on close */
    /* 0x13C */ s32 selected;              /* index of the selected entry */
    /* 0x140 */ s32 top;                   /* index of the first visible entry */
    /* 0x144 */ u32 state;
    /* 0x148 */ s32 usedCount;             /* entries with a nonzero count */
    /* 0x14C */ s32 previewed;             /* entry the status scene's model was last set up for */
    /* 0x150 */ u32 touchRepeat;           /* frames a scroll arrow has been held */
    /* 0x154 */ u32 navigationFlags;      /* scrollbar cap and thumb variants */
    /* 0x158 */ u8 unk158[4];
    /* 0x15C */ u8 done;                   /* the screen has finished */
    /* 0x15D */ u8 unk15D[0x3];
    /* 0x160 */ void *heap;                /* camp/CecEdit_one_msg.mbm; heap block, freed on close */
    /* 0x164 */ u8 panelPopulated;
    /* 0x165 */ u8 modelShown;
    /* 0x166 */ u8 unk166[2];
    /* 0x168 */ u32 settleFrames;          /* frames since the selection last changed */
} CampCecView;

typedef char CampCecViewSizeCheck[sizeof(CampCecView) == 0x16C && sizeof(CampCecMarkEntryIV) == 0x4C ? 1 : -1];
typedef char CampCecViewNavigationCheck[
    __INTADDR__(&((CampCecView *)0)->navigationFlags) == 0x154 &&
    __INTADDR__(&((CampCecMarkEntryIV *)0)->flags) == 0x20 &&
    __INTADDR__(&((CampCecMarkEntryIV *)0)->count) == 0x48 ? 1 : -1];

/* A StreetPass mark entry of the save data (gameDataGetMarkEntry), 100 bytes. */
typedef struct CampCecMarkEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 flags;                   /* bit 0x10: new, cleared once the entry has been looked at */
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 icon;                    /* portrait texture requested for the info panel */
    /* 0x23 */ u8 unk23[0x11];
    /* 0x34 */ u16 shownCount;             /* `count` as of the last time the entry was selected */
    /* 0x36 */ u8 unk36[0x2A];
    /* 0x60 */ u16 count;                  /* 0 = unused entry */
    /* 0x62 */ u8 unk62[2];
} CampCecMarkEntry;

typedef char CampCecMarkEntrySizeCheck[sizeof(CampCecMarkEntry) == 0x64 ? 1 : -1];

enum {
    CAMP_CEC_VIEW_ROWS = 3,                /* entries listed at once */
    CAMP_CEC_VIEW_ENTRY_COUNT = 32,        /* mark entries in the save data */
    CAMP_CEC_VIEW_ENTRY_COUNT_IV = 12,     /* the same in IV */
    CAMP_CEC_VIEW_SLIDE_START = 0x14A      /* a row panel's offset before it slides in */
};

/* Work area, Shin Megami Tensei IV: Apocalypse (0x14C bytes). */
typedef struct CampCecViewA {
    /* 0x000 */ u32 task;                  /* the screen's task handle */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 statusScene;           /* the overlay's status scene (overlayGetStatusScene) */
    /* 0x00C */ CampCecMarkEntry *current; /* the selected entry */
    /* 0x010 */ u8 unk010[0x68];
    /* 0x078 */ CampCecViewSlide headerSlides[2];
    /* 0x0A0 */ CampCecViewSlide rowSlides[5];
    /* 0x104 */ u32 handle[3];             /* the visible rows' label sets; released on close */
    /* 0x110 */ u32 handleB;               /* the character info panel; released on close */
    /* 0x114 */ s32 selected;              /* index of the selected entry */
    /* 0x118 */ s32 top;                   /* index of the first visible entry */
    /* 0x11C */ u32 state;
    /* 0x120 */ s32 usedCount;             /* entries with a nonzero count */
    /* 0x124 */ u8 unk124[4];
    /* 0x128 */ u32 touchRepeat;           /* frames a scroll arrow has been held */
    /* 0x12C */ u8 unk12C[8];
    /* 0x134 */ u8 done;                   /* the screen has finished */
    /* 0x135 */ u8 unk135[0x3];
    /* 0x138 */ void *heap;                /* camp/CecEdit_one_msg.mbm; heap block, freed on close */
    /* 0x13C */ u8 panelPopulated;
    /* 0x13D */ u8 modelShown;
    /* 0x13E */ u8 unk13E[2];
    /* 0x140 */ u32 settleFrames;          /* frames since the selection last changed */
    /* 0x144 */ u32 pageDirty;             /* 1 = the info panel must be rebuilt for `current` */
    /* 0x148 */ u32 populatedIndex;        /* entry the info panel was last populated for */
} CampCecViewA;

typedef char CampCecViewASizeCheck[sizeof(CampCecViewA) == 0x14C ? 1 : -1];

extern "C" {
u32 overlayIsNotBusy(void);
}

extern "C" {
u32 cecOutboxReadCard(struct CecProcessSlot *out);
}

extern "C" {
u8 *rt_locale(void);
}

extern "C" {
void effCreateRegisteredPair(u32 param1, u32 param2);
}

#ifdef __cplusplus
extern "C" {
#endif

int FUN_00262f78(void);

#ifdef __cplusplus
}
#endif

#endif
