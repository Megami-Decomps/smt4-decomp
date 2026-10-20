#include "common.h"

extern "C" {

/* 0x288-byte entity record. */
typedef struct {
    u32 flags;          /* 0x00: bit 0 active, bit 4 enabled, bit 6 hidden */
    u8 unk04[0x8a];
    s16 primary;        /* 0x8e */
    u8 unk90[2];
    s16 secondary;      /* 0x92 */
    u8 unk94[0x3a];
    u16 id;             /* 0xce */
    u8 unkd0[0x1b8];
} Entity;

/* Game state with an entity array pointer at 0x1fc0. */
typedef struct {
    u8 unk00[0x1fc0];
    Entity *entities;   /* 0x1fc0 */
} GameState;

#define ENTITY_COUNT 109

GameState *btlGetMainState(void);
int scrSetResult(int found);
u32 scrGetArg(u32 index);

/* Reports (via scrSetResult) whether an active, visible entity with the id from entry 0 has a positive counter. */
u32 FUN_00323f74(void)
{
    u32 id = scrGetArg(0);
    int i;

    i = 0;
    do {
        Entity *entity = &btlGetMainState()->entities[i];
        u32 flags = entity->flags;

        if ((flags & 0x10) != 0 && (flags & 1) != 0 && (flags & 0x40) == 0 && entity->id == id) {
            if (entity->primary > 0 || entity->secondary > 0) {
                scrSetResult(1);
                return 1;
            }
        }
        i++;
    } while (i < ENTITY_COUNT);
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
