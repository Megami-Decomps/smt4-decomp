#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gfx/PlayerModelParts.h"
#include "ui/DummyAttachmentWork.h"
#include <string.h>

extern "C" {
char *strncpy(char *, const char *, u32);

/* Releases part `index`'s model: hides it and, when its node is live, marks it for destruction. Retail repeats
 * the model's NULL test and recomputes the part's address here, the inlined body of a function of its own. */
static __inline void playerModelReleasePart(PlayerModelParts *player, s32 index)
{
    PlayerModelPart *part = &player->parts[index];
    if (part->model != NULL) {
        part->state = 2;
        asdMdlObjectHide(part->model);
        if (part->model->node->unk0c >= 0)
            asdMdlManagerMarkDestroy(part->model);
    }
}

/* Points equipment part `index` at the model `name`: an unused part starts loading it (asynchronously when
 * allowed), a part holding another model releases it first; the same model is left alone. */
void playerModelLoadSlot(void *owner, s32 index, const char *name, u16 id)
{
    PlayerModelParts *player = (PlayerModelParts *)owner;
    PlayerModelPart *part = &player->parts[index];
    part->id = id;
    if (part->model == NULL) {
        if (player->blocked == 0 && player->asyncEnabled != 0) {
            asdLoadFileAsyncSimple(name, (u32 *)&part->request, 1);
            part->state = 4;
            return;
        }
        part->state = 5;
    } else {
        if (strcmp(part->name, name) == 0)
            return;
        playerModelReleasePart(player, index);
    }
    strncpy(part->name, name, sizeof(part->name));
}
}
