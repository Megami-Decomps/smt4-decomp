#include "common.h"

extern "C" {

extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 file);

typedef struct FileOwner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 file;   /* file handle; bit 0 marks a pending operation */
} FileOwner;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ FileOwner *fileOwner;
    /* 0x38 */ u8 unk38[0x18];
    /* 0x50 */ u8 open;
    /* 0x51 */ u8 enabled;
} Obj;

void FUN_0037a4fc(Obj *obj)
{
    u8 enabled = obj->enabled != 0;
    u8 open = 0;
    FileOwner *owner;
    u32 file;

    if (enabled) {
        open = obj->open;
    }
    if (enabled && open != 0) {
        owner = obj->fileOwner;
        file = owner->file;
        if ((file & 0xfffffffe) != 0) {
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(file & 0xfffffffe);
            owner->file = 0;
        }
        obj->open = 0;
    }
}

} /* extern "C" */
