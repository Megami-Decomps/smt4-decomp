#include "common.h"

extern "C" {

typedef struct SoundOnishiPlayer {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
} SoundOnishiPlayer;

void Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(SoundOnishiPlayer *player)
{
    player->unk00 = 0;
    player->unk04 = 0;
    player->unk08 = 0;
    player->unk0C = 0;
    player->unk10 = 0;
    player->unk14 = 0;
    player->unk18 = 0;
    player->unk1C = 0;
}

} /* extern "C" */
