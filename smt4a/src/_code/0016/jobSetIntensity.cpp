#include "shard/W6_W6Match2_JobBlend.h"

// Dim ordinary jobs, but keep the three special kinds at full intensity.
extern "C" void jobSetIntensity(u32 job, s32 fullIntensity)
{
    JobBlendWork* work = reinterpret_cast<JobBlendWork *>(jobGetWork(job));
    if (fullIntensity != 0)
        work->factor = 1.0f;
    else
        work->factor = 0.5f;

    if (work->kind == 0xfc97 || work->kind == 0xfc96 || work->kind == 0xfc95)
        work->factor = 1.0f;
}
