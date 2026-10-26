#ifndef SHARD_W6_W6MATCH5_QUEUEDREQUEST_H
#define SHARD_W6_W6MATCH5_QUEUEDREQUEST_H

#include "common.h"
#include "classes/WindowStatus.h"
#include <new>

/* The five-word request a queued add-on operation carries: a kind byte, a result/time pair and two
 * words. It starts active (kind 1) with the default result; its destructor does nothing, but makes it
 * a class value that callers pass by hidden reference (copies are plain block copies). */
struct RequestParameters {
    RequestParameters();
    /* An idle request of the given kind. */
    explicit RequestParameters(u8 initialKind) : kind(initialKind), word3(0), word4(0) { result = WindowStatusResult(0); }
    /* A request holding the given five words. */
    RequestParameters(u32 w0, u32 w1, u32 w2, u32 w3, u32 w4)
    {
        word(0) = w0;
        word(1) = w1;
        word(2) = w2;
        word(3) = w3;
        word(4) = w4;
    }
    ~RequestParameters() {}

    /* One of the five words of the request, viewed as plain words. */
    u32 &word(s32 index) { return reinterpret_cast<u32 *>(this)[index]; }
    const u32 &word(s32 index) const { return reinterpret_cast<const u32 *>(this)[index]; }

    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ WindowStatusResult result;
    /* 0x0C */ u32 word3;
    /* 0x10 */ u32 word4;
};
typedef char RequestParametersSizeCheck[sizeof(RequestParameters) == 0x14 ? 1 : -1];
struct QueuedRequestState {
    u8 unk000[0x754];
    u32 flags; // 0x754
    RequestParameters parameters; // 0x758
    u8 unk76c[0x5e4];
    u8 mode; // 0xd50
    u8 unkd51[3];
    u32 argument; // 0xd54
    u32 progress; // 0xd58
};

#endif
