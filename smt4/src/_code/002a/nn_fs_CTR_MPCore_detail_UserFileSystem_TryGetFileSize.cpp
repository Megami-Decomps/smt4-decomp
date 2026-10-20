#include "common.h"

extern "C" {

struct File;
typedef struct FileVtbl {
    /* 0x0 */ void *unk0[2];
    /* 0x8 */ u32 (*getSize)(struct File *file, s64 *size);
} FileVtbl;

typedef struct File {
    /* 0x0 */ FileVtbl *vtbl;
} File;

/* Gets the file's size through its virtual getSize, or returns the nn::Result 0xE0E046BC for NULL arguments. */
u32 nn_fs_CTR_MPCore_detail_UserFileSystem_TryGetFileSize(s64 *size, File *file)
{
    u32 result;

    if (size != NULL && file != NULL) {
        result = file->vtbl->getSize(file, size);
        return result;
    }
    return 0xe0e046bc;
}

} /* extern "C" */
