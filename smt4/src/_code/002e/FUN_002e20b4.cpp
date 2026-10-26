#include "common.h"
#include "shard/JobWork.h"

extern "C" {

extern int jobIsValid(void);
extern int eventTexGetCurrentOrInvalid(void);

struct EventTexJobWork {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ u8 unk94;
};

void FUN_002e20b4(void)
{
    int slot = eventTexGetCurrentOrInvalid();
    EventTexJobWork *work;

    if ((slot != -1) && (jobIsValid() != 0)) {
        work = reinterpret_cast<EventTexJobWork *>(jobGetWork(slot));
        work->unk94 = 0;
    }
}

} /* extern "C" */
