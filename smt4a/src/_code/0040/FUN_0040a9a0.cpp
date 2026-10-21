/* NON_MATCHING: constructor defaults are preserved, but constant registers and subsequent owner-field loads are allocated differently. */
#include "common.h"

struct ModelResource;
struct ModelResourceRequest {
    u32 id; // 0x00
    u8 option; // 0x04
    u8 unk05[3];
    u32 first; // 0x08
    u32 second; // 0x0c
    u32 third; // 0x10
    u8 mode; // 0x14
    u8 unk15[3];

    ModelResourceRequest()
        : option(0), first(0x30000), second(0x10000), third(0x10000), mode(0) {}
};
struct ModelResourceOwner {
    u8 unk00[0x0c];
    ModelResource *resource; // 0x0c
    u32 unk10;
    u32 mode; // 0x14
    u32 first; // 0x18
    u32 second; // 0x1c
};

extern "C" {
ModelResource *FUN_001581dc(const ModelResourceRequest *);

// Create a resource using this owner's request options and retain the returned object.
void FUN_0040a9a0(ModelResourceOwner *owner, u32 id)
{
    ModelResourceRequest request;
    request.id = id;
    request.first = owner->first;
    request.second = owner->second;
    request.mode = owner->mode;
    owner->resource = FUN_001581dc(&request);
}
}
