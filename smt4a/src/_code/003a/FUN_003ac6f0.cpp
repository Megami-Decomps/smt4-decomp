#include "common.h"

struct Request003ac6f0 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u16 kind;
};

extern "C" {

void *resourceResolveHeaderPointer(Request003ac6f0 *request);
void effPolyThunderCreate(u32 kind, void *header);

/* Creates a poly thunder effect for the request. */
void FUN_003ac6f0(Request003ac6f0 *request)
{
    effPolyThunderCreate(request->kind, resourceResolveHeaderPointer(request));
}

} /* extern "C" */
