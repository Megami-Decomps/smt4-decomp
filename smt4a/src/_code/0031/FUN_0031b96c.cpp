#include "common.h"

extern "C" {

typedef struct TaskWork {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ u8 enabled;
    /* 0x6D */ u8 unk6d[3];
} TaskWork; /* 0x70 bytes */

extern void FUN_002c1664(void *work);
extern TaskWork *taskCreate(void (*update)(void *), u32 a, u32 b, u32 c, u32 d, u32 size, u32 list, u32 e, u32 f);
extern int sysMemClear(void *buffer, u32 size);

extern TaskWork *DAT_00570ab4; /* 0x570ab4 */

/* Creates the task running FUN_002c1664 with a cleared 0x70-byte work area, disabled. */
void FUN_0031b96c(void)
{
    TaskWork *work = taskCreate(FUN_002c1664, 0, 0, 0, 0, 0x70, 3, 0, 0);

    if (work != NULL) {
        sysMemClear(work, 0x70);
        DAT_00570ab4 = work;
        work->enabled = 0;
    }
}

}
