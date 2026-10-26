/* NON_MATCHING: the unsigned mesh-count loop counter stops armcc unrolling the loops (as in retail); remaining: the table pointer lives in r1 in retail, null-checked conversions use `addsne` where this build emits addne+cmp, max compare operands are swapped, and no nop after the allocation test. */
#include "classes/Obj557b18.h"
#include <new>

extern "C" {
void *FUN_00178b04(u32 size, const char *file, u32 line);
void FUN_003fdd1c(ModelUnitBuffers *unit, void *part);
void moriModelUnitAllocateChannels(ModelUnitBuffers *unit);
void FUN_003fe90c(UnitChannel *channel, s32 count);
void nn_math_ARMv6_MTX34CopyAsm(nw::math::MTX34 *dest, const nw::math::MTX34 *source);
}

/* The largest element count among a unit's meshes. */
static __inline s32 maxElementCount(UnitMeshDescriptor **meshes, u16 count)
{
    s32 largest = 0;
    for (u32 index = 0; index < count; ++index) {
        s32 elements = meshes[index]->elementCount;
        if (largest < elements) {
            largest = elements;
        }
    }
    return largest;
}

void Obj557b18::attachContent(UnitModelContent *content, u32 partIndex)
{
    /* The unit's channels and content pointer, as ModelUnitBuffers names them. */
    ModelUnitBuffers *unit = reinterpret_cast<ModelUnitBuffers *>(this);
    if (partIndex < content->view.table->partCount) {
        FUN_003fdd1c(unit, content->view.table->parts[partIndex]);
    }
    unit->content = content;
    moriModelUnitAllocateChannels(unit);
    UnitModelView *view = unit->content == NULL ? NULL : &unit->content->view;
    if (view != NULL) {
        FUN_003fe90c(&unit->channelsB[0], maxElementCount(view->table->meshesB, view->table->countB));
    }
    view = unit->content == NULL ? NULL : &unit->content->view;
    if (view != NULL) {
        FUN_003fe90c(&unit->channelsB[1], maxElementCount(view->table->meshesC, view->table->countC));
    }
    if (content->extra != NULL && content->extra->count > 0) {
        void *memory = FUN_00178b04(0x24, "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelUnit.cpp", 0x5d);
        unit->extra = new (memory) ModelUnitExtra(content->extra, unit);
    }
    nn_math_ARMv6_MTX34CopyAsm(&unit->matrix, &nw::math::MTX34::Identity());
}
