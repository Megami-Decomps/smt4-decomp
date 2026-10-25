#ifndef NN_FS_ARCHIVE_HANDLE_WORDS_H
#define NN_FS_ARCHIVE_HANDLE_WORDS_H

#include "common.h"
#include <stddef.h>

struct FsArchiveHandleWords {
    explicit FsArchiveHandleWords(const u32 &invalid) : low(invalid), high(0) {}
    u32 low;
    u32 high;
};
typedef char FsArchiveHandleWordsLayoutCheck[
    sizeof(FsArchiveHandleWords) == 8 && offsetof(FsArchiveHandleWords, high) == 4 ? 1 : -1];

#endif
