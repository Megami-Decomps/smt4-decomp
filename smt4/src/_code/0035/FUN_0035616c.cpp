/* NON_MATCHING: the two pass-through arguments are kept in r4/r5 the other way round. */
#include "common.h"

extern "C" {

/* A file handle as the nn::fs IPC layer takes it. */
typedef struct FsFile {
    u32 handle; /* 0x00 */
} FsFile;

extern u64 FUN_00239ab8(void);
extern void FUN_00356bbc(FsFile *file, u32 aux, u32 arg0, u32 arg1);

/* Gets a handle (low word) and its companion value (high word) and passes both on with the arguments. */
void FUN_0035616c(u32 unused0, u32 unused1, u32 arg0, u32 arg1)
{
    u64 opened = FUN_00239ab8();
    FsFile file;

    file.handle = (u32)opened;
    FUN_00356bbc(&file, (u32)(opened >> 32), arg0, arg1);
}

} /* extern "C" */
