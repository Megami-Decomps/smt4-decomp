/* NON_MATCHING: retail materialises the zero for `pending` before the ~0 and clears it (strb) before the strd of the argument header; ours stores in the opposite order. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

__packed struct SequenceRequestState {
    /* 0x00 */ u8 unk00[26];
    /* 0x1a */ u8 pending;
    /* 0x1b */ u8 unk1b;
    /* 0x1c */ s16 sequence;
    /* 0x1e */ u32 arguments[6];
    /* 0x36 */ u8 mode;
};

struct SequenceArguments {
    s32 sequence;
    u32 flags;
    u32 values[6];
};

extern "C" {

void sequenceRequestClearDeferred();
void gameRestoreWorkSave(s32 mode);

/* Consumes a pending sequence request and forwards its packed arguments. */
s32 FUN_0039440c(SequenceRequestState *request)
{
    if (!request->pending)
        return 0;
    SequenceArguments arguments;
    arguments.sequence = request->sequence;
    arguments.flags = ~0u;
    request->pending = 0;
    for (u32 index = 0; index < 6; ++index)
        arguments.values[index] = request->arguments[index];
    sequenceRequestClearDeferred();
    gameRestoreWorkSave(2);
    asdSequenceRequest(4, &arguments, 32);
    return 1;
}

}
