/* NON_MATCHING: built hoists the common seek argument setup above the branch and predicates the error report; retail sets the arguments up separately in each branch (the origin of any other value is left uninitialised, as in retail) */
#include "common.h"

struct SeekableFile {
    u8 unk00[4];       // 0x00
    u8 base[0x14];     // 0x04 (the nn::fs file object)
    s32 position;      // 0x18
    u8 trackPosition;  // 0x1C
};

extern "C" {

u32 nn_fs_detail_FileBase_TrySeek(void *file, s64 offset, s32 origin);
void FUN_0016e800(u32 result, u32 address);

/* Seeks the file by `offset` from the origin (0 begin, 1 current, 2 end); records the new position when tracked, else reports failures. */
s32 FUN_00174a64(SeekableFile *file, s32 offset, s32 origin)
{
    s32 mode;

    if (origin == 0) {
        mode = 0;
    } else if (origin == 1) {
        mode = 1;
    } else if (origin == 2) {
        mode = 2;
    }
    if (file->trackPosition != 0) {
        u32 result = nn_fs_detail_FileBase_TrySeek(file->base, offset, mode);

        file->position = result;
        return ((s32)result >> 31) + 1;
    }
    u32 result = nn_fs_detail_FileBase_TrySeek(file->base, offset, mode);

    if ((s32)result < 0) {
        FUN_0016e800(result, __current_pc());
    }
    return 1;
}

} /* extern "C" */
