#include "classes/Obj420794.h"

struct FilterChildVtable {
    /* 0x00 */ void *destroy;
    /* 0x04 */ void *deleteObject;
    /* 0x08 */ void *refreshOffsets;
    /* 0x0C */ void *refreshRects;
    /* 0x10 */ void (*callback)(Obj420794Child *);
};
struct FilterChildState {
    /* 0x00 */ FilterChildVtable *vtable;
};
struct FilterChildOwner {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ FilterChildState *child;
};

/* Invoke the child filter's virtual callback. */
extern "C" void filterDispatchChildCallback(FilterChildOwner *filter)
{
    filter->child->vtable->callback(reinterpret_cast<Obj420794Child *>(filter->child));
}
