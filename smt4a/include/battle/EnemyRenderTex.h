#ifndef BATTLE_ENEMYRENDERTEX_H
#define BATTLE_ENEMYRENDERTEX_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include "shard/W9_W9Match8_WorkRecords.h"

/* The words of one texture unit's command block: the unit's size, sampler, LOD, address and format
 * registers, then one write to register 0x23D. */
enum { ENEMY_RENDER_TEX_COMMAND_WORDS = 12 };

/* An enemy sprite's render texture in Apocalypse: IV's record (EffectBoundsSource, with its texture binding)
 * with a command block for each of the three texture units between the texture object and the margins. */
struct EnemyRenderTex {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ EffectBoundsImageBinding *binding;
    /* 0x08 */ TextureUploadResourcePrefixIV *resource;
    /* 0x0C */ TextureObject *object;
    /* 0x10 */ u32 *unitCommands[3];
    /* 0x1C */ f32 marginX;
    /* 0x20 */ f32 marginY;
    /* 0x24 */ s16 positionX;
    /* 0x26 */ s16 positionY;
    /* 0x28 */ u8 useCustomSize;
    /* 0x29 */ u8 useAlternateMode;
};
typedef char EnemyRenderTexLayoutCheck[
    offsetof(EnemyRenderTex, unitCommands) == 0x10 && offsetof(EnemyRenderTex, marginX) == 0x1C &&
    offsetof(EnemyRenderTex, positionX) == 0x24 && offsetof(EnemyRenderTex, useAlternateMode) == 0x29 &&
    sizeof(EnemyRenderTex) == 0x2C ? 1 : -1];

/* The effect-target record (tableFileFindByKeyPair) whose kind and alternate mode the set-up reads. */
struct EnemyRenderTexConfiguration {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 kind;
    /* 0x06 */ u8 unk06[0x92];
    /* 0x98 */ u8 alternateMode;
};
typedef char EnemyRenderTexConfigurationLayoutCheck[
    offsetof(EnemyRenderTexConfiguration, kind) == 4 &&
    offsetof(EnemyRenderTexConfiguration, alternateMode) == 0x98 ? 1 : -1];

extern "C" void enemyRenderTexSetup(EnemyRenderTex *target, u32 parameter, u32 flags,
                             const EnemyRenderTexConfiguration *configuration);

#endif
