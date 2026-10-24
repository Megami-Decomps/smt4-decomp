/* NON_MATCHING: compiler shares a root+0x400 base for scalar stores instead of retail's separate vector bases; VSTM address setup/scheduling differs. */
#include "shard/W5_W5Match1_RecordKeys.h"

struct ElementVectorState {
    u8 elements[8][0x70];
    u8 unk380[0x329];
    u8 active;
    u8 unk6aa[6];
    Vector4 first;
    Vector4 second;
    u8 unk6d0[0x30];
    u8 enabled;
};


extern "C" {
void FUN_0045b580(void *element);
void *__aeabi_vec_ctor_nocookie_nodtor(u8 *begin, void (*visit)(void *), u32 stride, u32 count);


ElementVectorState *_ZN16MoriSceneElementC1Ev(ElementVectorState *state)
{
    state = (ElementVectorState *)__aeabi_vec_ctor_nocookie_nodtor(&state->elements[0][0], FUN_0045b580,
        sizeof(state->elements[0]), sizeof(state->elements) / sizeof(state->elements[0]));
    state->first.x = 0.0f;
    state->first.y = 0.0f;
    state->first.z = 0.0f;
    state->first.w = 1.0f;
    state->second.x = 0.0f;
    state->second.y = 0.0f;
    state->second.z = 0.0f;
    state->second.w = 1.0f;
    state->enabled = 0;
    state->active = 0;
    return state;
}

} /* extern "C" */
