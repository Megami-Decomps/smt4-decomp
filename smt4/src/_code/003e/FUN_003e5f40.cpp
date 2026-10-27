/* NON_MATCHING: typed rewrite (35 vs 33 rows); retail hoists the 0x7e1 flag constant into r5 before the identity call (and pushes r5/r6), this build loads it after. The fallback transform is the unnamed function-local static at 0x4efdf4, initialised by hand. */
#include "gfx/TransformSource.h"

extern "C" {
extern u32 DAT_00476640;
extern TransformDefault DAT_004efdf4;
int __cxa_guard_acquire(u32 *guard);
const nw::math::MTX34 *FUN_002ac94c(void);
void nn_math_ARMv6_MTX34CopyAsm(nw::math::MTX34 *output, const nw::math::MTX34 *input);

/* Builds the default: a copy of the identity matrix, unit scale and the default flags. */
static void initDefault(TransformDefault *self)
{
    nn_math_ARMv6_MTX34CopyAsm(&self->matrix, FUN_002ac94c());
    self->scaleX = 1.0f;
    self->scaleY = 1.0f;
    self->scaleZ = 1.0f;
    self->flags = 0x7e1;
}

/* The node's transform: the source's own when it has one, otherwise the shared default. */
const TransformDefault *FUN_003e5f40(TransformSourceNode *node)
{
    if (node->source != NULL) {
        return node->source->getInverseTransform();
    }
    if ((DAT_00476640 & 1) == 0 && __cxa_guard_acquire(&DAT_00476640) != 0) {
        initDefault(&DAT_004efdf4);
    }
    return &DAT_004efdf4;
}
}
