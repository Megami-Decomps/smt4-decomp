#include "common.h"

extern "C" {

int FUN_0015c000(void *a, u32 b);
int FUN_0015c054(void *a, u32 b, int c);
int FUN_0015c4fc(void *track, u32 a, u32 b);
int FUN_002a2164(u32 a, void *b);
int nw_snd_internal_driver_SequenceTrack_Open(void *track);
extern u32 FUN_002a2174(void);

typedef struct SequencePlayer {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ u8 opened;
    /* 0x00D */ u8 unk00D[0x37];
    /* 0x044 */ u8 unk044[1];
    /* 0x045 */ u8 unk045[0x47];
    /* 0x08C */ void *track;
    /* 0x090 */ u8 unk090[0x60];
    /* 0x0F0 */ u8 unk0F0[4][0x10];
    /* 0x130 */ u8 unk130[4][0xC];
} SequencePlayer;

void FUN_00158988(SequencePlayer *player, u32 a, u32 *values, u32 *params, s8 *flags, u32 b)
{
    void *track = player->track;
    u32 i;

    if (track != NULL) {
        FUN_0015c4fc(track, a, b);
        nw_snd_internal_driver_SequenceTrack_Open(track);
        i = 0;
        do {
            FUN_0015c000(player->unk130[i], values[i]);
            FUN_0015c054(player->unk0F0[i], params[i], flags[i]);
            i++;
        } while (i < 4);
        FUN_002a2164(FUN_002a2174(), player->unk044);
        player->opened = 1;
    }
}

} /* extern "C" */
