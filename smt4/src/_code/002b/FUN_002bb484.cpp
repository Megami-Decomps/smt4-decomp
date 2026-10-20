/* NON_MATCHING: register choice only: retail keeps the cleared value in r1 (built uses r0) */
/* Releases the object's file handle (tag bit 0 marks a shared handle that needs a flush first) and clears it; returns the object. */
#include "common.h"

extern "C" {

typedef struct FileObject {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;      /* bit 0: needs flush before close */
} FileObject;

extern void FUN_002c52f8(void);
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

FileObject *FUN_002bb484(FileObject *obj)
{
    u32 *slot = &obj->handle;

    if ((*slot & ~1) != 0) {
        if ((*slot & 1) != 0) {
            FUN_002c52f8();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*slot & ~1);
        *slot = 0;
    }
    return (FileObject *)((u8 *)slot - 4);
}

}
