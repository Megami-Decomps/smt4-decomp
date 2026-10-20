#include "common.h"

extern "C" {

typedef struct Actor {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ s16 id;
} Actor;

typedef struct ActorInfo {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 alpha;    /* 0 = use the default (0xff) */
} ActorInfo;

typedef struct Globals {
    /* 0x00 */ u8 unk00[0xAC];
    /* 0xAC */ u8 enabled;
} Globals;

extern Globals g_gameState;

Actor *FUN_002c2950(void);
ActorInfo *FUN_002878a8(int id);
void FUN_002d2a38(int id, int alpha);

/* When enabled, applies the current actor's alpha (default 0xff if its info has none). */
void actorApplyAlpha(void)
{
    Actor *actor = FUN_002c2950();
    int id;
    ActorInfo *info;

    if (g_gameState.enabled == 0) {
        return;
    }
    id = actor->id;
    info = FUN_002878a8(id);
    if (info->alpha != 0) {
        FUN_002d2a38(id, info->alpha);
        return;
    }
    FUN_002d2a38(id, 0xff);
}

} /* extern "C" */
