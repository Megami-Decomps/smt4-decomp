#include "common.h"

extern "C" {

struct BustupAnim {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
};

/* The bust-up cut animation state: its animation at 0x5E4 and a vertical offset at 0x640. */
struct BustupCutAnim {
    /* 0x000 */ u8 unk000[0x5E4];
    /* 0x5E4 */ BustupAnim *anim;
    /* 0x5E8 */ u8 unk5E8[0x58];
    /* 0x640 */ f32 offset;
};

/* A position record with a height at 8. */
struct Placement {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ f32 y;
};

extern BustupCutAnim *g_bustupCutAnim;
extern u32 DAT_0043e048[];
struct ModelBoneAttachmentRoot;
s32 modelHasLoadedAttachment(const ModelBoneAttachmentRoot *object);
u32 FUN_002adde8(u32 handle, u32 mode, Placement *placement);

/* Applies the bust-up animation `mode` to a placement (adding the cut offset in mode 0); 1 if unavailable. */
u32 FUN_002a4e18(Placement *placement, s32 mode)
{
    BustupCutAnim *cut = g_bustupCutAnim;
    u32 result;

    if (cut == NULL) {
        return 0;
    }
    if (cut->anim == NULL || modelHasLoadedAttachment(reinterpret_cast<const ModelBoneAttachmentRoot *>(cut->anim)) == 0) {
        return 1;
    }
    result = FUN_002adde8(cut->anim->handle, DAT_0043e048[mode], placement);
    if (mode == 0) {
        placement->y += cut->offset;
    }
    return result;
}

} /* extern "C" */
