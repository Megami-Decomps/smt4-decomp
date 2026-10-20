/* A scene object (state handler table as C++ pointers to member functions) with an embedded
 * texture-table widget at +0x9C that cross-fades between two images. */
#ifndef SHARD_S3SCENEWIDGET_H
#define SHARD_S3SCENEWIDGET_H

#include "common.h"

#define SCENE_TEXTURE_TABLE 42     /* texture table node the widget's images live in */
#define SCENE_TEXTURE_COUNT 64

/* The widget's sprite: `ready` is set once its image is up. */
typedef struct SceneSprite {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 ready;
} SceneSprite;

typedef struct SceneImageEntry {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ u16 lastKey;
} SceneImageEntry;

typedef struct SceneWidget {
    /* 0x000 */ u8 unk000[0x530];
    /* 0x530 */ SceneImageEntry *entries[4];
    /* 0x540 */ u8 unk540[0xF1];
    /* 0x631 */ u8 animate;               /* advance `frame` every update */
    /* 0x632 */ u8 unk632[0x59A];
    /* 0xBCC */ SceneSprite sprite;
    /* 0xC57 */ u8 unkC57[5];
    /* 0xC5C */ s32 frame;                /* 0..15 */
    /* 0xC60 */ s32 shownTex;
    /* 0xC64 */ s32 shownKey;
    /* 0xC68 */ s32 nextTex;
    /* 0xC6C */ s32 nextKey;
    /* 0xC70 */ s32 queuedTex;
    /* 0xC74 */ s32 queuedKey;
    /* 0xC78 */ u8 loaded[SCENE_TEXTURE_COUNT]; /* textures of the table this widget holds */
} SceneWidget;

struct SceneObj;
typedef void (SceneObj::*SceneHandler)(void);

struct SceneObj {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 handlerIndex;
    /* 0x2C */ u8 unk2C[0x70];
    /* 0x9C */ SceneWidget widget;
    /* 0xD54 */ u8 unkD54[0x6C];
    /* 0xDC0 */ SceneHandler handlers[4];
};

#endif
