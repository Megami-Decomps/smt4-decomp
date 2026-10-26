/* NON_MATCHING: the fade record selection is inlined per phase with different register allocation and the float constants sit in other registers (187 vs 185 rows); the fade logic is the same. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "sys/RuntimeObjects.h"

extern "C" {

/* One fade timing record (0x10 bytes): the fade-in length, the overlap and the fade-out times. */
typedef struct SmokeFadeRecord {
    /* 0x00 */ s32 inLength;
    /* 0x04 */ s32 inOverlap;
    /* 0x08 */ s32 outLength;
    /* 0x0C */ s32 outOverlap;
} SmokeFadeRecord;

/* The smoke fade state: the phase, the timing records, the frame counter and the two fade levels. */
typedef struct SmokeFade {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SmokeFadeRecord *records;
    /* 0x0C */ u32 phase;               /* 0: start, 1: fading in, 2: fading out, 3: done */
    /* 0x10 */ s32 index;
    /* 0x14 */ s32 skipIn;
    /* 0x18 */ s32 elapsed;
    /* 0x1C */ f32 levelA;
    /* 0x20 */ f32 levelB;
    /* 0x24 */ u8 active;
    /* 0x25 */ u8 useDefault;
} SmokeFade;

/* The pointer to the state followed by the two images the fade needs loaded. */
typedef struct SmokeFadeGlobals {
    SmokeFade *state;
    struct {
        u32 table;
        u32 node;
        u32 unk08;
    } images[2];
} SmokeFadeGlobals;

extern SmokeFadeGlobals g_smokeFadeState;
extern SmokeFadeRecord DAT_0057f498;

s32 FUN_00162ea4(void);
f32 mathInterpolateTimed(f32 from, f32 to, s32 duration, s32 elapsed);
void FUN_003d54f8(s32 slot, s32 value);

/* Whether both fade images are loaded. */
static __inline s32 smokeFadeImagesLoaded(void)
{
    s32 loaded = 0;

    for (s32 i = 0; i < 2; i++) {
        if (asdTMTexTableNodeIsLoaded(g_smokeFadeState.images[i].table, g_smokeFadeState.images[i].node) != 0) {
            loaded++;
        }
    }
    return loaded;
}

/* The fade's current timing record: the default one, or the indexed record of the loaded set. */
static __inline SmokeFadeRecord *smokeFadeRecord(SmokeFade *state)
{
    SmokeFadeRecord *record = &DAT_0057f498;

    if (g_smokeFadeState.state->useDefault == 0) {
        record = NULL;
        if (g_smokeFadeState.state->records != NULL) {
            record = &g_smokeFadeState.state->records[state->index];
        }
    }
    return record;
}

/* Advances the smoke fade one frame: waits for its images, then fades the two levels in
 * (record timing), holds, and fades them out, finishing at phase 3. Always returns 0. */
u32 FUN_0023af68(void)
{
    SmokeFade *state = g_smokeFadeState.state;
    SmokeFadeRecord *record;

    if (smokeFadeImagesLoaded() == 2 && state->records != NULL && FUN_00162ea4() != 0) {
        state->active = 0;
        state->phase = 3;
    }
    switch (state->phase) {
    case 0:
        if (smokeFadeImagesLoaded() != 2) {
            return 0;
        }
        if (state->records == NULL) {
            return 0;
        }
        state->useDefault = FUN_00203d74() != 0;
        record = smokeFadeRecord(state);
        if (state->skipIn != 0) {
            state->levelB = 0.0f;
            state->levelA = 0.0f;
            state->phase = 2;
            slotSetRequest(1, record->outLength + 1, -1);
        } else {
            FUN_003d54f8(0, 0);
            FUN_003d54f8(1, record->inLength + 1);
            state->levelB = 1.0f;
            state->levelA = 1.0f;
            state->phase = 1;
        }
        state->active = 1;
        return 0;
    case 1:
        record = smokeFadeRecord(state);
        state->levelA = mathInterpolateTimed(1.0f, 0.0f, record->inLength, state->elapsed);
        if (state->elapsed >= record->inOverlap) {
            state->levelB = mathInterpolateTimed(1.0f, 0.0f, record->inLength - record->inOverlap,
                                                 state->elapsed - record->inOverlap);
        }
        state->elapsed++;
        if (state->levelB != 0.0f) {
            return 0;
        }
        break;
    case 2:
        record = smokeFadeRecord(state);
        state->levelA = mathInterpolateTimed(0.0f, 1.0f, record->outLength, state->elapsed);
        if (state->elapsed >= record->outOverlap) {
            state->levelB = mathInterpolateTimed(0.0f, 1.0f, record->outLength - record->outOverlap,
                                                 state->elapsed - record->inOverlap);
        }
        state->elapsed++;
        if (!(1.0f - 1.0f / (f32)(record->outLength - record->outOverlap - 1) > state->levelB)) {
            slotSetRequest(0, 0, -1);
        }
        if (*(s32 *)&state->levelB != 0x3F800000) {
            return 0;
        }
        break;
    default:
        return 0;
    }
    state->phase = 3;
    state->active = 0;
    state->elapsed = 0;
    return 0;
}

}
