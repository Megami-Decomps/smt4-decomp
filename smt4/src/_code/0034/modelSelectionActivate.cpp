/* NON_MATCHING: translation-copy addressing and child-vector growth allocate registers differently from retail. */
#include "common.h"
#include <stddef.h>
#include "shard/FUN_00244d98.h"

extern "C" {

struct SceneNode;
struct Animation;
struct Allocator;

struct WordVector3 {
    u32 x;
    u32 y;
    u32 z;
};

struct AllocatorVTable {
    u32 reserved00[2];                         // 0x00
    void* (*allocate)(Allocator*, u32,
                     u32);                     // 0x08
    void (*release)(Allocator*, void*);                   // 0x0c
};

struct Allocator {
    AllocatorVTable* vtable;                              // 0x00
};

struct AnimationBindings {
    u8 reserved00[0x0c];                        // 0x00
    u32* rowBegin;                              // 0x0c
    u32* rowEnd;                                // 0x10
    u8 reserved14[8];                           // 0x14
    Animation** entries;                                 // 0x1c
    u8 reserved20[8];                           // 0x20
    s32 columnCount;                             // 0x28
};

struct SceneNode {
    u8 reserved00[0x0c];                        // 0x00
    SceneNode* parent;                                   // 0x0c
    SceneNode* childParent;                              // 0x10
    Allocator* childAllocator;                           // 0x14
    SceneNode** childrenBegin;                           // 0x18
    SceneNode** childrenEnd;                             // 0x1c
    u32 childCapacityAndFlags;                  // 0x20
    u8 reserved24[4];                           // 0x24
    AnimationBindings* animationBindings;                // 0x28
    u8 reserved2c[0x2c];                        // 0x2c
    u32 translationX;                          // 0x58
    u8 reserved5c[0x0c];                        // 0x5c
    u32 translationY;                          // 0x68
    u8 reserved6c[0x0c];                        // 0x6c
    u32 translationZ;                          // 0x78
};

typedef float (*AnimationEvaluator)(void*, float, float, float);

struct Animation {
    u8 reserved00[0x38];                        // 0x00
    float current;                                      // 0x38
    float previous;                                     // 0x3c
    u8 reserved40[4];                           // 0x40
    float target;                                       // 0x44
    float evaluatorParameter;                           // 0x48
    AnimationEvaluator evaluator;                       // 0x4c
    void* evaluatorContext;                             // 0x50
    u8 reserved54[4];                           // 0x54
    u8 dirty;                                  // 0x58
};

struct ModelSelection {
    s32 modelCount;                              // 0x0000
    s32 selectedModel;                           // 0x0004
    u8 reserved0008[0x564];                      // 0x0008
    SceneNode* models[32];                               // 0x056c
    Animation* animations[32][32];                       // 0x05ec
    u8 reserved15ec[0x18];                       // 0x15ec
    WordVector3 savedTranslation;                        // 0x1604
    WordVector3 savedAuxiliary;                          // 0x1610
};

struct ModelParameters {
    u8 reserved00[0x28];                        // 0x00
    float value28;                                      // 0x28
    float value2c;                                      // 0x2c
    float value30;                                      // 0x30
    float value34;                                      // 0x34
};

extern WordVector3* FUN_002a86a4(SceneNode*);
extern void FUN_002cbaf8(SceneNode*, int);
extern void sysFlagsSetBits(u32);
extern float FUN_00155650(void*, float, float, float);
extern int FUN_0024530c(SceneNode*, Animation*);
extern SceneNode* asdModelGetSlotArray0(int);
extern int nw_gfx_SceneNode_IsCircularReference(SceneNode*, SceneNode*);
extern ModelParameters* FUN_002c501c(void*);
extern void FUN_002a8638(SceneNode*, float*, float*, float*, float*);
extern void FUN_00341bec(ModelSelection*);

void modelSelectionActivate(ModelSelection* selection, int modelIndex, int animationIndex)
{
    if (modelIndex < 0)
        return;
    if (modelIndex >= selection->modelCount)
        return;

    selection->selectedModel = modelIndex;
    SceneNode* model = selection->models[modelIndex];

    selection->savedTranslation.x = model->translationX;
    selection->savedTranslation.y = model->translationY;
    selection->savedTranslation.z = model->translationZ;

    WordVector3* auxiliary = FUN_002a86a4(model);
    selection->savedAuxiliary.x = auxiliary->x;
    selection->savedAuxiliary.y = auxiliary->y;
    selection->savedAuxiliary.z = auxiliary->z;

    FUN_002cbaf8(model, 0);
    sysFlagsSetBits(1);

    if (animationIndex >= 0) {
        Animation** animationSlot =
            &selection->animations[modelIndex][animationIndex];

        Animation* animation = *animationSlot;
        animation->previous = 0.0f;
        animation->current = 0.0f;
        animation->dirty = 1;

        animation = *animationSlot;
        animation->target = 0.0f;

        // The ARM carry-set branch also skips evaluation for unordered values.
        if (animation->current < 0.0f) {
            float evaluated = animation->evaluator(
                animation->evaluatorContext,
                0.0f,
                animation->evaluatorParameter,
                0.0f);

            float oldCurrent = animation->current;
            animation->current = evaluated;
            animation->previous = oldCurrent;
            animation->dirty = 1;
        }

        animation = *animationSlot;
        animation->evaluator = FUN_00155650;
        animation->dirty = 1;

        animation = *animationSlot;
        if (FUN_0024530c(model, animation) != 0) {
            AnimationBindings* bindings = model->animationBindings;
            if ((bindings->rowEnd - bindings->rowBegin) > 0 &&
                bindings->columnCount > 0) {
                bindings->entries[0] = animation;
            }
        }
    }

    SceneNode* slot = asdModelGetSlotArray0(0);
    bool mayAttach = true;

    if (slot->parent != NULL) {
        if (slot->parent == model) {
            mayAttach = false;
        } else if (nw_gfx_SceneNode_IsCircularReference(slot->parent, model) != 0) {
            mayAttach = false;
        }
    }

    if (mayAttach && model->parent == NULL) {
        const u32 capacityMask = 0x3fffffffu;
        const u32 flagsMask = 0xc0000000u;

        u32 flagsAndCapacity = slot->childCapacityAndFlags;
        s32 capacity =
            static_cast<s32>(flagsAndCapacity & capacityMask);
        s32 size =
            (slot->childrenEnd - slot->childrenBegin);
        bool appendSucceeded = true;

        if (capacity <= size) {
            u32 grownCapacity =
                capacity != 0 ? static_cast<u32>(capacity) << 1 : 1u;

            if (capacity < static_cast<s32>(grownCapacity)) {
                if (slot->childAllocator == NULL ||
                    (flagsAndCapacity & flagsMask) != 0x40000000u) {
                    appendSucceeded = false;
                } else {
                    Allocator* allocator = slot->childAllocator;
                    SceneNode** replacement =
                        static_cast<SceneNode**>(
                            allocator->vtable->allocate(
                                allocator, grownCapacity << 2, 32));

                    SceneNode** source = slot->childrenBegin;
                    SceneNode** end = slot->childrenEnd;
                    s32 copiedCount = 0;

                    if (source != end) {
                        SceneNode** destination = replacement;
                        do {
                            if (destination != NULL)
                                *destination = *source;
                            source = (source + 1);
                            destination = (destination + 1);
                        } while (source != end);

                        copiedCount = slot->childrenEnd - slot->childrenBegin;
                    }

                    if (slot->childrenBegin != NULL) {
                        allocator = slot->childAllocator;
                        allocator->vtable->release(
                            allocator, slot->childrenBegin);
                    }

                    slot->childrenEnd = (replacement + copiedCount);
                    slot->childrenBegin = replacement;
                    slot->childCapacityAndFlags =
                        (slot->childCapacityAndFlags & flagsMask) |
                        grownCapacity;
                }
            }
        }

        if (appendSucceeded) {
            if (slot->childrenEnd != NULL)
                *slot->childrenEnd = model;
            slot->childrenEnd = (slot->childrenEnd + 1);
            model->parent = slot->childParent;
        }
    }

    void* parameterOwner = FUN_00244d98(0);
    ModelParameters* parameters = FUN_002c501c(parameterOwner);
    FUN_002a8638(model,
                 &parameters->value28,
                 &parameters->value34,
                 &parameters->value2c,
                 &parameters->value30);

    parameters->value28 = parameters->value28 * 57.2957763671875f;
    FUN_00341bec(selection);
}
}
