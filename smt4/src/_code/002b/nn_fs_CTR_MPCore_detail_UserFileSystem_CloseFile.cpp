#include "common.h"

extern "C" {

struct File;
typedef struct FileVtbl {
    /* 0x00 */ void *unk00[11];
    /* 0x2C */ void (*close)(struct File *file);
} FileVtbl;

typedef struct File {
    /* 0x0 */ FileVtbl *vtbl;
} File;

void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(File *file)
{
    if (file != NULL) {
        file->vtbl->close(file);
        return;
    }
}

} /* extern "C" */
