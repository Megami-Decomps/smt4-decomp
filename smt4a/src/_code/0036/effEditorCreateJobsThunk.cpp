#include "common.h"

extern "C" {

u32 effEditorCreateJobs(void);

/* Forwards to effEditorCreateJobs (the tail call falls through to the next function). */
u32 effEditorCreateJobsThunk(void)
{
    return effEditorCreateJobs();
}

} /* extern "C" */
