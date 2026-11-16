#ifndef TITLE_TITLEJOBWORK_H
#define TITLE_TITLEJOBWORK_H
#include "common.h"
#include <stddef.h>

struct TitleJobSurface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
};

/* The title-surface job's readiness flags and results (0xE00 in its work). */
struct TitleJobFlags {
    /* 0x00 */ u8 unk00[0xDC];
    /* 0xDC */ u8 active;
    /* 0xDD */ u8 ready;
    /* 0xDE */ u8 unkDE[6];
    /* 0xE4 */ u8 surfaceResult;
    /* 0xE5 */ u8 surfaceUpdated;
    /* 0xE6 */ u8 overlayUpdated;
    /* 0xE7 */ u8 unkE7[0x19];
};

/* The title-surface job's surfaces and the state that blocks redrawing them (0xF00 in its work). */
struct TitleJobFrame {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ TitleJobSurface *surface;
    /* 0x24 */ TitleJobSurface *overlaySurface;
    /* 0x28 */ u8 overlayShown;
    /* 0x29 */ u8 unk29[0xAF];
    /* 0xD8 */ u8 blocked;
    /* 0xD9 */ u8 unkD9[3];
    /* 0xDC */ void *source;
};

/* Partial work view of the title-surface job, not the title scene global. */
struct TitleJobWork {
    /* 0x000 */ u8 unk000[0xE00];
    /* 0xE00 */ TitleJobFlags flags;
    /* 0xF00 */ TitleJobFrame frame;
};
typedef char TitleJobWorkLayoutCheck[
    offsetof(TitleJobWork, flags.active) == 0xEDC &&
    offsetof(TitleJobWork, flags.overlayUpdated) == 0xEE6 &&
    offsetof(TitleJobWork, frame.surface) == 0xF20 &&
    offsetof(TitleJobWork, frame.overlayShown) == 0xF28 &&
    offsetof(TitleJobWork, frame.source) == 0xFDC &&
    sizeof(TitleJobWork) == 0xFE0 ? 1 : -1];
#endif
