/* NON_MATCHING: only register assignment differs (retail keeps the save block in ip and the raw id in r3; ours swaps them). */
#include "shard/GameDataBlocks.h"

extern "C" {

/* Part of the save block's allocation beyond GameSaveData: a bit set of seen ids. */
struct SaveBody {
    /* 0x00000 */ u8 unk00000[0x24B3C];
    /* 0x24B3C */ u8 seenBits[63];
};

/* The raw save block: a 0x88-byte header, then the body. */
struct SaveBlockView {
    /* 0x00 */ u8 header[0x88];
    /* 0x88 */ SaveBody body;
};

/* A record whose eight ids start at 0x34. */
struct IdList {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 ids[8];
};

/* Marks an id (1 to 500) as seen in the save block. */
static __inline void saveMarkIdSeen(SaveBlockView *save, s16 id)
{
    if (id != 0 && (u32)id <= 500) {
        SaveBody *body = &save->body;
        u8 *byte = &body->seenBits[id / 8];
        *byte |= 1 << (id % 8);
    }
}

/* Marks every id of the list as seen. */
void FUN_0029bde4(IdList *list)
{
    SaveBlockView *save = (SaveBlockView *)g_gameDataBlocks.saveBlock;

    for (s32 i = 0; i < 8; i++) {
        if (list->ids[i] != 0) {
            saveMarkIdSeen(save, list->ids[i]);
        }
    }
}

} /* extern "C" */
