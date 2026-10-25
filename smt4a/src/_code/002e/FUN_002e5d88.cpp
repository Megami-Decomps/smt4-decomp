#include "shard/W4_W4Match6b_GameDataBlock.h"
extern "C" {
/* The sub-block's indexed flag bytes sit past the recovered GameDataSub fields. */
struct IndexedFlagView { u8 unk00[0x27EB8]; u8 flags[1]; };
/* Tests whether an indexed game-data flag is nonzero. */
s32 FUN_002e5d88(u32 index)
{
    const IndexedFlagView *view = reinterpret_cast<const IndexedFlagView *>(&g_gameDataBlocks.saveBlock->save.sub);
    return view->flags[index] != 0;
}
}
