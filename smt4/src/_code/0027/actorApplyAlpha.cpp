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

Actor *gameGetMapBlock(void);
ActorInfo *dataTable2fSub1GetRecord(int id);
void gameSetActorAlpha(int id, int alpha);

/* When enabled, applies the current actor's alpha (default 0xff if its info has none). */
void actorApplyAlpha(void)
{
    Actor *actor = gameGetMapBlock();
    int id;
    ActorInfo *info;

    if (g_gameState.enabled == 0) {
        return;
    }
    id = actor->id;
    info = dataTable2fSub1GetRecord(id);
    if (info->alpha != 0) {
        gameSetActorAlpha(id, info->alpha);
        return;
    }
    gameSetActorAlpha(id, 0xff);
}

} /* extern "C" */
