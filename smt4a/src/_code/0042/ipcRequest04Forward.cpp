#include "common.h"
extern "C" {
u32 FUN_00426820(u32 mode, u64 handle, void *buffer, u32 size);
/* Forwards the complete service request. */
u32 ipcRequest04Forward(u32 mode, u64 handle, void *buffer, u32 size) { return FUN_00426820(mode, handle, buffer, size); }
}
