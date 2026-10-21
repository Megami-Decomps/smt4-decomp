/* NON_MATCHING: outgoing stack-argument setup and post-build flag registers differ; native preserves the builder's R0 result, which this source now returns. */
#include "common.h"

struct TabListState {
    u8 unk00[8];
    u8 flags;
    u8 secondaryFlags;
    u8 mode;
};

extern "C" {
u32 QcUtility_BuildTabList(TabListState* list, s32 mode, u32 filterA, u32 filterB,
                           u32 filterC, s32 option, s32 limit);

u32 FUN_00381958(TabListState* list, u32 filterA, u32 filterB, u32 filterC)
{
    u32 result = QcUtility_BuildTabList(list, 4, filterA, filterB, filterC, 0, 20);
    list->mode = 4;
    list->secondaryFlags |= 0x10;
    list->flags |= 0x10;
    return result;
}
}
