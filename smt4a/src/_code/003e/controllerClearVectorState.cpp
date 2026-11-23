/* Built with the unit's cflags (-O2 -Otime). */
#include "common.h"

extern "C" {

struct VectorBlock { f32 values[6]; u32 state; };
struct Owner { u8 unk0000[0x1ee0]; VectorBlock block; };

void controllerClearVectorState(Owner *owner)
{
    VectorBlock *block = &owner->block;
    block->values[0] = 0.0f;
    block->values[1] = 0.0f;
    block->values[2] = 0.0f;
    block->values[3] = 0.0f;
    block->values[4] = 0.0f;
    block->values[5] = 0.0f;
    block->state = 0;
}

} /* extern "C" */
