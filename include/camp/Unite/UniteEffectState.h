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

/* Apocalypse's render target: 0xC bytes longer than IV's, the frame counters at its end. */
struct UniteRenderTargetA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ LogoObject *texture;
    /* 0x08 */ u8 unk08[0x44];
    /* 0x4C */ s32 loadingFrame;
    /* 0x50 */ s32 resultFrame;
};

/* Apocalypse's fusion-result work (0x9F0 bytes as uniteStartEffectProcesses allocates it). */
struct UniteEffectWorkA {
    /* 0x000 */ u32 process;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 phase;
    /* 0x00C */ u16 resultDevil;
    /* 0x00E */ s16 materialDevils[4];
    /* 0x016 */ u16 materialFlags[4];
    /* 0x01E */ u16 materialCount;
    /* 0x020 */ u8 sacrifice; /* selects the fusion-accident cutscene and the _ac model variant */
    /* 0x021 */ u8 unk021[7];
    /* 0x028 */ LogoObject *devilTextures[4];
    /* 0x038 */ UniteRenderTargetA renderTarget;
    /* 0x08C */ u8 unk08C[0x2A8];
    /* 0x334 */ void *scriptFile;
    /* 0x338 */ ScriptProcess *script;
    /* 0x33C */ void *messageFile;
    /* 0x340 */ UiResourceParameters resources;
    /* 0x360 */ UiSpriteState sprites[10]; /* first six slide in; last four are material portraits */
    /* 0x8D8 */ UiSpriteState panel;
    /* 0x964 */ UiSpriteState cursor;
};
typedef char UniteEffectWorkALayoutCheck[offsetof(UniteEffectWorkA, renderTarget.loadingFrame) == 0x84 &&
    offsetof(UniteEffectWorkA, scriptFile) == 0x334 && offsetof(UniteEffectWorkA, sprites) == 0x360 &&
    offsetof(UniteEffectWorkA, panel) == 0x8D8 && offsetof(UniteEffectWorkA, cursor) == 0x964 &&
    sizeof(UniteEffectWorkA) == 0x9F0 ? 1 : -1];

/* When a material's portrait is shown during the model animation (state 3): the frames, counted by
 * UniteEffectWork::phase, at which its band has opened and at which it starts to close. */
struct UniteMaterialCue {
    /* 0x00 */ u16 start;
    /* 0x02 */ u16 end;
};

extern "C" {
extern const UniteMaterialCue g_uniteMaterialCues2[4]; /* two materials, then two unused entries */
extern const UniteMaterialCue g_uniteMaterialCues3[4]; /* three materials, then one unused entry */
extern const UniteMaterialCue g_uniteMaterialCues4[4]; /* four materials */
extern UniteEffectWork *g_screenStateWork;
s32 uniteEffectUpdate(u32 process);
void titleLogoDraw(UniteRenderTarget *target);
void uniteEffectCollectMaterialPairs(const char *pattern);
void uniteEffectApplyScrollToModel(UniteRenderTarget *target);
}

#endif
