#include "common.h"

struct WorkingElement {
    u8 bytes[0x30];
};

struct WorkingVectorView {
    WorkingElement *begin;
    WorkingElement *end;
    u8 unk08[0xac];
    bool active; // 0xb4
};

struct Vector;

extern "C" {
void FUN_0016b824(WorkingVectorView *owner, s32 enabled);
void FUN_0016b8a8(WorkingVectorView *owner, s32 enabled);
void FUN_0016bde0(WorkingVectorView *owner, s32 enabled);
void FUN_0016c058(WorkingVectorView *owner, WorkingElement *element);
void vectorClear(Vector *vector);

// Reset the working state and release each live vector element before clearing it.
void FUN_0016bad8(WorkingVectorView *owner)
{
    owner->active = false;
    FUN_0016bde0(owner, 0);
    FUN_0016b824(owner, 0);
    FUN_0016b8a8(owner, 0);
    WorkingElement *end = owner->end;
    for (WorkingElement *element = owner->begin; element != end; ++element)
        FUN_0016c058(owner, element);
    vectorClear(reinterpret_cast<Vector *>(owner));
}
}
