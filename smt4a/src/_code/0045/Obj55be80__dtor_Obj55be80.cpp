/* NON_MATCHING: retail inlines the slot-clear with `this` copied to a second register and the zero hoisted above the vptr store (one extra push); register layout only. */
#include "classes/Obj55be80.h"

/* Drops the active flag and clears every used slot. */
static void clearSlots(Obj55be80 *self)
{
    if (self->unk10E != 0) {
        self->unk10E = 0;
        for (s32 i = 0; i < self->unk10D; ++i) {
            (&self->record0.a)[i] = 0;
            (&self->record1.a)[i] = 0;
            (&self->record2.a)[i * 2] = 0;
            (&self->record2.a)[i * 2 + 1] = 0;
            (&self->record4.a)[i] = 0;
        }
    }
}

Obj55be80::~Obj55be80()
{
    clearSlots(this);
    if (unk30 != 0) {
        unk30 = 0;
    }
}
