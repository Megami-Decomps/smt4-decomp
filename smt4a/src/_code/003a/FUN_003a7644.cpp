/* NON_MATCHING: child release, flag/phase/timeout stores (phase and timeout through the tail block with writeback) and the adjacent-function tail call match retail; the zero state/frame pair is stored with strd from r0/r1 where retail copies the zero held in r5 (mov r1,r5) and uses stm. */
#include "common.h"

/* The abstract window base at 0x55c684: slot 4 is its deleting destructor,
 * a tail call to asdOperatorDelete. The factory at 0x474734 derives from it. */
class Obj55c684 {
public:
    virtual ~Obj55c684() = 0;
    u8 unk04[0x14];
};

struct MessageCloseTail {
    u32 phase;
    u8 unk010[0x1f8];
    Obj55c684 *child;
    u8 unk20c[0x2c];
    u32 timeout;
};

struct MessageCloseWork {
    u32 flags;
    u32 state;
    u32 frame;
    MessageCloseTail tail;
};

static __inline void messageCloseWaitForTimeout(MessageCloseTail *tail)
{
    tail->phase = 0;
    tail->timeout = 50;
}

/* Stores two consecutive words. */
static __inline void messageClosePair(u32 *words, u32 first, u32 second)
{
    words[0] = first;
    words[1] = second;
}

extern "C" {
void gameDataAddHomeButtonHold(u32 flags);
void gameDataBlocksAddFlags(u32 flags);
void messageMainSetFlag(u8 enabled);

void FUN_003a7644(MessageCloseWork *work)
{
    messageClosePair(&work->state, 0, 0);
    if (work->tail.child != 0) {
        delete work->tail.child;
        work->tail.child = 0;
    }
    work->flags = 0;
    messageCloseWaitForTimeout(&work->tail);
    gameDataAddHomeButtonHold(4);
    gameDataBlocksAddFlags(4);
    messageMainSetFlag(0);
}
}
