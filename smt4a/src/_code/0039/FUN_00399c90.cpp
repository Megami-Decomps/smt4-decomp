/* NON_MATCHING: simplified filesystem-result filtering, scratch-frame size and loop registers differ. */
#include "shard/GlobalBlocks.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
u32 FUN_002e0e04(const char *, u16 *, u32);
void rt_aeabi_memclr(void *, u32);
void FUN_001886bc();
u32 FUN_0042b2c0(const u16 *);

u32 FUN_00399c90(u32 root, const char *name)
{
    u16 path[248];
    u16 prefix[264];
    if (!FUN_002e0e04(name, path, root))
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
        if (path[i] == '/' && ++slashCount != 1) {
            rt_aeabi_memclr(prefix, 498);
            FUN_002e59f8(path, prefix, i * 2 + 2);
            FUN_001886bc();
            u32 result = FUN_0042b2c0(prefix);
            if (result & 0x80000000) {
                const u32 module = result & 0x3FC00;
                const s32 description = result & 0x3FF;
                if (module != 0x4400 || description < 180 || description >= 200) {
                    DAT_005b40b4.unk10 = result;
                    return result;
                }
            }
        }
    }
    DAT_005b40b4.unk10 = 0;
    return 0;
}
}
