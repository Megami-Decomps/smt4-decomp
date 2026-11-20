#include "common.h"
#include "code/Code0014.h"

extern "C" {
void FUN_001628c0(const char* name, u32 resource, s32 mode, s32 flags,
                  f32 scaleX, f32 scaleY);
void FUN_0047e690(s32 slot, s32 id, u32 context, f32 scale);

// Selects named resources for the two special IDs and forwards all other IDs.
void FUN_0047f08c(s32 id, u32 context)
{
    if (id == 0x16c) {
        FUN_001628c0("I001029", messageVoiceBankGet(), 2, 0, 0.707f, 0.707f);
    } else if (id == 0x16d) {
        FUN_001628c0("I001030b", messageVoiceBankGet(), 2, 0, 0.707f, 0.707f);
    } else {
        FUN_0047e690(-1, id, context, 1.0f);
    }
}
}
