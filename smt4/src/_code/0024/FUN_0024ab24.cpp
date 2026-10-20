#include "common.h"

extern "C" {

int FUN_002c52f8(void);
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 file);

typedef struct FileOwner {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 file;    /* file handle; bit 0 marks a pending operation */
} FileOwner;

u32 FUN_0024ab24(FileOwner *owner)
{
    if ((owner->file & 0xfffffffe) != 0) {
        if ((owner->file & 1) != 0) {
            FUN_002c52f8();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(owner->file & 0xfffffffe);
        owner->file = 0;
    }
    return 0;
}

} /* extern "C" */
