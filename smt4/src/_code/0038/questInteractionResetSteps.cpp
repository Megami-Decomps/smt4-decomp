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
    /* The step functions in table order, named by the state each one serves (armcc rerolls copies from
     * an array, retail copies each entry by its own offset). */
    QuestCallbackTableView::Step state01, state02, state03, state04, state05, state06, state07, state08;
    QuestCallbackTableView::Step state09, state10, state11, state12, state13, state15, state16, state14;
};
typedef char QuestCallbackOffsets[offsetof(QuestCallbackTableView, steps) == 0x5C8 &&
    sizeof(QuestCallbackTableView::Step) == 8 ? 1 : -1];
}
extern "C" {
extern const QuestCallbackDefaults DAT_00405718;

/* Resets the interaction's step table (every state empty, then states 1-16 get their step) and starts it
 * in state 1. */
void questInteractionResetSteps(QuestInteraction *interaction)
{
    QuestCallbackTableView *table = reinterpret_cast<QuestCallbackTableView *>(interaction);
    for (s32 index = 0; index < 18; ++index)
        table->steps[index] = DAT_00405718.empty;
    table->steps[1] = DAT_00405718.state01;
    table->steps[2] = DAT_00405718.state02;
    table->steps[3] = DAT_00405718.state03;
    table->steps[4] = DAT_00405718.state04;
    table->steps[5] = DAT_00405718.state05;
    table->steps[6] = DAT_00405718.state06;
    table->steps[7] = DAT_00405718.state07;
    table->steps[8] = DAT_00405718.state08;
    table->steps[9] = DAT_00405718.state09;
    table->steps[10] = DAT_00405718.state10;
    table->steps[11] = DAT_00405718.state11;
    table->steps[12] = DAT_00405718.state12;
    table->steps[13] = DAT_00405718.state13;
    table->steps[15] = DAT_00405718.state15;
    table->steps[16] = DAT_00405718.state16;
    table->steps[14] = DAT_00405718.state14;
    table->state = 1;
    table->counter = 0;
}
}
