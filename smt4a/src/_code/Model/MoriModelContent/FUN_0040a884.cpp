/* NON_MATCHING: constant-register allocation only, as in FUN_0040a9a0 (retail uses r2/r3/ip for the request defaults and keeps r0 for the request address, saves r5 for the resource); stores, loads and calls match. */
#include "common.h"
#include <new>
#include "classes/Obj557b58.h"
#include "Model/MoriModelContentLoad.h"

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

u32 FUN_001581dc(const ModelResourceRequest *request);

extern char DAT_00526000[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

/* Content constructor: loads the model resource with the content's request options, then creates its binding object (MoriModelContent.cpp line 251). */
void FUN_0040a884(MoriModelContentLoad *content, u32 id)
{
    ModelResourceRequest request;
    request.id = id;
    request.first = content->unk18;
    request.second = content->unk1C;
    request.mode = content->unk14;
    u32 resource = FUN_001581dc(&request);
    content->unk0C = resource;

    Obj557b58 *binding = new (DAT_00526000, 0xfb) Obj557b58(resource);
    content->binding = reinterpret_cast<MoriModelBinding *>(binding);
}

} /* extern "C" */
