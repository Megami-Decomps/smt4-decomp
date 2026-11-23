#include "addon/SceneResource.h"

extern "C" {
extern SceneResourceWork *g_sceneResourceWork;

/* The AOC process's end callback: marks the scene ready to release and, if it still owns its AocMenu, shuts the
 * AOC system down and destroys the menu. */
void sceneResourceShutdownAoc(void)
{
    sceneResourceRelease(g_sceneResourceWork);
}

} /* extern "C" */
