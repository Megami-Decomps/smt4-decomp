/* NON_MATCHING: only difference: retail scales the id into ip (id stays live in r2), built reuses r2 */
#include "shard/W4_W4Match6b_GameDataBlock.h"

struct CountedIdsRecord {
    u8 unk00[0x3C];  // 0x00
    u16 ids[3];      // 0x3C
    u8 unk42[2];     // 0x42
    u16 extraId;     // 0x44
};

extern "C" {

/* Increments the saved counter of each valid id the record names (its three ids and the extra id). */
void FUN_002a17d4(const CountedIdsRecord *record)
{
    s32 i = 0;
    GameDataBlock *save = g_gameDataBlocks.saveBlock;

    for (; i < 3; i++) {
        u16 id = record->ids[i];

        if (id != 0 && id <= 0x500) {
            GameSavedItemA *item = &save->inventory.items[id];
            item->counter++;
        }
    }
    if (record->extraId <= 0x500) {
        GameSavedItemA *item = &save->inventory.items[record->extraId];
        item->counter++;
    }
}

} /* extern "C" */
