#include "common.h"

struct FileRequestResult {
    s32 value;

    FileRequestResult() : value(static_cast<s32>(0xe7e3ffff)) {}
};

struct FileReadParameters {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 flag;
    /* 0x021 */ u8 unk021[0x10f];
    /* 0x130 */ void (*onDone)(void*);
    /* 0x134 */ void* onDoneArg;
    /* 0x138 */ u8 unk138[8];
    /* 0x140 */ FileRequestResult result;
    /* 0x144 */ u8 unk144[8];
};

extern "C" {
void FUN_001c5b68(FileReadParameters* parameters);
void pathSetWithRomPrefix(FileReadParameters* parameters, const char* path);
void* asdFileAddEntry(const FileReadParameters* parameters);

// Enqueue a file read with its completion callback and callback argument.
void* asdFileEnqueueRead(const char* path, u8 flag, void (*onDone)(void*), void* onDoneArg)
{
    FileReadParameters parameters;
    FUN_001c5b68(&parameters);
    pathSetWithRomPrefix(&parameters, path);
    parameters.flag = flag;
    parameters.onDone = onDone;
    parameters.onDoneArg = onDoneArg;
    return asdFileAddEntry(&parameters);
}
}
