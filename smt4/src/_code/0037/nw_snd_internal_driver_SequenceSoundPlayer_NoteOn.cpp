#include "common.h"

extern "C" {

struct Handler;
typedef struct HandlerVtbl {
    /* 0x0 */ void *unk0[2];
    /* 0x8 */ void (*noteOn)(struct Handler *handler, void *player, u32 a, u32 b);
} HandlerVtbl;

typedef struct Handler {
    /* 0x0 */ HandlerVtbl *vtbl;
} Handler;

typedef struct Player {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ Handler *handler;
} Player;

void nw_snd_internal_driver_SequenceSoundPlayer_NoteOn(Player *player, u32 a, u32 b)
{
    player->handler->vtbl->noteOn(player->handler, player, a, b);
}

} /* extern "C" */
