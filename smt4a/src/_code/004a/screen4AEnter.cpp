#include "shard/Shard004A.h"

extern "C" {

extern void FUN_00388758(s32 a);
extern void FUN_0019de98(s32 a, u32 color);
extern void FUN_0022e774(void);
extern void FUN_00184528(u8 *block);
extern void FUN_003343f0(s32 a);
extern void sendEvent100020F(void);

/* Enters state 0xD: sets up the display and resets the page selection. */
void screen4AEnter(Screen4A *obj)
{
    if (obj->unk0860 == 0) {
        FUN_00388758(1);
    }
    FUN_0019de98(0, 0xF4F4F4FF);
    FUN_0022e774();
    u16 *page = (u16 *)((u8 *)obj + 0xA874);
    *page = 9;
    FUN_00184528(obj->block0DC);
    FUN_003343f0(1);
    obj->state = 0xD;
    obj->unk18 = 0;
    sendEvent100020F();
}

} /* extern "C" */
