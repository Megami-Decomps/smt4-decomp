#ifndef NN_OS_IPC_STATIC_BUFFER_H
#define NN_OS_IPC_STATIC_BUFFER_H

#include "common.h"

/* Static-buffer descriptor word of an IPC command: buffer size, buffer id and the type tag 2.
 * A plain static (not __inline) so armcc keeps the id term when the id is the constant 0, as the
 * retail stubs do (`orr rX, zero, size, lsl #14; orr rX, rX, #2`). */
static u32 ipcStaticBufferDescriptor(u32 size, u32 id)
{
    return (id << 10) | (size << 14) | 2;
}

/* Descriptor word of a mapped (read/write) buffer: size shifted by 4 plus the permission/type bits.
 * Plain static for the same reason as above: retail keeps the constant bits in a register. */
static u32 ipcMappedBufferDescriptor(u32 size, u32 bits)
{
    return (size << 4) | bits;
}

#endif
