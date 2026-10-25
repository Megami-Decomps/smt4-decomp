/* NON_MATCHING: the callee takes no argument (retail passes none); retail calls it with `bl` inside a push {r4, lr} frame where armcc emits a tail `b`. */
#include "common.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

struct SelectionState {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s16 selection;
    /* 0x5a */ s16 previous;
};
extern SelectionState DAT_005f17fc;

void uiSelectionRefresh(void)
{
    if (DAT_005f17fc.selection != DAT_005f17fc.previous) {
        DAT_005f17fc.previous = DAT_005f17fc.selection;
    }
    mapEnvironmentApplySelectedEntry();
}

} /* extern "C" */
