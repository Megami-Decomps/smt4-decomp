/* NON_MATCHING: recovered filesystem result checks and RAII layout still have different stack/register scheduling. */
#include "classes/Obj420fa4.h"

struct Obj420fa4File {
    /* The retail pool contains this address as literal data, not a relocation. */
    u32 vtable;
    u32 handle[5];
};
extern "C" {
extern const u8 LAB_0010fe8c;
s32 FUN_002bb5a4(u32 *file, const u8 *path, u32 mode);
void FUN_002bb484(Obj420fa4File *file, u32 mode);
void FUN_002bbb2c(u32 result, u32 site);
u32 nn_fs_detail_FileBase_TryGetSize(u32 *file, s64 *size);
u32 nn_fs_detail_FileBase_TryRead(u32 *file, s32 *read, void *destination, u32 size);
}

u32 Obj420fa4::vfunc08()
{
    Obj420fa4File file = {0x420c68, {0, 0, 0, 0, 0}};
    s32 result = FUN_002bb5a4(file.handle, &LAB_0010fe8c, 1);
    if (result >= 0) {
        s64 size;
        u32 status = nn_fs_detail_FileBase_TryGetSize(file.handle, &size);
        if ((s32)status < 0) {
            FUN_002bbb2c(status, 0x10fe0c);
        }
        if (size == 4) {
            u32 value = 0;
            s32 read;
            status = nn_fs_detail_FileBase_TryRead(file.handle, &read, &value, 4);
            if ((s32)status < 0) {
                FUN_002bbb2c(status, 0x10fe44);
            }
            if (read == 4) {
                FUN_002bb484(&file, 0);
                return value;
            }
        }
    }
    FUN_002bb484(&file, 0);
    return 0;
}
