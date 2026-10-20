/* NON_MATCHING: retail tail-calls the removed hook (pop {..., lr}; b hook -> nop); armcc compiles a call to a __weak function as bl + pop pc */
#include "common.h"

extern "C" {

typedef struct FileReader {
    /* 0x000 */ u8 unk000[0x110];
    /* 0x110 */ u32 handle;     /* file handle; bit 0 is a flag */
    /* 0x114 */ u8 unk114[0x18];
    /* 0x12C */ u8 stream[0x54]; /* sub-object closed by FUN_00140f3c */
    /* 0x180 */ u8 opened;
} FileReader;

void FUN_00140f3c(void *stream);
/* A debug hook armlink removed; retail calls it as a tail call (the epilogue's pop lr, then b). */
__weak void FUN_0014047c_hook(void *object);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

/* Closes the file and its stream if they are open. */
void FUN_0014047c(FileReader *reader)
{
    if (reader->opened) {
        if (reader->handle & ~1) {
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(reader->handle & ~1);
            reader->handle = 0;
        }
        FUN_00140f3c(reader->stream);
        reader->opened = 0;
    }
    FUN_0014047c_hook(reader);
}

} /* extern "C" */
