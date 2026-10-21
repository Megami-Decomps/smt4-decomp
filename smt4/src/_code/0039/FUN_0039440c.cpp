/* NON_MATCHING: retail loads the sequence before clearing pending and uses STRD for the argument header; armcc reorders and uses separate stores. */
#include "common.h"

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

void FUN_0027db90();
void FUN_00285ca4(s32 mode);
void asdSequenceRequest(s32 kind, const SequenceArguments *arguments, u32 size);

/* Consumes a pending sequence request and forwards its packed arguments. */
s32 FUN_0039440c(SequenceRequestState *request)
{
    if (!request->pending)
        return 0;
    SequenceArguments arguments;
    request->pending = 0;
    arguments.sequence = request->sequence;
    arguments.flags = ~0u;
    for (u32 index = 0; index < 6; ++index)
        arguments.values[index] = request->arguments[index];
    FUN_0027db90();
    FUN_00285ca4(2);
    asdSequenceRequest(4, &arguments, 32);
    return 1;
}

}
