/* The job system's work area, returned by jobGetWork(). Each job type's work is its own object
 * (for example FrameTexWork in frame_tex/FrameTex.h); this prefix only holds the bytes a few
 * generic accessors read. */
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
    /* 0x0004 */ u8 unk0004[0x2D];
    /* 0x0031 */ u8 unk0031;
    /* 0x0032 */ u8 unk0032[6];
    /* 0x0038 */ u32 unk0038;
    /* 0x003C */ u32 unk003C;
    /* 0x0040 */ u8 unk0040[0x4C];
    /* 0x008C */ u8 unk008C;
    /* 0x008D */ u8 unk008D[7];
    /* 0x0094 */ u8 unk0094;
    /* 0x0095 */ u8 unk0095[0x23];
    /* 0x00B8 */ u8 unk00B8;
} JobWork;

typedef char JobWorkUnk00B8OffsetCheck[offsetof(JobWork, unk00B8) == 0xB8 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* The accessor resolves work from the incoming task/process handle. */
JobWork *jobGetWork(u32 job);
#ifdef __cplusplus
}
#endif

#endif
