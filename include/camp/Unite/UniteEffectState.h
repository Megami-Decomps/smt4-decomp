/* camp/Unite/UniteEffect.cpp: Shin Megami Tensei IV's fusion-result sequence. */
#ifndef CAMP_UNITE_UNITEEFFECTSTATE_H
#define CAMP_UNITE_UNITEEFFECTSTATE_H

#include "common.h"
#include "gfx/MaterialPairScan.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>

struct AnimationTracks;
struct AsdMdlObject;
struct AsdMotionInstance;

// Camera loaded from a BCCAM resource, distinct from the render context's view camera.
struct CameraObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AsdMotionInstance *motion;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ void *resource;
};
struct LogoObject;
struct ScreenHolder;
struct ScriptProcess;
struct Obj4207c0Resource;

struct UniteRenderTarget {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ LogoObject *texture;
    /* 0x08 */ ScreenHolder *holder;
    /* 0x0C */ u32 textureHandle;
    /* 0x10 */ u8 unk10[0x10];
    /* 0x20 */ s32 materialWidths[4];
    /* 0x30 */ s32 materialOffsets[4];
    /* 0x40 */ s32 loadingFrame;
    /* 0x44 */ s32 resultFrame;
};

struct UniteEffectWork {
    /* 0x000 */ u32 process;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 phase;
    /* 0x00C */ u16 resultDevil;
    /* 0x00E */ s16 materialDevils[4];
    /* 0x016 */ u16 materialFlags[4];
    /* 0x01E */ u16 materialCount;
    /* 0x020 */ u8 sacrifice; /* selects the sacrifice cutscene and the _ac model variant */
    /* 0x021 */ u8 unk021[3];
    /* 0x024 */ s32 sacrificeSound;
    /* 0x028 */ LogoObject *devilTextures[4];
    /* 0x038 */ UniteRenderTarget renderTarget;
    /* 0x080 */ const AnimationTracks *resultTexture;
    /* 0x084 */ AsdMdlObject *model;
    /* 0x088 */ AsdMdlObject *resultModel;
    /* 0x08C */ CameraObject *camera;
    /* 0x090 */ CameraObject *resultCamera;
    /* 0x094 */ DamageMaterialSets materialSets;
    /* 0x29C */ void *scriptFile;
    /* 0x2A0 */ ScriptProcess *script;
    /* 0x2A4 */ void *messageFile;
    /* 0x2A8 */ UiResourceParameters resources;
    /* 0x2C8 */ UiSpriteState sprites[10]; /* first six slide in; last four are material portraits */
    /* 0x840 */ UiSpriteState panel;
    /* 0x8CC */ UiSpriteState cursor;
};
typedef char UniteEffectWorkLayoutCheck[offsetof(UniteEffectWork, renderTarget.materialWidths) == 0x58 &&
    offsetof(UniteEffectWork, renderTarget.resultFrame) == 0x7C && offsetof(UniteEffectWork, model) == 0x84 &&
    offsetof(UniteEffectWork, materialSets) == 0x94 && offsetof(UniteEffectWork, scriptFile) == 0x29C &&
    offsetof(UniteEffectWork, sprites) == 0x2C8 && offsetof(UniteEffectWork, cursor) == 0x8CC &&
    sizeof(UniteEffectWork) == 0x958 ? 1 : -1];

extern "C" {
extern UniteEffectWork *g_screenStateWork;
s32 uniteEffectUpdate(u32 process);
void FUN_00258618(UniteRenderTarget *target);
void FUN_00258408(const char *pattern);
void FUN_00258170(UniteRenderTarget *target);
}

#endif
