/* NON_MATCHING: ternary now gives retail's predicated mvneq; remaining difference is one compiler nop hint before the final scrSetResult call (and the pool offset it shifts) */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Per-entity detail record; bit 9 of the halfword at 0x16 marks an eligible entity. */
typedef struct {
    u8 unk00[0x16];
    u16 flags;          /* 0x16 */
} EntityDetail;

/* 0x288-byte entity record. */
typedef struct {
    u32 flags;          /* 0x000: bit 0 active, bit 4 enabled, bit 6 hidden */
    u8 unk04[4];
    s16 id;             /* 0x008 */
    u8 unk0a[0x64];
    s16 group;          /* 0x06e */
    u8 unk70[0x5e];
    u16 type;           /* 0x0ce */
    u8 unkd0[0xfc];
    u16 level;          /* 0x1cc */
    u8 unk1ce[0xb6];
    EntityDetail *detail; /* 0x284 */
} Entity;

/* Game state with an entity array pointer at 0x1fc0 and the player's entity index at 0x225a. */
typedef struct {
    u8 unk00[0x1fc0];
    Entity *entities;   /* 0x1fc0 */
    u8 unk1fc4[0x296];
    s16 playerIndex;    /* 0x225a */
} GameState;

#define ENTITY_COUNT 109

GameState *btlGetMainState(void);
Entity *btlMainFindEntryByListedId(GameState *state, int index);
int partyHasStoredDemon(u16 type);
int randNextInRange(u32 range);

/* Collects the eligible other-group entities no stronger than the player's and reports the id of a random one (-1 if none). */
u32 FUN_0031f400(void)
{
    Entity *candidates[ENTITY_COUNT];
    Entity *player;
    u8 count;
    int i;
    int id;

    player = btlMainFindEntryByListedId(btlGetMainState(), btlGetMainState()->playerIndex);
    reinterpret_cast<int>(memClear(reinterpret_cast<void*>(candidates), sizeof(candidates)));
    count = 0;
    i = 0;
    do {
        Entity *entity = &btlGetMainState()->entities[i];
        u32 flags = entity->flags;

        if ((flags & 1) != 0 && (flags & 0x40) == 0 && (flags & 0x10) != 0 && entity->group != player->group
            && entity->level <= player->level && partyHasStoredDemon(entity->type) == 0 && entity->detail != NULL
            && (entity->detail->flags & 0x200) != 0 && player->type != entity->type) {
            candidates[count] = entity;
            count++;
        }
        i++;
    } while (i < ENTITY_COUNT);
    id = count == 0 ? -1 : candidates[randNextInRange((count - 1) & 0xffff)]->id;
    scrSetResult(id);
    return 1;
}

} /* extern "C" */
