/* NON_MATCHING: flag load and reset stores are scheduled differently. */
#include "common.h"
struct ModelState { u32 unk00; u32 flags; u8 unk08[508]; u32 value; s16 selection; };
/* Clears the model's pending flag and resets its selection. */
extern "C" void FUN_003fd790(ModelState *model) { model->flags &= ~4u; model->value=0; model->selection=-1; }
