/* UI sprite state (0x8C bytes): one texture-table image placed at a 20.12 fixed-point position with an
   opacity and a uniform scale, animated by four tracks (position, opacity, scale, image frames) that a list
   of animation commands drives. Every work area that shows a menu sprite embeds one; the functions that
   play it are declared per game in ui/UiSpriteApi.h. */
#ifndef UI_UISPRITESTATE_H
#define UI_UISPRITESTATE_H

#include "common.h"
#include <stddef.h>

/* Position key (0xC bytes): moves the sprite from (startX, startY) to (endX, endY) in pixels over `duration`
   frames (from the end to the start when the track plays reversed). */
struct UiSpritePositionKey {
    /* 0x00 */ s16 startX;
    /* 0x02 */ s16 startY;
    /* 0x04 */ s16 endX;
    /* 0x06 */ s16 endY;
    /* 0x08 */ u16 duration;
    /* 0x0A */ u8 loop;           /* when it ends, snap back to the first point and play it again */
    /* 0x0B */ u8 unk0B;
};

/* Opacity or scale key (0xC bytes): a value interpolated from `first` to `last` over `duration` frames. */
struct UiSpriteScalarKey {
    /* 0x00 */ f32 first;
    /* 0x04 */ f32 last;
    /* 0x08 */ u16 duration;
    /* 0x0A */ u8 loop;
    /* 0x0B */ u8 unk0B;
};

/* Image frame (4 bytes): shows `image` for `duration` frames. An image of -1 ends a frame sequence (the
   sequences of a resource are numbered in order), -2 restarts the current one. */
struct UiSpriteFrameKey {
    /* 0x00 */ s16 image;
    /* 0x02 */ u16 duration;
};

/* Animation command (0x1C bytes): the key each track starts (negative keys leave the track alone). In a
   command list each track steps through the commands on its own: a key of -1 ends the list (a -1 position
   key also ends a command group), -2 restarts it and -3 stops the track. */
struct SpriteAnimationCommand {
    /* 0x00 */ s32 positionKey;
    /* 0x04 */ s8 positionReverse;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 frameSequence;
    /* 0x0C */ s32 alphaKey;
    /* 0x10 */ s8 alphaReverse;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ s32 scaleKey;
    /* 0x18 */ s8 scaleReverse;
    /* 0x19 */ u8 unk19[3];
};

/* A sprite's animation resource (0x20 bytes, filled by paramsInit): the byte size and the address of each
   key table and of the command list. */
struct UiResourceParameters {
    /* 0x00 */ u16 positionKeyBytes;
    /* 0x02 */ u16 alphaKeyBytes;
    /* 0x04 */ u16 scaleKeyBytes;
    /* 0x06 */ u16 frameKeyBytes;
    /* 0x08 */ u16 commandBytes;
    /* 0x0A */ u16 unk0A;
    /* 0x0C */ UiSpritePositionKey *positionKeys;
    /* 0x10 */ UiSpriteScalarKey *alphaKeys;
    /* 0x14 */ UiSpriteScalarKey *scaleKeys;
    /* 0x18 */ UiSpriteFrameKey *frameKeys;
    /* 0x1C */ SpriteAnimationCommand *commands;
};

struct UiSpriteState {
    /* 0x00 */ u32 textureTable;   /* the texture table `image` is drawn from */
    /* 0x04 */ s32 image;          /* -1: none */
    /* 0x08 */ s32 secondaryImage; /* an image from another source: setting either image clears the other to -1 */
    /* 0x0C */ s32 x;              /* 20.12 fixed point */
    /* 0x10 */ s32 y;
    /* 0x14 */ s32 z;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ f32 alpha;
    /* 0x24 */ f32 scale[3];       /* the scale track sets all three */
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ u16 id;
    /* 0x3A */ u16 layer;
    /* 0x3C */ u8 active;
    /* 0x3D */ u8 unk3D[0xB];
    /* 0x48 */ UiResourceParameters *resources;
    /* 0x4C */ UiSpritePositionKey *positionKeys;
    /* 0x50 */ s16 positionKey;
    /* 0x52 */ u16 positionFrame;  /* stepped as a u16; read through (s16) where retail compares it signed */
    /* 0x54 */ s8 positionReverse;
    /* 0x55 */ u8 unk55[3];
    /* 0x58 */ UiSpriteScalarKey *alphaKeys;
    /* 0x5C */ s16 alphaKey;
    /* 0x5E */ s16 alphaFrame;
    /* 0x60 */ s8 alphaReverse;
    /* 0x61 */ u8 unk61[3];
    /* 0x64 */ UiSpriteScalarKey *scaleKeys;
    /* 0x68 */ s16 scaleKey;
    /* 0x6A */ u16 scaleFrame;     /* likewise */
    /* 0x6C */ s8 scaleReverse;
    /* 0x6D */ u8 unk6D[3];
    /* 0x70 */ UiSpriteFrameKey *frameKeys;   /* the current frame sequence */
    /* 0x74 */ s16 frameIndex;
    /* 0x76 */ s16 frameElapsed;
    /* 0x78 */ const SpriteAnimationCommand *commands;  /* the running command list */
    /* 0x7C */ s16 positionStep;   /* each track's current command */
    /* 0x7E */ s16 alphaStep;
    /* 0x80 */ s16 scaleStep;
    /* 0x82 */ s16 frameStep;
    /* 0x84 */ u8 commandsRunning; /* a finished key continues with the track's next command */
    /* 0x85 */ s8 updated;         /* set by every advance */
    /* 0x86 */ u8 positionDone;
    /* 0x87 */ u8 alphaDone;
    /* 0x88 */ u8 scaleDone;
    /* 0x89 */ u8 frameDone;
    /* 0x8A */ s8 finished;        /* all four tracks are done */
    /* 0x8B */ u8 unk8B;
};

typedef char UiSpriteKeysLayoutCheck[
    sizeof(UiSpritePositionKey) == 0xC && sizeof(UiSpriteScalarKey) == 0xC && sizeof(UiSpriteFrameKey) == 4 &&
    sizeof(SpriteAnimationCommand) == 0x1C && offsetof(SpriteAnimationCommand, scaleKey) == 0x14 &&
    sizeof(UiResourceParameters) == 0x20 && offsetof(UiResourceParameters, frameKeyBytes) == 6 &&
    offsetof(UiResourceParameters, positionKeys) == 0xC && offsetof(UiResourceParameters, commands) == 0x1C ? 1 : -1];
typedef char UiSpriteStateLayoutCheck[
    offsetof(UiSpriteState, alpha) == 0x20 && offsetof(UiSpriteState, layer) == 0x3A &&
    offsetof(UiSpriteState, resources) == 0x48 && offsetof(UiSpriteState, positionFrame) == 0x52 &&
    offsetof(UiSpriteState, alphaKeys) == 0x58 && offsetof(UiSpriteState, scaleKeys) == 0x64 &&
    offsetof(UiSpriteState, frameKeys) == 0x70 && offsetof(UiSpriteState, commands) == 0x78 &&
    offsetof(UiSpriteState, frameStep) == 0x82 && offsetof(UiSpriteState, updated) == 0x85 &&
    offsetof(UiSpriteState, positionDone) == 0x86 && offsetof(UiSpriteState, finished) == 0x8A &&
    sizeof(UiSpriteState) == 0x8C ? 1 : -1];

#endif
