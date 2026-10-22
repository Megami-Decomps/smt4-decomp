/* NON_MATCHING: retail copies origin through VFP (vldmia/vstmia s1-s3) and direction as ldm/ldr pairs, keeps source in r4, and stores length/progress with separate vstr; ours copies both with core ldm/stm. */
#include "common.h"

extern "C" {

typedef struct VqVec3 {
    f32 x;
    f32 y;
    f32 z;
} VqVec3;

/* A vector source (0x284 bytes): its start point and direction. */
typedef struct VqSource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ VqVec3 origin;
    /* 0x10 */ u8 unk10[0x1C];
    /* 0x2C */ VqVec3 direction;
    /* 0x38 */ u8 unk38[0x24C];
} VqSource;

/* A queued vector request. */
typedef struct VqRequest {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 done;
    /* 0x04 */ s32 source;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ VqVec3 origin;
    /* 0x18 */ VqVec3 direction;
    /* 0x24 */ f32 length;
    /* 0x28 */ f32 progress;
    /* 0x2C */ s32 index;
} VqRequest;

typedef struct VectorQueueWork {
    /* 0x0000 */ VqSource sources[16];
    /* 0x2840 */ u32 unk2840;
    /* 0x2844 */ VqRequest requests[32];
} VectorQueueWork;

extern VectorQueueWork *g_vectorQueueWork;

/* Queues a request for vector `source` of length `length` in the first free slot (NULL when full). */
VqRequest *FUN_0021e16c(s32 source, f32 length)
{
    VqSource *src = &g_vectorQueueWork->sources[source];
    s32 i;

    for (i = 0; i < 32; i++) {
        VqRequest *request = &g_vectorQueueWork->requests[i];

        if (!request->active) {
            request->active = 1;
            request->done = 0;
            request->unk08 = 0;
            request->source = source;
            request->origin = src->origin;
            request->direction = src->direction;
            request->length = length;
            request->progress = 0.0f;
            request->index = i;
            return request;
        }
    }
    return NULL;
}

} /* extern "C" */
