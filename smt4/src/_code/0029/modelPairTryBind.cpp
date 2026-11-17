#include "shard/X14_ModelPair.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/scrScriptProcess.h"

extern "C" {

s32 resourceFindActiveIndex(s32 kind);

/* Binds the owner's model to its target once everything and both table 40 textures are loaded;
 * returns 1 when ready. */
u32 modelPairTryBind(ModelPairOwner *owner)
{
    s32 count;
    s32 i;

    if (owner->model == NULL || owner->target == NULL || owner->resource == NULL) {
        return 0;
    }
    if (resourceFindActiveIndex(20) == 0 || resourceFindActiveIndex(37) == 0) {
        return 0;
    }
    count = 0;
    for (i = 0; i < 2; i++) {
        if (asdTMTexTableNodeIsLoaded(40, i) != 0) {
            count++;
        }
    }
    if (count < 2) {
        return 0;
    }
    if (owner->bound == NULL) {
        owner->bound = scrScriptProcessCreate(owner->model, owner->target);
        owner->bound->mode = 0;
    }
    return 1;
}

} /* extern "C" */
