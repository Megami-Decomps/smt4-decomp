/* NON_MATCHING: -O2 preserves argument registers but omits retail's native NOP at0x3c; default rematerializes command8, changes the save set and leaves two NOPs. */
#include "shard/W6_W6Match8_TextureSwap.h"
#include "shard/JobWork.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
void FUN_0019d96c(TextureSwap* work, s32 command, s32 frames);

static inline void startTextureWorkCommand(u32 job, s32 command, s32 frames)
{
    FUN_0019d96c(reinterpret_cast<TextureSwap *>(jobGetWork(job)), command, frames);
}

u32 scrCommJobWorkStart8(void)
{
    s32 frames = scrGetArg(1);
    if (scrGetCommandFrame() != 0) {
        if (scrGetCommandFrame() == frames) {
            return 1;
        }
    } else {
        startTextureWorkCommand((u32)scrGetArg(0), 8, frames);
    }
    return 0;
}

} // extern "C"
