/* NON_MATCHING: STRD for the argument header now matches; retail clears `pending` (strb) before the strd and materialises the zero before the ~0, ours stores in the opposite order. */
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

void sysClearCachedFlag();
void FUN_00239b10(s32 mode);

/* Consumes a pending sequence request and forwards its packed arguments. */
s32 FUN_0047dc50(SequenceRequestState *request)
{
    if (!request->pending)
        return 0;
    SequenceArguments arguments;
    arguments.sequence = request->sequence;
    arguments.flags = ~0u;
    request->pending = 0;
    for (u32 index = 0; index < 6; ++index)
        arguments.values[index] = request->arguments[index];
    sysClearCachedFlag();
    FUN_00239b10(2);
    asdSequenceRequest(4, &arguments, 32);
    return 1;
}

}
