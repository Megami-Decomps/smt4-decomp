#include "common.h"
#include "event/bustupEvent/BustupSlotControl_BustupCutAnim.h"

extern "C" {

bool eventTexCallIfMatch(s32 workId, u32 index, u32 extra);

/* Text command 0xF87B: shows frame `index` (row, column) on the bust-up cut showing `workId`, or, when
 * none shows it, passes `index` to the event texture showing it. */
u32 messageTextSetPortraitFrame(s32 workId, u32 index, u32 row, u32 column)
{
    if (bustupCutStartSlotTransition(workId, index, row, column, -1) == 0) {
        eventTexCallIfMatch(workId, index, 0);
    }
    return 1;
}

} /* extern "C" */
