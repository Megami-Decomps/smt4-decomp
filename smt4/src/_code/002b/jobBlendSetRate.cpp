#include "shard/W6_W6Match2_JobBlend.h"

// Select the blend rate, keeping the three special job kinds at full rate.
extern "C" void jobBlendSetRate(u32 job, s32 fullRate)
{
    JobBlendWork* work = reinterpret_cast<JobBlendWork *>(jobGetWork(job));
    if (fullRate != 0) {
        work->blend = 1.0f;
    } else {
        work->blend = 0.5f;
    }
    if (work->kind == 0xfc97 || work->kind == 0xfc96 || work->kind == 0xfc95) {
        work->blend = 1.0f;
    }
}
