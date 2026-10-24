/* NON_MATCHING: identical except register numbering (retail keeps the config in r5 and the child in r4, this build the reverse) and the callee symbol, which names the initialize member with a malformed mangling (see rename request). */
#include "classes/Obj420990.h"
#include "classes/Obj420708.h"
#include "classes/Obj420880.h"

/* Builds the two-quad filter over `config`: a flat or fading child, the filter itself (allocated for `config`), its
 * vertices and textures (loaded according to `flags`), and pushes the config's color targets into the child. */
extern "C" Obj420990 *FUN_0034c24c(Obj420990Rects *config, u32 flags, s32 fading)
{
    Obj420794Child *child = NULL;
    if (fading != 0) {
        child = new Obj420880;
    } else {
        child = new Obj420708;
    }
    Obj420990 *filter = new (reinterpret_cast<u32>(config)) Obj420990(child);
    filter->initialize(config, flags);
    child->setTarget(config->colorTarget[0], config->colorTarget[1], config->colorTarget[2]);
    return filter;
}
