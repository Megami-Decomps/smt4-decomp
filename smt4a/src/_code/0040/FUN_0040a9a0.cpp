/* NON_MATCHING: constructor defaults are preserved, but constant registers and subsequent owner-field loads are allocated differently. */
#include "classes/Obj557d00.h"
#include "Model/MoriModelContent.h"

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

extern "C" {
Obj557d00 *FUN_001581dc(const ModelResourceRequest *);

// Create a resource using this content's request options and retain the returned object.
void FUN_0040a9a0(MoriModelContent *content, u32 id)
{
    ModelResourceRequest request;
    request.id = id;
    request.first = content->requestFirst;
    request.second = content->requestSecond;
    request.mode = content->requestMode;
    content->resource = FUN_001581dc(&request);
}
}
