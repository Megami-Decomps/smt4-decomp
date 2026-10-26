#include "common.h"
struct ModelState { u32 unk00; u32 flags; u8 unk08[508]; u32 value; s16 selection; };
/* Clears `mask` in the model's flags. */
static __inline void modelClearFlags(ModelState *model, u32 mask) { model->flags &= ~mask; }

/* Clears the model's pending flag and resets its selection. */
extern "C" void FUN_003fd790(ModelState *model) { modelClearFlags(model, 4); model->value=0; model->selection=-1; }
