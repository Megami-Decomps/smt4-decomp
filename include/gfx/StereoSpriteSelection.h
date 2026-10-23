#ifndef GFX_STEREOSPRITESELECTION_H
#define GFX_STEREOSPRITESELECTION_H
#include "common.h"
#include <stddef.h>

struct StereoSpriteChoice {
    /* 0x00 */ u16 group;
    /* 0x02 */ u16 id;
    /* 0x04 */ u8 unk04[6];
};
struct StereoSpriteChoices {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ StereoSpriteChoice choices[2];
};
struct StereoSpriteOwner {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ StereoSpriteChoices* resource;
};
struct StereoSpriteSelection {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 index;
};
typedef char StereoSpriteSelectionOffsetsCheck[sizeof(StereoSpriteChoice) == 10 &&
    offsetof(StereoSpriteChoices, choices) == 0x36 &&
    offsetof(StereoSpriteOwner, resource) == 0x84 ? 1 : -1];
#endif
