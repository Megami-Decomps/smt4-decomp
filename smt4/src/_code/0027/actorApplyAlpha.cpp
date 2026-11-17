#include "gamedata/MapSaveBlock.h"
#include "game/GameState.h"

extern "C" {

typedef struct ActorInfo {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 alpha;    /* 0 = use the default (0xff) */
} ActorInfo;

ActorInfo *dataTable2fSub1GetRecord(int id);
void gameSetActorAlpha(int id, int alpha);

/* When enabled, applies the current actor's alpha (default 0xff if its info has none). */
void actorApplyAlpha(void)
{
    MapSaveBlock *block = gameGetMapBlock();
    int id;
    ActorInfo *info;

    if (g_gameState.statusActive == 0) {
        return;
    }
    id = block->savePoint.tableId;
    info = dataTable2fSub1GetRecord(id);
    if (info->alpha != 0) {
        gameSetActorAlpha(id, info->alpha);
        return;
    }
    gameSetActorAlpha(id, 0xff);
}

} /* extern "C" */
