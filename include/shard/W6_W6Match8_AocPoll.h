#ifndef SHARD_W6_W6MATCH8_AOC_POLL_H
#define SHARD_W6_W6MATCH8_AOC_POLL_H

#include "common.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"

enum AocPendingPhase {
    AOC_PENDING_POLL,
    AOC_PENDING_START_WORKER,
    AOC_PENDING_WAIT_WORKER,
    AOC_PENDING_DONE
};

enum AocPendingStatus {
    AOC_PENDING_COMPLETE = 0,
    AOC_PENDING_BUSY = 1,
    AOC_PENDING_LOOKUP_FAILED = 100,
    AOC_PENDING_QUERY_FAILED = 102,
    AOC_PENDING_QUERY_FAILED_WITH_DETAIL = 103
};

struct AocPollStep {
    u32 unk00;
    u32 phase;            /* AocPendingPhase */
    u32 unk08;
    WindowStatusResult result; /* 0x0c */
    u32 unk14;
    u8 request[1];       /* 0x18 */
};
typedef char AocPollStepLayoutCheck[
    offsetof(AocPollStep, result) == 0x0C &&
    offsetof(AocPollStep, request) == 0x18 && sizeof(AocPollStep) == 0x1C ? 1 : -1];

extern "C" {
// Flush the current frame and dispatch the error detail returned by the request.
void FUN_002b4810(AocMain *main, u32 detail); // IV
void FUN_001764dc(AocMain *main, u32 detail); // Apocalypse
}

#endif
