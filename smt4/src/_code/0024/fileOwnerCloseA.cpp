#include "common.h"

extern "C" {

int asdFatalError(void);
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 file);

typedef struct FileOwner {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 file;    /* file handle; bit 0 marks a pending operation */
} FileOwner;

u32 fileOwnerCloseA(FileOwner *owner)
{
    if ((owner->file & 0xfffffffe) != 0) {
        if ((owner->file & 1) != 0) {
            asdFatalError();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(owner->file & 0xfffffffe);
        owner->file = 0;
    }
    return 0;
}

} /* extern "C" */
