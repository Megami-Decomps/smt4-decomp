#include "shard/Shard0046.h"

extern "C" {

typedef struct PlayerInit {
    /* 0x000 */ u8 unk000[0x27];
    /* 0x027 */ u8 unk27;
    /* 0x028 */ u8 unk28[8];
    /* 0x030 */ u32 unk30;
    /* 0x034 */ u32 unk34;
    /* 0x038 */ u32 unk38;
    /* 0x03C */ u32 unk3C;
    /* 0x040 */ u32 unk40;
    /* 0x044 */ u8 unk44[4];
    /* 0x048 */ u32 unk48;
    /* 0x04C */ u32 unk4C;
    /* 0x050 */ u8 unk50;
    /* 0x051 */ u8 unk51;
    /* 0x052 */ u8 unk52[0xB42];
    /* 0xB94 */ u8 unkB94;
    /* 0xB95 */ u8 unkB95[0x163];
    /* 0xCF8 */ u32 unkCF8;
} PlayerInit;

extern void FUN_004637fc(PlayerInit *obj);

/* Resets the player state to its idle values. */
void playerInitReset(PlayerInit *obj)
{
    FUN_004637fc(obj);
    obj->unk38 = 0;
    obj->unk3C = 0xFFFFFFFF;
    obj->unk40 = 0;
    obj->unk48 = 0;
    obj->unk4C = 0;
    obj->unk50 = 0;
    obj->unk51 = 0;
    obj->unk27 = 0;
    obj->unkB94 = 3;
    obj->unk30 = 0;
    obj->unkCF8 = 0xFFFFFFFF;
    obj->unk34 = 0;
}

} /* extern "C" */
