#ifndef SHARD_W6_W6MATCH5_QUEUEDREQUEST_H
#define SHARD_W6_W6MATCH5_QUEUEDREQUEST_H

#include "common.h"
#include "classes/WindowStatus.h"
#include <new>

/* The five-word request a queued add-on operation carries: a kind byte, a result/time pair and two
 * words. It starts active (kind 1) with the default result; its destructor does nothing, but makes it
 * a class value that callers pass by hidden reference (copies are plain block copies). */
struct RequestParameters {
    /* An active request (kind 1) with the default result: a header inline, which every caller outside AocMenu.cpp
     * expands in place (AocMenu's own requests are AocMenuRequest, classes/AocMenu.h). */
    RequestParameters() : kind(1), word3(0), word4(0) { result = WindowStatusResult(0); }
    /* An idle request of the given kind. */
    explicit RequestParameters(u8 initialKind) : kind(initialKind), word3(0), word4(0) { result = WindowStatusResult(word4); }
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

/* Puts a request back to active (kind 1) with an empty result; the menu, its script return and the mount step all
 * reset a request this way before they give it its kind. */
static __inline void resetRequestOperation(RequestParameters *operation)
{
    operation->kind = 1;
    operation->word3 = 0;
    operation->result = WindowStatusResult(operation->word3);
}

/* The kind of a request that failed with the result it carries. */
enum { REQUEST_KIND_FAILED = 100 };

/* Fails a request with `result`. The result is a value parameter: the menu's steps read the failed pair before
 * they store the kind (AocMenu::runMainProcess, runResultProcess and pollContentStatus, both games). */
static __inline void failRequestOperation(RequestParameters *operation, WindowStatusResult result)
{
    operation->kind = REQUEST_KIND_FAILED;
    operation->result = result;
}

#endif
