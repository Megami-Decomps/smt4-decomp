#include "common.h"

struct TitleContentFileSystem {
    u8 unk00[0x10];
    u32 handle;
};

extern "C" {
extern TitleContentFileSystem DAT_00589398;
void FUN_0016d144(u32 *handle, u32 sdkVersion);

s32 FUN_00158818(u32 handle)
{
    u32 local[1];
    DAT_00589398.handle = handle;
    local[0] = handle;
    FUN_0016d144(local, 0x0B0101C8);
    return 0;
}
}
