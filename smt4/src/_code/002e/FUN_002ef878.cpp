/* NON_MATCHING: retail keeps the cleared busy value in r5 (mov r5, #0 after the query call) and stores the busy flag after the state compare; the build stores it first and materialises 0 at the end */
/* Starts the save/load thread's step for a request: marks the thread busy and, for a request in state 1, finishes the
 * pending query; the busy flag is cleared again unless the follow-up reports 1 or 2. */
#include "common.h"

extern "C" {
/* State of the save/load thread. */
struct SaveLoadThreadState {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 busy;
};

/* The request being processed. */
struct SaveLoadRequest {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 state;
};

extern SaveLoadThreadState g_saveLoadThread;
s32 FUN_001041c8(void);
void FUN_00103d48(void);
s32 processQueryAndFinish(s32 query, s32 first, s32 second);
s32 FUN_002103dc(s32 query, s32 first, s32 second);

void FUN_002ef878(SaveLoadRequest *request)
{
    g_saveLoadThread.busy = 1;
    if (request->state == 1) {
        if (FUN_001041c8() != 0) {
            FUN_00103d48();
        }
        s32 result = processQueryAndFinish(6, 0, 0);

        if ((s32)(result & 0x80000000) >= 0) {
            s32 status = FUN_002103dc(6, 0, 0);

            if (status == 1 || status == 2) {
                return;
            }
        }
        g_saveLoadThread.busy = 0;
    }
}
}
