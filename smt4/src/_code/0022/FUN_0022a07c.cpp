#include "common.h"
#include "addon/aocMain.h"
#include "script/scrScriptProcess.h"

namespace {

struct AocRequestView {
    u32 status;           // 0x00
    u32 unk04;            // 0x04
    void* unk08;          // 0x08
    void* unk0C;          // 0x0C
    void* unk10;          // 0x10
    ScriptProcess* result; // 0x14
};

}

extern "C" {
void asdMemFree(void* allocation);

// Consume completion flags, releasing failed requests or recording the constructed result.
u32 FUN_0022a07c(AocRequestView* request)
{
    if (aocMainTakeCancel()) {
        request->status = 1;
        if (request->unk08) {
            asdMemFree(request->unk08);
            request->unk08 = 0;
        }
        if (request->unk0C) {
            asdMemFree(request->unk0C);
            request->unk0C = 0;
        }
        if (request->unk10) {
            asdMemFree(request->unk10);
            request->unk10 = 0;
        }
        return 0;
    }

    ScriptProcess* result = scrScriptProcessCreate(request->unk10, request->unk0C);
    request->result = result;
    result->mode = 2;
    request->status = 0;
    return 0;
}
}
