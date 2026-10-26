#include "common.h"
#include "code/Code0018_Smt4a.h"

extern "C" {

typedef struct FileHandle {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;  /* low bit set: handle is not closable */
} FileHandle;

void sysFatalBreak(void);
void vcallSlot12IfValid(u32 handle);

/* Closes the file handle the object holds; returns the object. */
FileHandle *fileHandleClose(FileHandle *file)
{
    u32 *handle = &file->handle;

    if ((*handle & ~1u) != 0) {
        if ((*handle & 1) != 0) {
            sysFatalBreak();
        }
        vcallSlot12IfValid(*handle & ~1u);
        *handle = 0;
    }
    return file;
}

} /* extern "C" */
