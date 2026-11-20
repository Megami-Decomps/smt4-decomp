#include "common.h"
#include "shard/W6_W6Match2_TitleCommand.h"
#include "camp/RenderCtxA.h"
#include "code/Code0015.h"
#include "code/Code0014.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

void asdGxCommandListReplayCopy(u32 commandList); // declcheck: local (the title keeps the AsdGxCommandList as a u32 handle)

/* Steps the title scene in stereoscopic 3D while the command list is active: restores the saved
 * render pairs and, unless the command list is disabled, replays the scene list's saved copy. */
u32 titleSceneStep(void)
{
    if (gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.commandActive != 0) {
        if (asdCameraGetSavedRenderPairs() != 0) {
            effectRestoreSavedRenderPairs(g_renderCtx, (void *)asdCameraGetSavedRenderPairs());
        }
        if (g_titleFlags.disabled == 0) {
            asdGxCommandListReplayCopy(g_titleFlags.sceneList);
        }
    }
    return 0;
}

} /* extern "C" */
