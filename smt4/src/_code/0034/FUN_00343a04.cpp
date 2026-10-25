/* Adds `amount` to the saturating halfword counter (+0x1a) of the object gameGetQuestCenterBlock returns, capped at 0xffff. */
#include "common.h"
#include "shard/FUN_00343a04.h"

extern "C" {

struct Obj00343a04 {
    /* 0x00 */ u8 unk00[0x1a];
    /* 0x1a */ u16 counter;
};

Obj00343a04 *gameGetQuestCenterBlock(void);

void FUN_00343a04(s32 amount)
{
    Obj00343a04 *obj = gameGetQuestCenterBlock();
    s32 value = obj->counter + amount;

    obj->counter = value >= 0x10000 ? 0xffff : value;
}

}
