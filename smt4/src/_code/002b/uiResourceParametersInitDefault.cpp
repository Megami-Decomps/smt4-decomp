/* NON_MATCHING: the default packets (unit-local arrays) now match; only the first clear differs: retail stores it through r0 before copying the owner to r4. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "gfx/DrawParameterOwner.h"
extern "C" {
void drawParameterBlockClear(UiResourceParameters*);

/* The default sprite resource packets, in retail's order (0x78, 0x48, 0x54 and 0x310 bytes). */
static const u32 sDefaultPacketA[30] = {
    0xff38, 0xa, 6, 0xa, 0, 2, 0x140, 0xffec,
    6, 0, 0xfec0, 4, 0xfec0, 0, 8, 0,
    2, 2, 2, 0, 3, 0, 0x20000, 8,
    0, 0xff06, 6, 0xff06, 0, 6,
};
static const u32 sDefaultPacketB[18] = {
    0, 0x3f800000, 8, 0, 0x3f800000, 4, 0x3f800000, 0,
    4, 0x3f800000, 0x3dcccccd, 0x10014, 0, 0x3f800000, 8, 0x3f800000,
    0, 3,
};
static const u32 sDefaultPacketC[21] = {
    0, 0x3f800000, 8, 0, 0x3f800000, 2, 0x3f8ccccd, 0x3f800000,
    4, 0, 0x3fa66666, 0x10014, 0, 0x3f8ccccd, 8, 0x3f8ccccd,
    0x3f800000, 2, 0, 0x3f800000, 4,
};
static const u32 sDefaultPacketD[196] = {
    0xfffffffd, 0, 0xfffffffd, 0, 0, 0, 0, 0xffffffff,
    0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0, 0,
    0xfffffffd, 0, 0, 0xfffffffd, 0, 1, 0, 0xffffffff,
    0xffffffff, 0, 0xffffffff, 0, 0xffffffff, 0, 0, 0,
    0, 0, 0, 0xfffffffd, 0, 0xfffffffd, 2, 0,
    0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff,
    0, 0xfffffffd, 0, 0xfffffffd, 1, 0, 2, 0,
    0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 7,
    0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0, 7, 1,
    0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffe, 0, 0xfffffffd,
    0xfffffffd, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 0xfffffffd, 0, 0xfffffffd, 0, 0,
    4, 0, 0xfffffffd, 0, 0xfffffffd, 0xfffffffd, 0, 5,
    0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
    2, 0, 0xfffffffd, 0, 0, 0xfffffffd, 0, 0xffffffff,
    0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 3, 0,
    0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xffffffff, 0, 0,
    0, 0, 0, 0, 4, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 0xffffffff, 0, 0, 0, 0,
    0, 0, 5, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd,
    0, 6, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0,
    0xfffffffe, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xffffffff,
    0, 0, 0, 0, 0, 0, 0xfffffffd, 0,
    0xfffffffd, 4, 0, 6, 0, 0xffffffff, 0, 0,
    0, 0, 0, 0,
};

// Enables a cleared drawing-parameter owner and installs the four default data blocks.
void uiResourceParametersInitDefault(DrawParameterOwner* owner)
{
    owner->words[0] = 0;
    owner->words[1] = 0;
    owner->words[2] = 0;
    owner->words[3] = 0;
    owner->words[4] = 0;
    owner->enabled = 1;
    owner->dirty = 1;
    owner->unk41C = 0;
    owner->unk418 = 0;
    drawParameterBlockClear(&owner->parameters);
    paramsInit(&owner->parameters, sDefaultPacketA, sizeof(sDefaultPacketA), sDefaultPacketB, sizeof(sDefaultPacketB),
               sDefaultPacketC, sizeof(sDefaultPacketC), NULL, 0, sDefaultPacketD, sizeof(sDefaultPacketD));
}
}
