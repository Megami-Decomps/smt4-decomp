/* NON_MATCHING: stores and loads match; only the constant registers (retail r1-r3 with r0 held for the request address) differ, as in FUN_0040ab9c. */
#include "classes/Obj557d00.h"
#include "Model/MoriModelContent.h"

struct LookupRequest {
    void *key;    // 0x00
    u8 enabled;   // 0x04
    u32 minValue; // 0x08
    u32 maxValue; // 0x0c
    u32 step;     // 0x10
    u8 flag;      // 0x14

    LookupRequest() : key(NULL), enabled(0), minValue(0x30000),
        maxValue(0x10000), step(0x10000), flag(0) {}
};

extern "C" {

Obj557d00 *FUN_001581dc(LookupRequest *request);

void FUN_0040a9fc(MoriModelContent *content)
{
    if (content->file == NULL) {
        return;
    }
    LookupRequest request;
    request.key = content->file;
    request.minValue = content->requestFirst;
    request.maxValue = content->requestSecond;
    request.flag = content->requestMode;
    content->resource = FUN_001581dc(&request);
}

} /* extern "C" */
