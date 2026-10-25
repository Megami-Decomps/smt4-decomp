/* NON_MATCHING: retail reaches the locked/alternate bytes through a second anchor pointer (job + 0x1400, offsets 0x8c/0x94) and loads the target through a literal-pool offset; this build adds the offsets separately */
#include "shard/JobWork.h"
#include "ui/FrameTex.h"

extern "C" {

struct FrameCaptureWorkA : FrameWorkA {
    /* 0x1490 */ void *target;
    /* 0x1494 */ u8 alternate;
};
typedef char FrameCaptureWorkATargetOffsetCheck[
    offsetof(FrameCaptureWorkA, target) == 0x1490 &&
    offsetof(FrameCaptureWorkA, alternate) == 0x1494 ? 1 : -1];
extern void FUN_001509fc(s32 arg);
extern void FUN_001537b0(void);

/* Per-frame check: when the job is active, ready and armed and has a target that is not locked, runs FUN_001537b0 (or FUN_001509fc(1) without the alternate flag); returns 0. */
s32 FUN_0013c660(u32 handle)
{
    FrameCaptureWorkA *job = reinterpret_cast<FrameCaptureWorkA *>(jobGetWork(handle));

    if (job->unkFA4 != 0 && job->unk0FA5[0] != 0 && job->unkFAD != 0 &&
        job->target != NULL && job->unk148C == 0) {
        if (job->alternate != 0) {
            FUN_001537b0();
        } else {
            FUN_001509fc(1);
        }
    }
    return 0;
}

} /* extern "C" */
