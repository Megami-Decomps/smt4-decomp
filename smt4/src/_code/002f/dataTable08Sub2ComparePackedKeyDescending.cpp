#include "shard/W6_W6Match3_Record08Sub2.h"

// The word view must not raise the alignment of the shared halfword-key prefix.
union Record08Sub2PackedView {
    Record08Sub2SortKeys keys;
    struct {
        u8 unk00[0x54];
        u32 sortWord;
    } packed;
};

extern "C" {
Record08Sub2SortKeys* dataTable08Sub2GetRecord(u32 id);

s32 dataTable08Sub2ComparePackedKeyDescending(const u16* leftId, const u16* rightId)
{
    const Record08Sub2PackedView* left =
        (const Record08Sub2PackedView*)dataTable08Sub2GetRecord(*leftId);
    const Record08Sub2PackedView* right =
        (const Record08Sub2PackedView*)dataTable08Sub2GetRecord(*rightId);
    s32 difference = (s32)(right->packed.sortWord >> 20) -
                     (s32)(left->packed.sortWord >> 20);
    if (difference == 0) {
        left = (const Record08Sub2PackedView*)dataTable08Sub2GetRecord(*leftId);
        right = (const Record08Sub2PackedView*)dataTable08Sub2GetRecord(*rightId);
        difference = right->keys.secondary - left->keys.secondary;
    }
    return difference;
}

} /* extern "C" */
