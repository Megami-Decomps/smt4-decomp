/* Applies `time` to the owner's model: FUN_0028703c, modelEvaluateFirstScalarChannel, then FUN_002101cc
 * (placed right after, so the last call is a linker NOP). */
#include "common.h"
#include "code/Code0021_Smt4.h"

struct ModelOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *model;
};

extern "C" {
void FUN_0028703c(void *model, f32 time);
void modelEvaluateFirstScalarChannel(void *model, f32 time);
void FUN_002101cc(void *model, f32 time);

void FUN_00210194(ModelOwner *owner, f32 time)
{
    FUN_0028703c(owner->model, time);
    modelEvaluateFirstScalarChannel(owner->model, time);
    FUN_002101cc(owner->model, time);
}
}
