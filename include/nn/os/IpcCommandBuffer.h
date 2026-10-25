#ifndef NN_OS_IPCCOMMANDBUFFER_H
#define NN_OS_IPCCOMMANDBUFFER_H

#include "nn/svc.h"

namespace nn {
namespace os {

/* Stores one word of the IPC command buffer: index 0 is the command header, the rest parameters
 * and descriptors. Most command stubs write the buffer through it (retail stores each word singly);
 * smt4 FUN_00352008/FUN_00360624/FUN_00360680/FUN_003606dc/FUN_00360738 and smt4a FUN_004266e4/
 * FUN_00426940/FUN_00426a1c/FUN_00439be8 assign the buffer's fields directly, as retail's merged
 * stm/strd stores show. */
static __inline void SetIpcWord(IpcCommandBuffer *buffer, u32 index, u32 value)
{
    ((u32 *)buffer)[index] = value;
}

} // namespace os
} // namespace nn

#endif
