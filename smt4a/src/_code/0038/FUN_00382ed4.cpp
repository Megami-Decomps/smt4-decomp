#include "common.h"

struct RingRequest {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u16 kind;
};

extern "C" {

void *resourceResolveHeaderPointer(const RingRequest *record);
void *effPolyRingCreate(u32 kind, void *header);

/* Creates the poly-ring effect from the request's kind and its resolved header. */
void *FUN_00382ed4(RingRequest *request)
{
    return effPolyRingCreate(request->kind, resourceResolveHeaderPointer(request));
}

} /* extern "C" */
