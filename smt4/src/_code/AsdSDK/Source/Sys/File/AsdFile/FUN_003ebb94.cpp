/* NON_MATCHING: static initialization scheduling has not yet been matched. */
#include "AsdSDK/Source/Sys/File/AsdFile.h"

struct AsdFileInitializationGlobals : AsdFileGlobals {
    u32 unk2c;
    s64 timestamp; // 0x30
};
struct FileThreadState {
    u32 handle;
    u8 joined;
    u8 padding[3];
};
struct FileEventState { u32 words[2]; };

extern "C" {
extern AsdFileInitializationGlobals g_asdFile;
extern u64 DAT_00465038;
extern FileThreadState g_asdFileThread;
extern u32 g_asdFileMutex;
extern FileEventState g_asdFileEvent;
void _ZN10NnOsThreadD1Ev(void *object);
void _ZN10NnOsHandleD1Ev(void *object);
void FUN_003573a0(void *object);
void entry();
s32 __aeabi_atexit(void *object, void (*destroy)(void *), void *module);

// Initialize the file loader's thread, mutex and wake event, registering cleanup.
void FUN_003ebb94()
{
    g_asdFile.timestamp = -1;
    DAT_00465038 = 0;
    g_asdFileThread.handle = 0;
    g_asdFileThread.joined = 1;
    __aeabi_atexit(&g_asdFileThread, _ZN10NnOsThreadD1Ev, reinterpret_cast<void *>(entry));
    g_asdFileMutex = 0;
    __aeabi_atexit(&g_asdFileMutex, _ZN10NnOsHandleD1Ev, reinterpret_cast<void *>(entry));
    g_asdFileEvent.words[0] = 0;
    g_asdFileEvent.words[1] = 0;
    __aeabi_atexit(&g_asdFileEvent, FUN_003573a0, reinterpret_cast<void *>(entry));
}
}
