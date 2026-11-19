#include <stdio.h>
#include "ui/DummyAttachmentWork.h"
#include "script/scrScriptProcess.h"

extern "C" {
void modelGetBoneTranslationByName(AsdMdlNode *, const char *, f32 *);
void FUN_002c159c(void *camera, f32 first, f32 second);
u32 asdCameraGetSavedRenderPairs(void);

// Place both sets of markers at the six named dummy points of the source model.
void FUN_003846e8(DummyAttachmentWork *work)
{
    char name[32];
    f32 position[4];
    if (work->initialized)
        return;
    if (work->mode == 1) {
        u32 camera = asdCameraGetSavedRenderPairs();
        FUN_002c159c(reinterpret_cast<void *>(camera), 0.25f, 0.3f);
        FUN_00298d50(camera);
    }
    work->initialized = 1;
    for (u32 index = 0; index < 6; ++index) {
        sprintf(name, "dummy_npc%d", index + 1);
        if (work->mode != 2) {
            modelGetBoneTranslationByName(work->source->model->node, name, position);
        } else {
            modelGetBoneTranslationByName(work->alternate->node, name, position);
            asdMdlObjectShow(work->alternate);
        }
        nodeSetTranslation(work->primary[index]->node, 0, position);
        nodeSetTranslation(work->secondary[index]->node, 0, position);
    }
}
}
