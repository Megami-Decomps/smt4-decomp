/* Sets the priority of the file the handle refers to. */
#include "common.h"

extern "C" {

u32 FUN_00239ab8(u32 arg);
void nn_fs_ipc_File_SetPriority(u32 *file, u32 priority);

void FUN_003561b4(u32 arg, u32 priority)
{
    u32 file = FUN_00239ab8(arg);

    nn_fs_ipc_File_SetPriority(&file, priority);
}

}
