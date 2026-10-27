/* NON_MATCHING: twin of smt4 FUN_003481ec; configuration and child pointers use exchanged callee-saved registers (retail: config r5, child r4). */
#include "classes/Obj557b38Child.h"
#include "classes/Obj42083c.h"

/* The filter's configuration; the child's color targets start at 0x40. */
struct Obj42083cConfig {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 colorTarget[3];
};

extern "C" void FUN_00415cd8(Obj42083c *filter, Obj42083cConfig *config, u32 flags);

/* Builds the screen filter over `config`: a flat or fading child, the filter itself (allocated for `config`) and its
 * resources (loaded according to `flags`), and pushes the config's color targets into the child. */
extern "C" Obj42083c *FUN_00415be0(Obj42083cConfig *config, u32 flags, s32 fading)
{
    Obj420794Child *child = NULL;
    if (fading != 0) {
        child = new Obj557d28;
    } else {
        child = new Obj557b38;
    }
    Obj42083c *filter = new (reinterpret_cast<u32>(config)) Obj42083c(child);
    FUN_00415cd8(filter, config, flags);
    child->setTarget(config->colorTarget[0], config->colorTarget[1], config->colorTarget[2]);
    return filter;
}
