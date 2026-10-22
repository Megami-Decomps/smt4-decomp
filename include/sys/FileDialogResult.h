#ifndef SYS_FILE_DIALOG_RESULT_H
#define SYS_FILE_DIALOG_RESULT_H
#include "common.h"
#include <stddef.h>

struct FileDialogResult {
    char path[0xC8]; // 0x000
    char name[0x34]; // 0x0C8
    u32 unkFC; // 0x0FC
    s32 status; // 0x100
    u32 unk104; // 0x104
};
typedef char FileDialogResultSizeCheck[sizeof(FileDialogResult) == 0x108 ? 1 : -1];
typedef char FileDialogResultStatusCheck[offsetof(FileDialogResult, status) == 0x100 ? 1 : -1];
#endif
