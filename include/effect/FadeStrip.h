/* The fading vertex strip builders (smt4 0x3269d4 and 0x326c0c share this layout). */
#ifndef EFFECT_FADESTRIP_H
#define EFFECT_FADESTRIP_H

#include "common.h"

// One vertex of the strip: two colour pairs, 16 bytes.
struct StripColor {
    u8 first[4];   // 0x00 white, alpha 0
    u8 second[4];  // 0x04 white, alpha = fade
    u32 third;     // 0x08 copy of second
    u8 fourth[4];  // 0x0c white, alpha 0
};

// One texture-coordinate row: v positions for the four vertices of a segment step (0x20 bytes).
struct StripCoords {
    f32 v0;     // 0x00
    u32 unk04;  // 0x04
    f32 v1;     // 0x08
    u32 unk0c;  // 0x0c
    f32 v2;     // 0x10
    u32 unk14;  // 0x14
    f32 v3;     // 0x18
    u32 unk1c;  // 0x1c
};

struct StripBufferDescription {
    u8 unk00[0x38];
    StripColor *colors;   // 0x38
    StripCoords *coords;  // 0x3c
};

// Vertex-buffer owner: the mesh description is at 0x00, and its flag word at 0x58.
struct StripGeometry {
    StripBufferDescription *description;  // 0x00
    u8 unk04[0x54];
    u32 flags;                            // 0x58
};

// Parameters of the strip being built.
struct StripParameters {
    u8 unk00[0x38];
    u32 repeatCount;     // 0x38 number of copies of the base strip
    u8 unk3c[0x3c];
    f32 fadeInEnd;       // 0x78 fraction of the segments where the fade-in ends
    f32 fadeOutStart;    // 0x7c fraction where the fade-out starts
    u8 unk80[0xc];
    s32 segments;        // 0x8c
    f32 spacing;         // 0x90
};

struct StripOwnerView {
    u8 unk00[4];
    StripGeometry *geometry;  // 0x04
};

typedef char StripLayoutCheck[sizeof(StripColor) == 0x10 && sizeof(StripCoords) == 0x20 &&
                                      sizeof(StripBufferDescription) == 0x40 &&
                                      sizeof(StripGeometry) == 0x5c && sizeof(StripParameters) == 0x94 &&
                                      sizeof(StripOwnerView) == 8
                                  ? 1
                                  : -1];

#endif
