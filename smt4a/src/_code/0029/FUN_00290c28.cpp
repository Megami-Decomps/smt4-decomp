/* NON_MATCHING: frame-duration operand registers, half-size VFP allocation and paired output stores differ from retail. */
#include "shard/W6_W6Match8_SpriteTextureResource.h"
#include "gfx/SpriteGroupDrawState.h"

extern "C" void FUN_00290c28(SpriteGroupPlayer *player, SpriteGroupDrawState *out)
{
    // SpriteGroupData publishes only the duration prefix, not the final value.
    struct FrameView {
        s16 width, height;
        s16 originX, originY;
        s16 u1, v1, u2, v2;
        s16 texture;
        s16 duration;
        f32 value;
    };
    typedef char FrameViewSizeCheck[sizeof(FrameView) == 0x18 ? 1 : -1];

    SpriteGroupState *state = player->states;
    SpriteTextureResource *resource = (SpriteTextureResource *)player->resource;
    SpriteGroupDefinition *definition = state->definition;
    if (definition->kind & 0x10000000)
        return;
    if (state->frameCount > 0) {
        --state->frameCount;
    } else {
        ++state->frame;
        if ((u32)state->frame >= definition->count) {
            if (!(definition->kind & 0x10)) {
                state->frame = 0;
            } else {
                player->active = 0;
                state->frame = definition->count - 1;
            }
        }
        s32 frame = state->frame;
        state->frameCount = ((FrameView *)state->data)[frame].duration;
    }
    FrameView *frame = &((FrameView *)state->data)[state->frame];
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
    f32 halfWidth = (f32)frame->width * 0.5f;
    f32 halfHeight = (f32)frame->height * 0.5f;
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