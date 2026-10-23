/* NON_MATCHING: quest member-callback table copy scheduling differs from retail. */
#include "shard/W6_W6Match7_QuestInteraction.h"
#include <stddef.h>

namespace {
/* The callback array is beyond the canonical interaction field prefix. */
struct QuestCallbackTableView {
    typedef void (QuestCallbackTableView::*Step)();
    u32 flags, state, counter;
    u8 unk0C[0x5BC];
    Step steps[18];
};
struct QuestCallbackDefaults {
    u32 unk00[2];
    QuestCallbackTableView::Step empty;
    QuestCallbackTableView::Step steps[16];
};
typedef char QuestCallbackOffsets[offsetof(QuestCallbackTableView, steps) == 0x5C8 &&
    sizeof(QuestCallbackTableView::Step) == 8 ? 1 : -1];
}
extern "C" {
extern const QuestCallbackDefaults DAT_00405718;

void FUN_003852c8(QuestInteraction *interaction)
{
    QuestCallbackTableView *table = reinterpret_cast<QuestCallbackTableView *>(interaction);
    for (s32 index = 0; index < 18; ++index)
        table->steps[index] = DAT_00405718.empty;
    table->steps[1] = DAT_00405718.steps[0];
    table->steps[2] = DAT_00405718.steps[1];
    table->steps[3] = DAT_00405718.steps[2];
    table->steps[4] = DAT_00405718.steps[3];
    table->steps[5] = DAT_00405718.steps[4];
    table->steps[6] = DAT_00405718.steps[5];
    table->steps[7] = DAT_00405718.steps[6];
    table->steps[8] = DAT_00405718.steps[7];
    table->steps[9] = DAT_00405718.steps[8];
    table->steps[10] = DAT_00405718.steps[9];
    table->steps[11] = DAT_00405718.steps[10];
    table->steps[12] = DAT_00405718.steps[11];
    table->steps[13] = DAT_00405718.steps[12];
    table->steps[15] = DAT_00405718.steps[13];
    table->steps[16] = DAT_00405718.steps[14];
    table->steps[14] = DAT_00405718.steps[15];
    table->state = 1;
    table->counter = 0;
}
}
