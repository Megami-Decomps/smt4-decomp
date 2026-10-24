#include "addon/aocMain.h"
#include "shard/W6_W6Match5_SelectionTransition.h"

extern "C" {
extern AocMain *g_aocMain;
u32 systemKeyboardReadUtf8(AocMain *main, char *output, const u16 *hint, u32 capacity, s32 password, s32 filter, void *requestOption);
void multibyteToUtf16(u16 *destination, const char *source, u32 capacity);
void FUN_00233db8(SelectionTransition *transition, u32 request);
void FUN_0023392c(SelectionTransition *transition, u32 selection, s32 mode);

// Read the add-on code through the numeric software keyboard, retrying after a cancelled input.
void FUN_0038efb8(SelectionTransition *transition)
{
    // These text buffers lie in the shared main block's byte-aligned padding.
    struct InputBuffers {
        u8 prefix[0x694];
        union { char text[64]; u32 words[16]; } multibyte;
        u16 wide[64];
    };
    typedef char InputBufferOffsets[offsetof(InputBuffers, multibyte) == 0x694 && offsetof(InputBuffers, wide) == 0x6d4 ? 1 : -1];
    if (transition->progress == 0) {
        transition->progress = 1;
    } else if (transition->progress == 1) {
        InputBuffers *input = reinterpret_cast<InputBuffers *>(g_aocMain);
        for (s32 index = 0; index < 16; ++index)
            input->multibyte.words[index] = 0;
        if (!systemKeyboardReadUtf8(g_aocMain, input->multibyte.text,
                reinterpret_cast<const u16 *>(L"16\u30b1\u30bf\u306e\u756a\u53f7\u5165\u529b\u30c6\u30b9\u30c8"),
                16, 0, 1, input->wide)) {
            transition->timer = 3;
            transition->progress = 2;
            return;
        }
        input = reinterpret_cast<InputBuffers *>(g_aocMain);
        multibyteToUtf16(input->wide, input->multibyte.text, 64);
        transition->state = 14;
        transition->progress = 0;
        if (transition->resource) {
            transition->resource->vtable->release(transition->resource);
            transition->resource = 0;
        }
        FUN_00233db8(transition, 0);
        FUN_0023392c(transition, -1, 0);
    } else if (transition->progress == 2 && --transition->timer <= 0) {
        TransitionResource *resource = transition->resource;
        transition->state = 6;
        transition->progress = 0;
        if (resource) {
            resource->vtable->release(resource);
            transition->resource = 0;
        }
    }
}
}
