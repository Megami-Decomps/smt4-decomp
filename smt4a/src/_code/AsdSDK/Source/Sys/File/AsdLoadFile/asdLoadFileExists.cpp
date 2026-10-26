/* NON_MATCHING: native constructs a polymorphic stream through a VTT; its virtual-base hierarchy is not recovered by this scoped handle model. */
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/asdFileHashPackIsOpen.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

struct FileProbeConversionState { u32 words[2]; };
struct FileProbeHandle;

extern "C" {
extern u8 g_asdLoadFileUseRawPaths;
void rt_aeabi_memclr(void *, u32);
s32 textFormatBuffer(char *, const char *, ...);
u32 FUN_001860e4(const char *);
s32 refIsNullOrZero(FileProbeConversionState *);
u32 FUN_00100836(const char *, u32, FileProbeConversionState *);
u32 FUN_002e3c44(u16 *, const char *, u32, FileProbeConversionState *);
u32 FUN_001883b0(FileProbeHandle *, const u16 *, u32);
void sysFatalBreak();
void vcallSlot12IfValid(u32);
}

struct FileProbeHandle {
    u32 handle;
    u32 state[4];

    FileProbeHandle() : handle(0)
    {
        state[0] = state[1] = state[2] = state[3] = 0;
    }
    void close()
    {
        if (handle & ~1u) {
            if (handle & 1) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(handle & ~1u);
            handle = 0;
        }
    }
    u32 open(const u16 *path)
    {
        state[0] = state[1] = state[2] = state[3] = 0;
        return FUN_001883b0(this, path, 1);
    }
    ~FileProbeHandle() { close(); }
};

extern "C" u32 asdLoadFileExists(const char *path)
{
    u16 widePath[264];
    char fullPath[ASD_FILE_PATH_LEN];
    rt_aeabi_memclr(fullPath, sizeof(fullPath));
    if (g_asdLoadFileUseRawPaths || asdLoadFileHasDevice(path)) {
        textFormatBuffer(fullPath, path);
    } else {
        textFormatBuffer(fullPath, "rom:/%s", path);
    }
    bool inHashPack = false;
    if (asdFileHashPackIsOpen() && FUN_001860e4(fullPath)) {
        inHashPack = true;
    }
    FileProbeHandle file;
    FileProbeConversionState conversion = {{0, 0}};
    refIsNullOrZero(&conversion);
    u16 *destination = widePath;
    const char *source = fullPath;
    for (;;) {
        u32 length = FUN_00100836(source, 0x105, &conversion);
        if (length == 0 || !FUN_002e3c44(destination, source, length, &conversion)) {
            break;
        }
        ++destination;
        source += length;
    }
    *destination = 0;
    u32 result = file.open(widePath);
    file.close();
    if ((s32)(result & 0x80000000) < 0 && !inHashPack) {
        return 0;
    }
    return 1;
}
