#include "common.h"

extern "C" {

struct Data { u8 unk00[0x24]; u8 values[0x68]; u32 count; };
struct Owner { u8 unk00[0xc]; Data *data; };
struct WorkspaceBuffer { u8 bytes[0x180]; };
struct Workspace { u8 unk00[0x14]; WorkspaceBuffer *data; u32 count; };
extern Workspace DAT_0059edf8;
s32 FUN_003465ec(Data *data, void *values, u32 count);

s32 FUN_003c3734(Owner *owner)
{
    Data *data = owner->data;
    Workspace *workspace = &DAT_0059edf8;
    WorkspaceBuffer *buffers = reinterpret_cast<WorkspaceBuffer *>(workspace);
    WorkspaceBuffer *frame = buffers - 1;
    workspace->data = frame;
    workspace->count = 8;
    s32 result = FUN_003465ec(data, data->values, data->count);
    frame = buffers - 2;
    workspace->data = frame;
    workspace->count = 8;
    return result;
}

} /* extern "C" */
