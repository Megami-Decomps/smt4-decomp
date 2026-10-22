/* NON_MATCHING: exploration bounds merging and bit-test shift registers differ. */
#include "shard/SaveWork.h"

extern "C" SaveWork *gameGetMapBlock(void);

/* Test one cell of the selected five-by-seven exploration grid. */
extern "C" bool FUN_002319e0(s32 region, s32 x, s32 y)
{
    /* The exploration masks lie beyond the recovered SaveWork prefix. */
    struct MapExplorationFlags {
        u8 prefix[0xD7C];
        u8 regions[3][8];
    };
    typedef char RegionOffsetCheck[offsetof(MapExplorationFlags, regions) == 0xD7C ? 1 : -1];
    MapExplorationFlags *flags = reinterpret_cast<MapExplorationFlags *>(gameGetMapBlock());
    s32 cell = y * 5 + x;
    s32 byte = cell / 8;
    s32 bit = cell % 8;
    switch (region) {
    case 101:
        if (x < 0 || x >= 5 || y < 0 || y >= 7) {
            return false;
        }
        return (flags->regions[0][byte] & (1 << (u8)bit)) != 0;
    case 102:
        if (x < 0 || x >= 5 || y < 0 || y >= 7) {
            return false;
        }
        return (flags->regions[1][byte] & (1 << (u8)bit)) != 0;
    case 103:
        if (x < 0 || x >= 5 || y < 0 || y >= 7) {
            return false;
        }
        return (flags->regions[2][byte] & (1 << (u8)bit)) != 0;
    }
    return false;
}
