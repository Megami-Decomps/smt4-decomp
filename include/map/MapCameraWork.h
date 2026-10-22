#ifndef MAP_MAPCAMERAWORK_H
#define MAP_MAPCAMERAWORK_H

#include "map/mapDepart.h"
#include <stddef.h>

struct MapCameraScalarTrack {
    u32 state;
    f32 value;
    u8 unk08[0x38];
};

/* Recovered prefix of the local-map camera work area. */
struct MapCameraWork {
    /* 0x000 */ u32 states[3];
    /* 0x00C */ u8 unk00C[8];
    /* 0x014 */ u32 active;
    /* 0x018 */ u8 unk018[4];
    /* 0x01C */ MapVector up;
    /* 0x028 */ u8 unk028[0xC];
    /* 0x034 */ MapVector eye;
    /* 0x040 */ MapVector targetPosition;
    /* 0x04C */ MapVector eyeSnapshot;
    /* 0x058 */ MapVector targetSnapshot;
    /* 0x064 */ f32 parameters[7];
    /* 0x080 */ u8 unk080[0x18];
    /* 0x098 */ f32 scale;
    /* 0x09C */ f32 clipDistance;
    /* 0x0A0 */ f32 timer;
    /* 0x0A4 */ u8 configured;
    /* 0x0A5 */ u8 unk0A5[3];
    /* 0x0A8 */ u32 counter;
    /* 0x0AC */ u32 updateFlags;
    /* 0x0B0 */ u8 enabled;
    /* 0x0B1 */ u8 pending;
    /* 0x0B2 */ u16 duration;
    /* 0x0B4 */ u16 elapsed;
    /* 0x0B6 */ u8 unk0B6[2];
    /* 0x0B8 */ f32 transition[3];
    /* 0x0C4 */ MapCameraScalarTrack tracks[5];
    /* 0x204 */ u32 unk204;
    /* 0x208 */ s32 target;
    /* 0x20C */ f32 values[4];
    /* 0x21C */ u8 tracking;
    /* 0x21D */ u8 unk21D[0x77];
    /* 0x294 */ f32 offset[3];
    /* 0x2A0 */ u32 counters[2];
    /* 0x2A8 */ u16 range[4];
    /* 0x2B0 */ u8 moving;
    /* 0x2B1 */ u8 unk2B1[0xB];
    /* 0x2BC */ f32 weight;
};

struct MapCameraGlobals {
    u32 job;
    MapCameraWork *work;
};

typedef char MapCameraWorkLayoutCheck[sizeof(MapCameraScalarTrack) == 0x40 &&
    offsetof(MapCameraScalarTrack, value) == 4 && sizeof(MapCameraWork) == 0x2C0 &&
    offsetof(MapCameraScalarTrack, state) == 0 &&
    offsetof(MapCameraWork, states) == 0 && offsetof(MapCameraWork, active) == 0x14 &&
    offsetof(MapCameraWork, parameters) == 0x64 && offsetof(MapCameraWork, scale) == 0x98 &&
    offsetof(MapCameraWork, updateFlags) == 0xAC && offsetof(MapCameraWork, enabled) == 0xB0 &&
    offsetof(MapCameraWork, pending) == 0xB1 && offsetof(MapCameraWork, duration) == 0xB2 &&
    offsetof(MapCameraWork, elapsed) == 0xB4 && offsetof(MapCameraWork, transition) == 0xB8 &&
    offsetof(MapCameraWork, up) == 0x1C && offsetof(MapCameraWork, eye) == 0x34 &&
    offsetof(MapCameraWork, targetPosition) == 0x40 &&
    offsetof(MapCameraWork, eyeSnapshot) == 0x4C &&
    offsetof(MapCameraWork, targetSnapshot) == 0x58 &&
    offsetof(MapCameraWork, clipDistance) == 0x9C &&
    offsetof(MapCameraWork, timer) == 0xA0 && offsetof(MapCameraWork, configured) == 0xA4 &&
    offsetof(MapCameraWork, counter) == 0xA8 && offsetof(MapCameraWork, tracks) == 0xC4 &&
    offsetof(MapCameraWork, target) == 0x208 && offsetof(MapCameraWork, values) == 0x20C &&
    offsetof(MapCameraWork, tracking) == 0x21C && offsetof(MapCameraWork, offset) == 0x294 &&
    offsetof(MapCameraWork, counters) == 0x2A0 && offsetof(MapCameraWork, range) == 0x2A8 &&
    offsetof(MapCameraWork, moving) == 0x2B0 && offsetof(MapCameraWork, weight) == 0x2BC &&
    sizeof(MapCameraGlobals) == 8 && offsetof(MapCameraGlobals, work) == 4 ? 1 : -1];

#endif
