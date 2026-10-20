#include "common.h"

extern "C" {

typedef struct Obj233808 {
    u8 unk00[0x74];
    u8 sub[0x10];                  /* 0x74 */
    u8 flag;                       /* 0x84 */
} Obj233808;

__declspec(noreturn) __weak void FUN_00233808_hook(u8 *sub);

void FUN_00233808(Obj233808 *obj)
{
    obj->flag = 0;
    FUN_00233808_hook(obj->sub);
}

} /* extern "C" */
