/* NON_MATCHING: retail adds the scratch vectors through a second pointer to the slot (two copies of its
 * address) and copies them out with mixed ldm/ldr; the frame and the in-loop VFP copies follow retail. */
#include "common.h"
#include "shard/Resource.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "gfx/VectorScratch.h"


/* Scratch positions shared by the effect update (accessed at 0x100 and 0x110). */

/* An effect node (accessed fields). */
struct EffectNode {
    Vector4 offset;          // 0x00
    u8 unk10[0x30];
    Vector4 origin;          // 0x40
    Vector4 orientation;     // 0x50
    f32 scale;                  // 0x60
    u8 unk64[4];
    u32 flags;                  // 0x68
    u8 unk6C[8];
    f32 childScale;             // 0x74
    u8 unk78[8];
    s32 startFrame;             // 0x80
    s32 frame;                  // 0x84 (children: flags2 at the same offset)
    u8 unk88[4];
    EffectNode *firstChild;     // 0x8C
    Resource *resource;             // 0x90
    u8 unk94[0x18];
    EffectNode *next;           // 0xAC
};

extern "C" {
void renderVectorOverrideResolve(EffectNode *node, const Vector4 *position, Vector4 *rotation);
void effectTimelinePartApplyRotation(EffectNode *node, const Vector4 *rotation);
}

/* Copies through pointers: armcc moves such a 16-byte value with VFP vldmia/vstmia. */
static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

/* Advance an effect node one frame: place it, then update every child that has started. */
extern "C" void effectNodeUpdateTransform(EffectNode *node)
{
    g_vectorScratch.first.vector = node->origin;
    g_vectorScratch.second.vector = node->offset;
    g_vectorScratch.first.vector.x += g_vectorScratch.second.vector.x;
    g_vectorScratch.first.vector.y += g_vectorScratch.second.vector.y;
    g_vectorScratch.first.vector.z += g_vectorScratch.second.vector.z;
    g_vectorScratch.first.vector.w += g_vectorScratch.second.vector.w;
    Vector4 position = g_vectorScratch.first.vector;
    Vector4 childOffset;
    Vector4 rotation;
    if ((node->flags & 0x60) != 0) {
        Vector4 orientation = node->orientation;
        renderVectorOverrideResolve(node, &position, &rotation);
        effectTimelinePartApplyRotation(node, &rotation);
        node->orientation = orientation;
    }
    f32 scale = node->scale * node->childScale;
    s32 frame = node->frame;
    for (EffectNode *child = node->firstChild; child != 0; child = child->next) {
        if (child->startFrame > frame || (child->frame & 2) != 0)
            continue;
        if ((child->flags & 0x18) != 0) {
            vector4Copy(&position, &g_vectorScratch.first.vector);
            if ((child->flags & 4) != 0)
                g_vectorScratch.first.vector.y = 5.0f;
            vector4Copy(&childOffset, &g_vectorScratch.second.vector);
            if ((child->flags & 0x80) != 0) {
                g_vectorScratch.second.vector.x *= scale;
                g_vectorScratch.second.vector.y *= scale;
                g_vectorScratch.second.vector.z *= scale;
                g_vectorScratch.second.vector.w *= scale;
            }
            g_vectorScratch.first.vector.x += g_vectorScratch.second.vector.x;
            g_vectorScratch.first.vector.y += g_vectorScratch.second.vector.y;
            g_vectorScratch.first.vector.z += g_vectorScratch.second.vector.z;
            g_vectorScratch.first.vector.w += g_vectorScratch.second.vector.w;
            childOffset = g_vectorScratch.first.vector;
            ResourceHandler *handler = &g_handlerTable[child->resource->type];
            if (handler->setPosition != 0)
                // The handler table takes its own (incomplete) Vec4: the value is a Vector4.
                handler->setPosition(child->resource->data, reinterpret_cast<const Vec4 *>(&childOffset));
        }
        if ((child->flags & 0x60) != 0) {
            renderVectorOverrideResolve(child, &position, &rotation);
            ResourceHandler *handler = &g_handlerTable[child->resource->type];
            if (handler->setOrientation != 0)
                handler->setOrientation(child->resource->data, &rotation.x);
        }
        g_handlerTable[child->resource->type].run(child->resource->data);
    }
    node->flags |= 0x80000000;
    node->frame += effGetFrameStep();
}
