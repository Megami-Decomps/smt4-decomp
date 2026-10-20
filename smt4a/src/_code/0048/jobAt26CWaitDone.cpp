#include "shard/Shard0048.h"

extern "C" {

typedef struct JobAt26C {
    /* 0x000 */ u8 unk000[0x26C];
    /* 0x26C */ u32 job;
} JobAt26C;

extern s32 FUN_00224880(u32 job);
extern void stateSetterEnterState(JobAt26C *obj, s32 state);
extern void sysPlaySe(u32 id);

/* Once the job reports 2, switches to state 2 and plays sound 0x97. */
void jobAt26CWaitDone(JobAt26C *obj)
{
    if (FUN_00224880(obj->job) == 2) {
        stateSetterEnterState(obj, 2);
        sysPlaySe(0x97);
    }
}

} /* extern "C" */
