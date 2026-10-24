#include "common.h"

struct Request002f98fc {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u16 kind;
};

extern "C" {

void *resourceResolveHeaderPointer(Request002f98fc *request);
void effPolyRingCreate(u32 kind, void *header);

/* Creates a poly ring effect for the request. */
void FUN_002f98fc(Request002f98fc *request)
{
    effPolyRingCreate(request->kind, resourceResolveHeaderPointer(request));
}

} /* extern "C" */
