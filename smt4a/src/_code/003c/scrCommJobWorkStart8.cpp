#include "shard/W6_W6Match8_TextureSwap.h"
#include "shard/JobWork.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
void FUN_0019d96c(TextureSwap* work, s32 command, s32 frames);

static inline void startTextureWorkCommand(u32 job, s32 command, s32 frames)
{
    FUN_0019d96c((TextureSwap *)jobGetWork(job), command, frames);
}

u32 scrCommJobWorkStart8(void)
{
    s32 frames = scrGetArg(1);
    switch (scrGetCommandFrame()) {
    case 0: {
        u32 job = scrGetArg(0);
        s32 command = 8;
        startTextureWorkCommand(job, command, frames);
        break;
    }
    default:
        if (scrGetCommandFrame() == frames) {
            return 1;
        }
        break;
    }
    return 0;
}

} // extern "C"
