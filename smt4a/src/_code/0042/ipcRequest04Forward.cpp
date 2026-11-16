#include "common.h"
extern "C" {
u32 ipcServiceRequest04WithBuffer(u32 mode, u64 handle, void *buffer, u32 size);
/* Forwards the complete service request. */
u32 ipcRequest04Forward(u32 mode, u64 handle, void *buffer, u32 size) { return ipcServiceRequest04WithBuffer(mode, handle, buffer, size); }
}
