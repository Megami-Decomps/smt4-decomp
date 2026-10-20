/* Closes one request on the fade overlay; the last close kills its task and frees it. */
#include "common.h"
#include "camp/UIFade/UIFade.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobStop(u32 task, int flags);     /* kill a task */

extern UIFadeGlobals g_uiFade;

void uiFadeClose(void)
{
    UIFadeWork *fade;

    g_uiFade.users--;
    if (g_uiFade.users <= 0) {
        fade = g_uiFade.work;
        jobStop(fade->task, 0);
        asdMemFree(fade);
        g_uiFade.work = NULL;
        g_uiFade.users = 0;
    }
}

} /* extern "C" */
