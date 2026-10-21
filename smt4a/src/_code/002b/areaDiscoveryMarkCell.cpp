/* NON_MATCHING: signed bounds are merged and coarse-map branch placement differs; -O2 candidate. */
#include "shard/W5_W5Match7_FlagBanks.h"

struct AreaDiscoveryFlags {
    u8 unk0000[0xdb0];
    union {
        u8 fine[18]; // 0xdb0, 10-by-14 map
        struct {
            u8 unk00[8];
            u8 first[8]; // 0xdb8, 5-by-7 map
            u8 second[8]; // 0xdc0, 5-by-7 map
        } coarse;
    } grids;
};
extern "C" {
// Mark an area cell discovered and propagate the linked cells of map 101.
void areaDiscoveryMarkCell(s32 map, s32 x, s32 y)
{
    AreaDiscoveryFlags *flags = (AreaDiscoveryFlags *)gameFlagsGetBlock();
    if (map != 101) {
        s32 index = y * 5 + x;
        s32 byte = index / 8;
        if (map == 102) {
            if (x >= 0 && x < 5 && y >= 0 && y < 7)
                flags->grids.coarse.first[byte] |= 1 << (index % 8);
        } else if (map == 103) {
            if (x >= 0 && x < 5 && y >= 0 && y < 7)
                flags->grids.coarse.second[byte] |= 1 << (index % 8);
        }
        return;
    }
    if (x < 0 || x >= 10 || y < 0 || y >= 14)
        return;
    s32 index = x + y * 10;
    flags->grids.fine[index / 8] |= 1 << (index % 8);
    if (index == 11)
        flags->grids.fine[0] |= 2;
    else if (index == 71)
        flags->grids.coarse.first[0] |= 0x40;
    else if (index == 72)
        flags->grids.coarse.first[2] |= 2;
    else if (index == 94)
        flags->grids.coarse.first[3] |= 0x30;
    else if (index == 85)
        flags->grids.coarse.first[3] |= 0x80;
    else if (index == 66)
        flags->grids.coarse.first[0] |= 8;
    else if (index == 87)
        flags->grids.coarse.first[4] |= 2;
    else if (index == 86)
        flags->grids.coarse.first[4] |= 1;
}
}
