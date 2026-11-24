#include "common.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match6_ContentTransition.h"
#include <stddef.h>

#define UNK3BA2BC_FLAG_PENDING 0x10

/* The content transition's object (the mikado camera, MikadoCamera in mikado/mikadoMain.h) past its
 * ContentTransition head: the parts this step builds. */
struct Unk3ba2bcOwner : ContentTransition {
    /* 0x048 */ u8 unk048[0x54];
    /* 0x09C */ u8 sprites[0xCBC];
    /* 0xD58 */ u8 loader[0x24];
    /* 0xD7C */ void *firstResourceA;
    /* 0xD80 */ void *firstResourceB;
    /* 0xD84 */ ScriptProcess *firstPart;
    /* 0xD88 */ void *secondResourceA;
    /* 0xD8C */ void *secondResourceB;
    /* 0xD90 */ ScriptProcess *secondPart;
};
typedef char Unk3ba2bcOwnerLayoutCheck[offsetof(Unk3ba2bcOwner, sprites) == 0x9C &&
    offsetof(Unk3ba2bcOwner, secondPart) == 0xD90 ? 1 : -1];

extern "C" {

s32 stageAssetsLoaded(void);
s32 spriteTable2aIsLoaded(void *sprites);
void __ARM_common_memcpy4_6(void *a, void *b);
void mikadoLoadSceneResources(Unk3ba2bcOwner *owner);
void buttonHelpSelectByProgress(Unk3ba2bcOwner *owner);

/* Once everything is loaded, builds both parts and, if a start is pending, starts the owner. */
void FUN_003ba2bc(Unk3ba2bcOwner *owner)
{
    if (!FUN_003bbaa8(owner->loader) || !stageAssetsLoaded() ||
        !spriteTable2aIsLoaded(owner->sprites) || owner->firstResourceA == NULL ||
        owner->firstResourceB == NULL || owner->secondResourceA == NULL ||
        owner->secondResourceB == NULL) {
        return;
    }
    owner->firstPart = scrScriptProcessCreate(owner->firstResourceA, owner->firstResourceB);
    scriptProcessSetMode(owner->firstPart, 2);
    owner->secondPart = scrScriptProcessCreate(owner->secondResourceA, owner->secondResourceB);
    scriptProcessSetMode(owner->secondPart, 2);
    if (owner->flags & UNK3BA2BC_FLAG_PENDING) {
        __ARM_common_memcpy4_6(&owner->sourceMap, &owner->destination);
        mikadoLoadSceneResources(owner);
        owner->step = contentTransitionStep(2, 0);
        owner->flags &= ~UNK3BA2BC_FLAG_PENDING;
        buttonHelpSelectByProgress(owner);
    }
}

} /* extern "C" */
