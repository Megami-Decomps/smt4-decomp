/* NON_MATCHING: recovered float arguments use different VFP save registers and split cache stores instead of one block store. */
#include "gfx/TextureDrawState.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
u32 *gfxAppendTextureUnitPacket(void *state, u32 *commands, const AsdTexture *texture);
void FUN_001adf78(TextureDrawState *state, u32 *commands,
                  const Vector4 *firstVector, const Vector4 *secondVector,
                  const Vector4 *thirdVector, const Vector4 *fourthVector,
                  f32 first, f32 second, f32 third, f32 fourth, f32 fifth,
                  f32 sixth, f32 seventh, f32 eighth, f32 ninth, f32 defaultValue);

void FUN_0019f678(TextureDrawState *state, const AsdTexture *texture,
                  const Vector4 *firstVector, const Vector4 *secondVector,
                  const Vector4 *thirdVector, const Vector4 *fourthVector,
                  f32 first, f32 second, f32 third, f32 fourth, f32 fifth,
                  f32 sixth, f32 seventh, f32 eighth, f32 ninth)
{
    u32 *commands = gfxAppendTextureUnitPacket(state, state->commands, texture);
    FUN_001adf78(state, commands, firstVector, secondVector, thirdVector, fourthVector,
                 first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, 0.0f);
    state->parameters[7] = eighth;
    state->parameters[0] = first;
    state->parameters[1] = second;
    state->parameters[2] = third;
    state->parameters[3] = fourth;
    state->parameters[4] = fifth;
    state->parameters[5] = sixth;
    state->parameters[6] = seventh;
    state->vectors[0] = *firstVector;
    state->vectors[1] = *secondVector;
    state->vectors[2] = *thirdVector;
    state->vectors[3] = *fourthVector;
    state->extra = ninth;
    state->defaultValue = 0.0f;
    if (!texture) {
        state->noTexture = 1;
    }
}
}
