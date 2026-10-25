/* camp/CampCec/CampCecSetting.c: the StreetPass (cec) settings screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECSETTING_H
#define CAMP_CAMPCEC_CAMPCECSETTING_H

#include "common.h"

#define CAMPCECSETTING_ITEM_COUNT 7

typedef struct CampCecSetting {
    /* 0x00 */ u32 task;         /* the screen's task handle */
    /* 0x04 */ u32 resource;     /* released on close */
    /* 0x08 */ void *heapA;      /* heap block, freed on close */
    /* 0x0C */ void *heapB;      /* heap block, freed on close */
    /* 0x10 */ s32 items[CAMPCECSETTING_ITEM_COUNT];  /* menu entry ids, 0..6 */
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ s32 unk30;
    /* 0x34 */ s32 unk34;
    /* 0x38 */ s32 stage;        /* which menu / answer flow is running */
    /* 0x3C */ u8 flags;         /* bit 0: the script is running, bit 1: the next entry is queued */
    /* 0x3D */ u8 started;       /* the script was created from the two loaded files */
    /* 0x3E */ u8 waiting;       /* waiting for the confirmation to close */
    /* 0x3F */ u8 polling;       /* a script entry is running and is polled every frame */
    /* 0x40 */ u8 done;          /* the screen has finished */
    /* 0x41 */ u8 unk41[3];
} CampCecSetting;

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u8 campCecSettingExists(void);
#ifdef __cplusplus
}
#endif

#endif
