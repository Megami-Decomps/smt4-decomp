/* NON_MATCHING: arg0 and arg5 trade callee-saved registers (r6/r8), and the r1/r9 argument moves are scheduled differently. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

struct Task1ab6f4 {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ u8 unk00C[0xC];
    /* 0x018 */ u8 unk018[0x10];
    /* 0x028 */ u8 unk028[0x8];
    /* 0x030 */ u8 unk030[0x8];
    /* 0x038 */ u8 data[0x134];
    /* 0x16C */ u8 params[0xB0];
    /* 0x21C */ u32 unk21C;
    /* 0x220 */ f32 unk220;
    /* 0x224 */ u32 unk224;
    /* 0x228 */ f32 unk228;
    /* 0x22C */ u8 unk22C;
    /* 0x22D */ u8 unk22D[0x3];
    /* 0x230 */ s32 unk230;
    /* 0x234 */ s32 unk234;
    /* 0x238 */ u8 unk238[0xC8];
    /* 0x300 */ u16 unk300;
    /* 0x302 */ u16 unk302;
};
typedef char Task1ab6f4SizeCheck[sizeof(Task1ab6f4) == 0x304 ? 1 : -1];

extern "C" {

Task1ab6f4 *taskCreate(void (*update)(Task1ab6f4 *), u32 a, u32 b, u32 c, u32 d, u32 size, u32 list, u32 e, u32 f);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_00291340(void *params, void *a, void *b, void *c, void *d);
void FUN_00193130(Task1ab6f4 *task);

// Create the task that runs FUN_00193130 with copies of the given data and parameter blocks.
__softfp Task1ab6f4 *FUN_001ab6f4(u32 arg0, const void *data, const void *params, u32 arg3,
                                  f32 arg4, u8 arg5, u16 arg6, f32 arg7)
{
    Task1ab6f4 *task = taskCreate(FUN_00193130, 0, 0, 0, 0, sizeof(Task1ab6f4), 3, 0, 0);
    if (task != NULL) {
        memClear(task, sizeof(Task1ab6f4));
        __aeabi_memcpy4(task->data, data, sizeof(task->data));
        __aeabi_memcpy4(task->params, params, sizeof(task->params));
        task->unk21C = arg3;
        task->unk220 = arg7;
        task->unk224 = arg0;
        task->unk22C = arg5;
        task->unk234 = -1;
        task->unk230 = -1;
        FUN_00291340(task->params, task->unk028, task->unk030, task->unk00C, task->unk018);
        task->unk228 = arg4;
        task->unk302 = arg6;
        task->unk300 = arg6;
    }
    return task;
}

} /* extern "C" */
