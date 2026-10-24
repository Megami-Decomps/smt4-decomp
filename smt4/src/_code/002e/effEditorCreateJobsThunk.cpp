#include "common.h"

extern "C" {

u32 effEditorCreateJobs(void);

void effEditorCreateJobsThunk(void)
{
    effEditorCreateJobs();
}

} /* extern "C" */
