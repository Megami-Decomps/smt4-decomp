#include "shard/Shard0037.h"

extern "C" {

extern StateHolder4 *DAT_0057f28c;
extern void FUN_001ff724(void);
extern void FUN_0031f924(void);

void stateHolder4Request(u8 value)
{
    StateHolder4 *obj = DAT_0057f28c;

    obj->unk93D = 1;
    obj->unk945 = value;
    FUN_001ff724();
    FUN_0031f924();
}

} /* extern "C" */
