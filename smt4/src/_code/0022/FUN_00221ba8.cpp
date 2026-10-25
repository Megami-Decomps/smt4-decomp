#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

typedef struct TaskWork {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ u8 enabled;
    /* 0x6D */ u8 unk6d[3];
} TaskWork; /* 0x70 bytes */

extern void FUN_00200b24(void *work);
extern TaskWork *taskCreate(void (*update)(void *), u32 a, u32 b, u32 c, u32 d, u32 size, u32 list, u32 e, u32 f);

extern TaskWork *DAT_00433a58; /* 0x433a58 */

/* Creates the task running FUN_00200b24 with a cleared 0x70-byte work area, disabled. */
void FUN_00221ba8(void)
{
    TaskWork *work = taskCreate(FUN_00200b24, 0, 0, 0, 0, 0x70, 3, 0, 0);

    if (work != NULL) {
        reinterpret_cast<int>(memClear(work, 0x70));
        DAT_00433a58 = work;
        work->enabled = 0;
    }
}

}
