/* NON_MATCHING: twin of smt4 FUN_0034c24c; config and child take exchanged callee-saved registers (r4/r5), the same near miss as the twin. */
#include "classes/Obj420990.h"
#include "classes/Obj557b38Child.h"

/* Builds the two-quad filter over `config`: a flat or fading child, the filter itself (allocated for `config`), its
 * vertices and textures (loaded according to `flags`), and pushes the config's color targets into the child. */
extern "C" Obj420990 *FUN_0041d6bc(Obj420990Rects *config, u32 flags, s32 fading)
{
    Obj420794Child *child = NULL;
    if (fading != 0) {
        child = new Obj557d28;
    } else {
        child = new Obj557b38;
    }
    Obj420990 *filter = new (reinterpret_cast<u32>(config)) Obj420990(child);
    filter->initialize(config, flags);
    child->setTarget(config->colorTarget[0], config->colorTarget[1], config->colorTarget[2]);
    return filter;
}
