/* NON_MATCHING: the VFP size and coordinate conversions schedule differently, and the build pairs
 * the x/y stores that retail emits separately. */
#include "shard/W6_W6Match8_SpriteTextureResource.h"
#include "gfx/SpriteGroupDrawState.h"
#include "shard/W6_W6Match7_SpriteGroups.h"

extern "C" void FUN_00256dbc(SpriteGroupPlayer *player, SpriteGroupDrawState *out)
{
    SpriteGroupState *state = player->states;
    SpriteTextureResource *resource = (SpriteTextureResource *)player->resource;
    SpriteGroupDefinition *definition = state->definition;
    if (definition->kind & 0x10000000)
        return;
    if (state->frameCount <= 0) {
        ++state->frame;
        if ((u32)state->frame >= definition->count) {
            if (!(definition->kind & 0x10)) {
                state->frame = 0;
            } else {
                player->active = 0;
                state->frame = definition->count - 1;
            }
        }
        state->frameCount = state->data[state->frame].frameCount;
    } else {
        --state->frameCount;
    }
    const SpriteGroupData *frame = &state->data[state->frame];
    if (definition->kind & 1)
        out->optionalValue = ((f32 *)(resource->group.data + definition->unk04))[state->frame];
    else
        out->optionalBits = ~0u;
    AsdTexture *texture = resource->textures[frame->texture];
    f32 textureWidth = (f32)texture->dimensions.width;
    f32 textureHeight = (f32)texture->dimensions.height;
    if (definition->kind & 2)
        out->mode = 2;
    else if (definition->kind & 4)
        out->mode = 3;
    else
        out->mode = 1;
    out->value = frame->value;
    f32 half = 0.5f;
    f32 halfWidth = (f32)frame->width * half;
    f32 halfHeight = (f32)frame->height * half;
    f32 originX = (f32)frame->originX;
    f32 originY = (f32)frame->originY;
    out->u1 = (f32)(frame->u1 >> 4) / textureWidth;
    out->v1 = (f32)(frame->v1 >> 4) / textureHeight;
    out->u2 = (f32)(frame->u2 >> 4) / textureWidth;
    out->v2 = (f32)(frame->v2 >> 4) / textureHeight;
    out->x = halfWidth - originX;
    out->y = halfHeight - originY;
    out->textureWidth = textureWidth;
    out->textureHeight = textureHeight;
    out->halfWidth = halfWidth;
    out->halfHeight = halfHeight;
    out->texture = texture;
}
