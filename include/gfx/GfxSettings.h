/* The graphics settings block (smt4 0x464af0, smt4a 0x5b3bf4; the same layout in both games): the
 * model system's mode bytes and flag word, the model-slot node bookkeeping, the screen fade and
 * shadow parameters, the loaded graphics file and, from 0x84, the per-slot (0/1) model state. The
 * symbol table labels parts of the per-slot state separately (g_asdModelSlotFlags at 0x84,
 * g_asdModelTransformBuilder at 0x94, the scene group roots at 0x9C-0xA8, g_asdModelSlotArray0-3 at
 * 0xAC-0xC4, smt4a's g_effAsdLightHandle at 0x8C), but the AsdModel functions reach all of it
 * through the one g_gfxSettings base, so it is one object here. */
#ifndef GFX_GFXSETTINGS_H
#define GFX_GFXSETTINGS_H

#include "common.h"
#include <stddef.h>

struct ModelOwner;
class GfxShadowModel;
struct ShadowModelFile;

typedef struct GfxSettings {
    /* 0x00 */ u8 lightingEnabled;
    /* 0x01 */ u8 initialized;      /* the model system is up (asdGxIsReady) */
    /* 0x02 */ s8 ready;            /* set once a fade has been queued */
    /* 0x03 */ u8 unk03;
    /* 0x04 */ s8 fadeMode;
    /* 0x05 */ s8 flat;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 flags;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 pendingPass;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 pending;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 node0;           /* node attached for slot 0 */
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 node1;           /* node attached for slot 1 */
    /* 0x30 */ u32 pendingNode[2];  /* node waiting to be attached */
    /* 0x38 */ u32 loadedModelCount;
    /* 0x3C */ s32 modelCount;
    /* 0x40 */ s32 sharedModels;    /* also the fades still waiting */
    /* 0x44 */ u32 auxiliaryNode;
    /* 0x48 */ u8 unk48[4];
    /* 0x4C */ f32 fadeNear;
    /* 0x50 */ f32 fadeFar;
    /* 0x54 */ GfxShadowModel *shadowModel;       /* the scene object built from ShadowModel.bcmdl */
    /* 0x58 */ u32 fadeColor;       /* the colour, or the model the fade applies to */
    /* 0x5C */ f32 fadeAmount;
    /* 0x60 */ f32 shadowOff;
    /* 0x64 */ f32 shadowOn;
    /* 0x68 */ u8 unk68[4];
    /* 0x6C */ ShadowModelFile *shadowModelFile;  /* ShadowModel.bcmdl as loaded */
    /* 0x70 */ u8 unk70[0xC];
    /* 0x7C */ u32 resGraphicsFile;  /* the ResGraphicsFile set up in gfxSetupResGraphicsFile */
    /* 0x80 */ u32 modelData;       /* handle of the loaded graphics model */
    /* 0x84 */ u32 slotFlags[2];
    /* 0x8C */ void *attachInfo[2]; /* the slot's light (smt4a g_effAsdLightHandle) */
    /* 0x94 */ void *transformBuilder[2];
    /* 0x9C */ u32 sceneGroupRoot[4];
    /* 0xAC */ u32 sceneNode[2];    /* g_asdModelSlotArray0 */
    /* 0xB4 */ u32 slotArray1[2];
    /* 0xBC */ u32 slotArray2[2];
    /* 0xC4 */ ModelOwner *owner[2];
    /* 0xCC */ u32 slotState[2];    /* cleared when a slot is attached */
} GfxSettings;
typedef char GfxSettingsOffsets[offsetof(GfxSettings, flags) == 0x08 &&
    offsetof(GfxSettings, node0) == 0x20 && offsetof(GfxSettings, loadedModelCount) == 0x38 &&
    offsetof(GfxSettings, sharedModels) == 0x40 && offsetof(GfxSettings, fadeNear) == 0x4C &&
    offsetof(GfxSettings, shadowModel) == 0x54 &&
    offsetof(GfxSettings, shadowOff) == 0x60 && offsetof(GfxSettings, shadowModelFile) == 0x6C && offsetof(GfxSettings, modelData) == 0x80 &&
    offsetof(GfxSettings, slotFlags) == 0x84 && offsetof(GfxSettings, transformBuilder) == 0x94 &&
    offsetof(GfxSettings, sceneNode) == 0xAC && offsetof(GfxSettings, owner) == 0xC4 &&
    sizeof(GfxSettings) == 0xD4 ? 1 : -1];

extern "C" GfxSettings g_gfxSettings;

#endif
