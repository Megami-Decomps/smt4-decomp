/* NON_MATCHING: compiler loads the constants early and reverses the two byte stores. */
#include "common.h"
struct WorkState { u8 unk00[0x20]; struct { u8 unk00[0x14]; u8 state, pending; } child; };
/* Enters state two and clears the pending request. */
extern "C" void FUN_00301484(WorkState *work) {
    work->child.state = 2;
    work->child.pending = 0;
}
