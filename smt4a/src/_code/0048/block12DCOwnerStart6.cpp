#include "ui/UiSpriteApi.h"
#include "shard/Shard0048.h"

extern "C" {

typedef struct Block12DCOwner {
    /* 0x0000 */ u8 unk0000[0x12D1];
    /* 0x12D1 */ u8 unk12D1;
    /* 0x12D2 */ u8 unk12D2[0xA];
    /* 0x12DC */ UiSpriteState block12DC;
} Block12DCOwner;


void block12DCOwnerStart6(Block12DCOwner *obj)
{
    obj->unk12D1 = 1;
    uiSpriteSetKeyframe(&obj->block12DC, 6, 0);
}

} /* extern "C" */
