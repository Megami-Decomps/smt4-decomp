/* NON_MATCHING: retail uses `sub r1, r4, #384` where armcc emits `add r4, r1, #384`. */
#include "common.h"

extern "C" {

struct Data { u8 unk00[0x24]; u8 values[0x68]; u32 count; };
struct Owner { u8 unk00[0xc]; Data *data; };
struct WorkspaceBuffer { u8 bytes[0x180]; };
struct Workspace { u8 unk00[0x14]; WorkspaceBuffer *data; u32 count; };
extern Workspace DAT_0059edf8;
void FUN_003465ec(Data *data, void *values, u32 count);

void FUN_003cc898(Owner *owner)
{
    Data *data = owner->data;
    WorkspaceBuffer *buffers = (WorkspaceBuffer *)&DAT_0059edf8;
    DAT_0059edf8.data = &buffers[-1];
    DAT_0059edf8.count = 8;
    FUN_003465ec(data, data->values, data->count);
    DAT_0059edf8.data = &buffers[-2];
    DAT_0059edf8.count = 8;
}

} /* extern "C" */
