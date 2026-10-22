#ifndef TITLE_TITLEJOBWORK_H
#define TITLE_TITLEJOBWORK_H
#include "common.h"
#include <stddef.h>

struct TitleJobSurface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
};

/* Partial work view of the title-surface job, not the title scene global. */
struct TitleJobWork {
    /* 0x000 */ u8 unk000[0xEDC];
    /* 0xEDC */ u8 unkEDC;
    /* 0xEDD */ u8 unkEDD;
    /* 0xEDE */ u8 unkEDE[6];
    /* 0xEE4 */ u8 surfaceResult;
    /* 0xEE5 */ u8 surfaceUpdated;
    union {
        /* 0xEE6 */ u8 unkEE6[0x3A];
        /* 0xEE6 */ u8 overlayUpdated;
    };
    /* 0xF20 */ TitleJobSurface *surface;
    union {
        /* 0xF24 */ u8 unkF24[4];
        /* 0xF24 */ TitleJobSurface *overlaySurface;
    };
    /* 0xF28 */ u8 overlayShown;
    /* 0xF29 */ u8 unkF29[0xAF];
    /* 0xFD8 */ u8 unkFD8;
    /* 0xFD9 */ u8 unkFD9[3];
    /* 0xFDC */ void *unkFDC;
};
typedef char TitleJobWorkSurfaceCheck[offsetof(TitleJobWork, surface) == 0xF20 ? 1 : -1];
typedef char TitleJobWorkTailCheck[offsetof(TitleJobWork, unkFDC) == 0xFDC ? 1 : -1];
typedef char TitleJobWorkSizeCheck[sizeof(TitleJobWork) == 0xFE0 ? 1 : -1];
typedef char TitleJobWorkOverlayCheck[offsetof(TitleJobWork, overlayUpdated) == 0xEE6 &&
    offsetof(TitleJobWork, overlaySurface) == 0xF24 ? 1 : -1];
#endif
