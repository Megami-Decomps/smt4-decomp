#include "common.h"
#include "shard/W6_W6Match5_TextureAttachment.h"

extern "C" {

typedef struct EffObject {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s16 kind;
    /* 0x0E */ u8 unk0E[0x3E];
    /* 0x4C */ u32 userData;
} EffObject;

typedef struct EffHolder {
    /* 0x00 */ u32 owner;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2C */ EffObject *effect;
    /* 0x30 */ u32 userData;
} EffHolder;

extern EffObject *effEmitterAllocate(u32 owner);
extern int FUN_0035105c(EffObject *effect, u32 owner, u32 kind);
extern int effTlpReplace(EffObject *effect, u32 *params);
extern int objResourceReplace(EffObject *effect, u32 *params);
extern void FUN_00390570(TextureAttachment *effect, const void *image);
extern int textureAttachmentSetEffectImage(EffObject *effect, u32 *params);
extern int FUN_003b9138(EffObject *effect, u32 value);
extern int effParticleRebuildHandles(EffObject *effect, u32 *params);
extern int effParticleParamRebuildHandles3c(EffObject *effect, u32 *params);

/* Creates the holder's effect object on first use, rebuilds it for parameter set `kind` and records the kind. */
void effHolderSetParams(EffHolder *holder, u32 kind, u32 *params)
{
    if (holder->effect == NULL) {
        holder->effect = effEmitterAllocate(holder->owner);
        holder->effect->userData = holder->userData;
    }
    switch (kind) {
    case 1:
        FUN_0035105c(holder->effect, holder->owner, kind);
        FUN_00390570(reinterpret_cast<TextureAttachment *>(holder->effect), params);
        break;
    case 2:
        FUN_0035105c(holder->effect, holder->owner, kind);
        objResourceReplace(holder->effect, params);
        break;
    case 4:
        FUN_0035105c(holder->effect, holder->owner, kind);
        FUN_003b9138(holder->effect, *params);
        break;
    case 5:
        effParticleRebuildHandles(holder->effect, params);
        break;
    case 6:
        effParticleParamRebuildHandles3c(holder->effect, params);
        break;
    case 7:
        FUN_0035105c(holder->effect, holder->owner, kind);
        effTlpReplace(holder->effect, params);
        break;
    case 9:
        FUN_0035105c(holder->effect, holder->owner, kind);
        textureAttachmentSetEffectImage(holder->effect, params);
        break;
    }
    holder->effect->kind = kind;
}

} /* extern "C" */
