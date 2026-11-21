#include "nn/Result.h"
extern "C" {
u32 ipcServiceRequest04WithBuffer(u32 mode, u64 handle, void *buffer, u32 size);
/* Forwards the complete service request. */
nn::Result ipcRequest04Forward(u32 mode, u64 handle, void *buffer, u32 size) { return ipcServiceRequest04WithBuffer(mode, handle, buffer, size); }
}
