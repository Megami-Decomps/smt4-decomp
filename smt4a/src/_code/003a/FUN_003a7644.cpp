/* NON_MATCHING: zero-pair stores differ, and retail falls through into the adjacent message-flag setter instead of branching to it. */
#include "common.h"

/* The abstract window base at 0x55c684: slot 4 is its deleting destructor,
 * a tail call to asdOperatorDelete. The factory at 0x474734 derives from it. */
class Obj55c684 {
public:
    virtual ~Obj55c684() = 0;
    u8 unk04[0x14];
};

struct MessageCloseWork {
    u32 flags;
    u32 state;
    u32 frame;
    u32 phase;
    u8 unk010[0x1f8];
    Obj55c684 *child;
    u8 unk20c[0x2c];
    u32 timeout;
};

extern "C" {
void FUN_002c76d8(u32 flags);
void gameDataBlocksAddFlags(u32 flags);
void messageMainSetFlag(u8 enabled);

void FUN_003a7644(MessageCloseWork *work)
{
    work->state = 0;
    work->frame = 0;
    if (work->child != 0) {
        delete work->child;
        work->child = 0;
    }
    work->flags = 0;
    work->phase = 0;
    work->timeout = 50;
    FUN_002c76d8(4);
    gameDataBlocksAddFlags(4);
    messageMainSetFlag(0);
}
}
