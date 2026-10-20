/* NON_MATCHING: the two stack arguments of FUN_00164b5c are stored int first, float second (retail: float first). */
#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u32 id;
    /* 0x04 */ f32 scale;
    /* 0x08 */ f32 volume;
    /* 0x0C */ u32 target;
} Request;

__softfp int FUN_00164b5c(int arg0, int arg1, u32 target, u32 id, f32 scale, int arg5);
int efctSetSpeed(f32 volume);

/* Sets the volume, issues the request (kind 2, op 0x2b), then resets the volume to 1.0. */
void FUN_00408784(Request *request)
{
    u32 id = request->id;
    f32 scale = request->scale;

    efctSetSpeed(request->volume);
    FUN_00164b5c(2, 0x2b, request->target, id, scale, 2);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
