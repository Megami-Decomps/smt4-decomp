#include "shard/GlobalBlocks.h"
#include "AsdSDK/AsdMemCopy.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

extern "C" {
void rt_aeabi_memclr(void *, u32);
void fileSystemRequireReady();
u32 FUN_0042b2c0(const u16 *);

static __inline bool descriptionInRange(u32 result, s32 first, s32 last)
{
    s32 description = result & 0x3FF;
    return description >= first && description <= last;
}

u32 FUN_00399c90(u32 root, const char *name)
{
    u16 path[248];
    u16 prefix[252];
    if (!pathBuildWide(name, reinterpret_cast<s16 *>(path), root))
        return 0xE0E046BC;
    s32 length = 248;
    for (s32 i = 0; i < 248; ++i) {
        if (!path[i]) {
            length = i;
            break;
        }
    }
    s32 slashCount = 0;
    for (s32 i = 0; i < length; ++i) {
        if (path[i] == '/') {
            ++slashCount;
            if (slashCount != 1) {
                rt_aeabi_memclr(prefix, 498);
                memcpySrcFirst(path, prefix, (i + 1) * 2);
                fileSystemRequireReady();
                u32 result = FUN_0042b2c0(prefix);
                if (nnResultIsFailure(result)) {
                    const u32 module = result & 0x3FC00;
                    if (module == 0x4400 && descriptionInRange(result, 100, 179)) {
                        g_processResultState.lastResult = result;
                        return result;
                    }
                    if (module != 0x4400 || !descriptionInRange(result, 180, 199)) {
                        g_processResultState.lastResult = result;
                        return result;
                    }
                }
            }
        }
    }
    g_processResultState.lastResult = 0;
    return 0;
}
}
