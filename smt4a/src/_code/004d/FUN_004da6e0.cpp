/* NON_MATCHING: Retail ldrb r4, [r5, #104] differs from recovered ldrb lr, [r5, #104]. */
#include "common.h"

// Private view of the byte range accessed by this routine.
struct MergeRecordView {
    u8 unk00[0x68]; // 0x00
    u8 unk68[0x40]; // 0x68
};

extern "C" s32 FUN_004bcd90(MergeRecordView* destination);

// Merge two or three 64-byte ranges, then return the destination finalizer's result.
extern "C" s32 FUN_004da6e0(u32 unused, const MergeRecordView* first,
                            const MergeRecordView* second,
                            const MergeRecordView* third,
                            MergeRecordView* destination)
{
    if (third != 0) {
        for (s32 index = 0; index < 0x40; ++index) {
            u8 value = first->unk68[index];
            destination->unk68[index] = value;
            value |= second->unk68[index];
            destination->unk68[index] = value;
            value |= third->unk68[index];
            destination->unk68[index] = value;
        }
    } else {
        for (s32 index = 0; index < 0x40; index += 2) {
            u8 value = first->unk68[index];
            destination->unk68[index] = value;
            value |= second->unk68[index];
            destination->unk68[index] = value;

            value = first->unk68[index + 1];
            destination->unk68[index + 1] = value;
            value |= second->unk68[index + 1];
            destination->unk68[index + 1] = value;
        }
    }

    return FUN_004bcd90(destination);
}
