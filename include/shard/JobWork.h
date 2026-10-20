/* The job system's work area, returned by jobGetWork(). Only the fields the shard functions
 * use are named; offsets are from those accesses. */
#ifndef SHARD_JOBWORK_H
#define SHARD_JOBWORK_H

#include "common.h"

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
    /* 0x00B9 */ u8 unk00B9[0xF7F];
    /* 0x1038 */ void *bufferB;
    /* 0x103C */ void *bufferC;
    /* 0x1040 */ u8 enabled;
    /* 0x1041 */ u8 unk1041[0x1];
    /* 0x1042 */ u8 handle;
    /* 0x1043 */ u8 unk1043[0x1];
    /* 0x1044 */ u8 done;
    /* 0x1045 */ u8 pending;
} JobWork;

#ifdef __cplusplus
extern "C" {
#endif
JobWork *jobGetWork(void);
#ifdef __cplusplus
}
#endif

#endif
