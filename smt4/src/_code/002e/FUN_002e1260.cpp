/* NON_MATCHING: Animation policy selection is complete; first-column lookup folds to MUL rather than retail inlined zero-column MLA and uses different load scheduling. */
#include "common.h"

struct AnimationPolicyState {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4C */ void (*policy)();
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ u8 enabled;
};
struct AnimationPolicyTable {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ AnimationPolicyState **states;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ s32 columns;
};
struct AnimationPolicyModel {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ AnimationPolicyTable *table;
    /* 0x02C */ u8 unk02c[0x124];
    /* 0x150 */ s32 ready;
    /* 0x154 */ s32 row;
};
struct AnimationPolicyOwner {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ AnimationPolicyModel *model;
    /* 0x30 */ u8 unk30[0x38];
    /* 0x68 */ s32 count;
};
extern "C" void FUN_00155650();
extern "C" void nw_anim_PlayPolicy_Loop();

/* Enable the first animation in the active row and choose its play policy. */
extern "C" void FUN_002e1260(AnimationPolicyOwner *owner, s32 loop)
{
    if (owner->count > 0) {
        AnimationPolicyModel *model = owner->model;
        if (model->ready != 0) {
            AnimationPolicyState *state = model->table->states[model->row * model->table->columns];
            if (state != NULL) {
                state->enabled = 1;
                state->policy = loop == 0 ? FUN_00155650 : nw_anim_PlayPolicy_Loop;
            }
        }
    }
}
