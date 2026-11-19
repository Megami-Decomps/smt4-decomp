#include "common.h"

extern "C" {

extern int DAT_00435ce8; /* 0x435ce8 */

extern u32 jobGetWork(void);
extern int btlEditorDrawGuides(int editor, u32 work);

/* Passes the job work to the battle editor if one is active; returns its result, or 0 with none. */
int battleEditorRunForJob(void)
{
    u32 work = jobGetWork();

    if (DAT_00435ce8 != 0) {
        return btlEditorDrawGuides(DAT_00435ce8, work);
    }
    return 0;
}

} /* extern "C" */
