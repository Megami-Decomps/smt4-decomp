/* The job system's work area, returned by jobGetWork(). Only the fields the shard functions
 * use are named; offsets are from those accesses. */
#ifndef SHARD_JOBWORK_H
#define SHARD_JOBWORK_H

#include "common.h"
#include <stddef.h>

/* A render surface description: width and height at 0x14 and 0x18. */
typedef struct JobSurface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
    /* 0x1C */ u32 format;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ u32 buffer;
} JobSurface;

typedef struct JobWork {
    /* 0x0000 */ u32 unk0000;
    /* 0x0004 */ void *bufferA;
    /* 0x0008 */ JobSurface *surface;
    /* 0x000C */ u8 unk000C[0x25];
    /* 0x0031 */ u8 unk0031;
    /* 0x0032 */ u8 unk0032[0xA];
    /* 0x003C */ u32 unk003C;
    /* 0x0040 */ u8 unk0040[0x4C];
    /* 0x008C */ u8 unk008C;
    /* 0x008D */ u8 unk008D[0x2B];
    /* 0x00B8 */ u8 unk00B8;
    /* 0x00B9 */ u8 unk00B9[0xF3B];
    /* 0x0FF4 */ u8 captureEnabled;
    /* 0x0FF5 */ u8 captureRequested;
    /* 0x0FF6 */ u8 unk0FF6[0x6];
    /* 0x0FFC */ u8 captureResult;
    /* 0x0FFD */ u8 captured;
    /* 0x0FFE */ u8 capturedC;     /* set when the capture into bufferC started */
    /* 0x0FFF */ u8 unk0FFF[0x39];
    /* 0x1038 */ void *bufferB;
    /* 0x103C */ void *bufferC;
    /* 0x1040 */ u8 enabled;
    /* 0x1041 */ u8 unk1041[0x1];
    /* 0x1042 */ u8 handle;
    /* 0x1043 */ u8 unk1043[0x1];
    /* 0x1044 */ u8 done;
    /* 0x1045 */ u8 pending;
    /* 0x1046 */ u8 unk1046[0x408];
    /* 0x144E */ s8 fadeActive;
    /* 0x144F */ u8 fadeCaptureResult;
    /* 0x1450 */ s8 fadeEnabled;
    /* 0x1451 */ s8 fadeCaptured;
    /* 0x1452 */ s8 fadeCaptureSkipped; /* set while a state selector suppresses the capture */
    /* 0x1453 */ u8 unk1453[0x29];
    /* 0x147C */ u32 fadeColor;    /* RGBA, alpha in the low byte */
    /* 0x1480 */ u8 unk1480[0x4];
    /* 0x1484 */ s32 fadeFrame;
    /* 0x1488 */ s32 fadeFrames;
    /* 0x148C */ u8 captureBlocked;
    /* 0x148D */ u8 unk148D[0x3];
    /* 0x1490 */ void *captureTarget;
} JobWork;

typedef char JobWorkCaptureEnabledOffsetCheck[offsetof(JobWork, captureEnabled) == 0xFF4 ? 1 : -1];
typedef char JobWorkCapturedOffsetCheck[offsetof(JobWork, captured) == 0xFFD ? 1 : -1];
typedef char JobWorkCapturedCOffsetCheck[offsetof(JobWork, capturedC) == 0xFFE ? 1 : -1];
typedef char JobWorkFadeCaptureOffsetCheck[offsetof(JobWork, fadeCaptureSkipped) == 0x1452 ? 1 : -1];
typedef char JobWorkBufferBOffsetCheck[offsetof(JobWork, bufferB) == 0x1038 ? 1 : -1];
typedef char JobWorkCaptureTargetOffsetCheck[offsetof(JobWork, captureTarget) == 0x1490 ? 1 : -1];
typedef char JobWorkFadeActiveOffsetCheck[offsetof(JobWork, fadeActive) == 0x144E ? 1 : -1];
typedef char JobWorkFadeColorOffsetCheck[offsetof(JobWork, fadeColor) == 0x147C ? 1 : -1];
typedef char JobWorkFadeFramesOffsetCheck[offsetof(JobWork, fadeFrames) == 0x1488 ? 1 : -1];
typedef char JobWorkSizeCheck[sizeof(JobWork) == 0x1494 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* The accessor resolves work from the incoming task/process handle. */
JobWork *jobGetWork(u32 job);
#ifdef __cplusplus
}
#endif

#endif
