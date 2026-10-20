#include "common.h"

extern "C" {

extern u32 FUN_00432088(void);

/* Forwards to the IPC request FUN_00432088. */
u32 FUN_00432084(void)
{
    return FUN_00432088();
}

} /* extern "C" */
