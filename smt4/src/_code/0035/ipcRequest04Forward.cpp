#include "common.h"
extern "C" {
u32 FUN_003520fc(u32 mode, u64 handle, void *buffer, u32 size);
/* Forwards the complete service request. */
u32 ipcRequest04Forward(u32 mode, u64 handle, void *buffer, u32 size) { return FUN_003520fc(mode, handle, buffer, size); }
}
