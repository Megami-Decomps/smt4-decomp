#ifndef MAP_MAPCAMERAWORK_H
#define MAP_MAPCAMERAWORK_H

#include "map/mapDepart.h"
#include "map/VectorPairTransition.h"
#include <stddef.h>

/* The field map's camera view (IV; Apocalypse's twin is LmapViewA, whose layout is 4 bytes longer
 * from 0x1C on), kept by g_mapCamera and LmapViewHolder::view. It holds the look-at camera (eye,
 * target, up), the follow camera's heading and per-preset distances, the shoulder-button half turn
 * and the camera move. */
typedef struct LmapView {
    /* 0x000 */ s32 mode;           /* camera mode: 3 overview, 0xC scripted */
    /* 0x004 */ s32 phase;          /* frames in the mode */
    /* 0x008 */ s32 unk008;
    /* 0x00C */ s32 unk00C;
    /* 0x010 */ u8 unk010[4];
    /* 0x014 */ u32 active;
    /* 0x018 */ f32 heading;        /* the follow camera's heading, degrees */
    /* 0x01C */ MapVector up;
    /* 0x028 */ MapVector upCopy;
    /* 0x034 */ MapVector eye;
    /* 0x040 */ MapVector target;
    /* 0x04C */ MapVector savedEye;    /* the applied eye */
    /* 0x058 */ MapVector savedTarget; /* the applied target */
    /* 0x064 */ MapVector lookFrom;
    /* 0x070 */ MapVector lookTo;
    /* 0x07C */ f32 unk07C;
    /* 0x080 */ u8 unk080[0x18];
    /* 0x098 */ f32 scale;
    /* 0x09C */ f32 clipDistance;
    /* 0x0A0 */ f32 timer;
    /* 0x0A4 */ u8 enabled;
    /* 0x0A5 */ u8 unk0A5[3];
    /* 0x0A8 */ u32 state;
    /* 0x0AC */ s32 contextMode;    /* compared with a map-interface record's destination */
    /* 0x0B0 */ u8 turning;         /* a half turn is in progress */
    /* 0x0B1 */ u8 turnHeld;        /* both shoulder buttons are still held after a turn */
    /* 0x0B2 */ s16 cooldown;
    /* 0x0B4 */ s16 elapsed;
    /* 0x0B6 */ u8 unk0B6[2];
    /* 0x0B8 */ f32 turnStart;      /* the half turn's start heading, ... */
    /* 0x0BC */ f32 turnTarget;     /* ... end heading ... */
    /* 0x0C0 */ f32 turnDirection;  /* ... and direction */
    /* 0x0C4 */ s32 preset;         /* the follow-camera preset (a column of the tables below) */
    /* 0x0C8 */ f32 targetHeight[16];
    /* 0x108 */ f32 eyeHeight[16];
    /* 0x148 */ f32 lateralDistance[16];
    /* 0x188 */ f32 rearDistance[16];
    /* 0x1C8 */ f32 fieldOfView[16]; /* degrees */
    /* 0x208 */ s32 contextOverride;
    /* 0x20C */ f32 values[4];
    /* 0x21C */ u8 tracking;        /* the camera move below is running */
    /* 0x21D */ u8 unk21D[3];
    /* 0x220 */ VectorPairTransition move; /* the camera move (vectorPairTransitionStep steps it) */
    /* 0x290 */ u8 unk290[4];
    /* 0x294 */ MapVector targetOffset;
    /* 0x2A0 */ u32 requestActive;  /* a request (lmapRequestTimedEffect) is pending */
    /* 0x2A4 */ s32 priority;       /* the pending request's priority */
    /* 0x2A8 */ s16 requestId;      /* -1 for none */
    /* 0x2AA */ s16 unk2AA;         /* four tenths of unk2AC */
    /* 0x2AC */ s16 unk2AC;         /* the request amount times 10 */
    /* 0x2AE */ s16 unk2AE;         /* four tenths of unk2AC */
    /* 0x2B0 */ u8 moving;
    /* 0x2B1 */ u8 unk2B1[7];
    /* 0x2B8 */ u8 presetEnabled;
    /* 0x2B9 */ u8 unk2B9[3];
    /* 0x2BC */ f32 weight;
} LmapView;

/* The camera module's globals at 0x4474f0 (Apocalypse's LmapViewHolderA); the word after is
 * g_mapCamera. */
typedef struct LmapViewHolder {
    /* 0x00 */ u32 job;
    /* 0x04 */ LmapView *view;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ f32 eyeFloor;    /* the eye height of the last close-up; the pull-back does not go below it */
} LmapViewHolder;

typedef char LmapViewOffsets[offsetof(LmapView, heading) == 0x18 && offsetof(LmapView, up) == 0x1C &&
    offsetof(LmapView, eye) == 0x34 && offsetof(LmapView, savedEye) == 0x4C &&
    offsetof(LmapView, lookTo) == 0x70 && offsetof(LmapView, scale) == 0x98 &&
    offsetof(LmapView, state) == 0xA8 && offsetof(LmapView, contextMode) == 0xAC &&
    offsetof(LmapView, turning) == 0xB0 && offsetof(LmapView, turnStart) == 0xB8 &&
    offsetof(LmapView, preset) == 0xC4 && offsetof(LmapView, rearDistance) == 0x188 &&
    offsetof(LmapView, fieldOfView) == 0x1C8 && offsetof(LmapView, contextOverride) == 0x208 &&
    offsetof(LmapView, tracking) == 0x21C && offsetof(LmapView, move) == 0x220 &&
    offsetof(LmapView, targetOffset) == 0x294 &&
    offsetof(LmapView, moving) == 0x2B0 && offsetof(LmapView, presetEnabled) == 0x2B8 &&
    sizeof(LmapView) == 0x2C0 && offsetof(LmapViewHolder, view) == 4 &&
    offsetof(LmapViewHolder, eyeFloor) == 0x10 ? 1 : -1];

#endif
