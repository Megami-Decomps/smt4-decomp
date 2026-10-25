/* nn::Result as returned by the 3DS SDK: a 32-bit code whose top bit marks failure. */
#ifndef NN_RESULT_H
#define NN_RESULT_H

#include "common.h"

#ifdef __cplusplus
namespace nn {
class Result {
public:
    Result() : value(0xE7E3FFFFu) {}
    Result(u32 code) : value(code) {}
    operator u32() const { return value; }

private:
    u32 value;
};
typedef char ResultSizeCheck[sizeof(Result) == sizeof(u32) ? 1 : -1];
}
#endif

static __inline bool nnResultIsFailure(s32 result)
{
    bool failed = ((u32)result >> 31) != 0;

    return failed;
}

static __inline bool nnResultIsSuccess(s32 result)
{
    return (s32)(result & 0x80000000) >= 0;
}

/* Result layout: description in bits 0-9, module in bits 10-17. */
static __inline u32 nnResultModule(u32 result)
{
    return (result & 0x3fc00) >> 10;
}

static __inline int nnResultDescription(u32 result)
{
    return result & 0x3ff;
}

/* True when the result's description is something other than `description` (e.g. not a timeout). */
static __inline bool nnResultDescriptionIsNot(u32 result, u32 description)
{
    bool differs = (result & 0x3ff) != description;

    return differs;
}

/* True for a failure whose summary field (bits 21-26) is not `summary`. */
static __inline bool nnResultIsFailureExceptSummary(u32 result, u32 summary)
{
    return (result & 0x7e00000) != (summary << 21) && nnResultIsFailure(result);
}

/* A result code seen through its fields, for tests the SDK compiled as bitfield compares. */
union nnResultFields {
    s32 value;
    struct {
        u32 description : 10;
        u32 module : 8;
        u32 rest : 14;
    } fields;
};

#endif
