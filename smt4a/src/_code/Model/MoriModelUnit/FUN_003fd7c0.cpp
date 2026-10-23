/* NON_MATCHING: animation-state base is not retained; storage-allocation flag and buffer-size lifetimes differ. */
#include "Model/MoriModelUnit.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, s32 kind);
void FUN_0045ab90(MaterialFlagBindingArray *binding, const MaterialFlagAnimation *animation, void *metadata);
void FUN_0045b384(void *samples, const MaterialFlagAnimation *animation, void *model);
void FUN_0045b498(void *samples, void *storage, u32 count);
extern const char DAT_00526108[];

/* Bind a material animation and prepare the optional per-value sample buffer. */
void FUN_003fd7c0(MoriModelUnit *unit, u32 index, u8 mode, f32 speed)
{
    struct AnimationView {
        MaterialFlagAnimation header;
        u8 unk14[8];
        u32 valueCount;
    };
    struct AnimationLibrary {
        u8 unk00[0x6c];
        AnimationView **animations;
        u16 count;
    };
    struct ModelView {
        u8 unk00[0x30];
        AnimationLibrary *library;
    };
    struct ModelHolder {
        u8 unk00[0xc];
        ModelView model;
    };
    struct AnimationState {
        u32 index;
        f32 speed;
        u32 unk8c;
        AnimationView *animation;
        u32 unk94;
        MaterialFlagBindingArray binding;
        u8 unk9c[8];
        u8 mode;
        u8 unka5[3];
        u32 samples[2];
        void *storage;
    };
    // Animation fields extend beyond MoriModelUnit's canonical prefix.
    struct UnitView {
        u8 prefix[0x84];
        AnimationState state;
        u8 unkb4[0x58];
        MaterialFlagStateArray materials;
        u8 unk110[0xfc];
        ModelHolder *holder;
        void *metadata;
    };
    typedef char UnitViewLayout[offsetof(UnitView, state) == 0x84 &&
        offsetof(UnitView, materials) == 0x10c && offsetof(UnitView, holder) == 0x20c ? 1 : -1];
    UnitView *view = reinterpret_cast<UnitView *>(unit);
    ModelView *model = view->holder ? &view->holder->model : NULL;
    if (index < model->library->count) {
        AnimationView *animation = model->library->animations[index];
        if (animation != NULL) {
            view->state.index = index;
            view->state.speed = speed;
            view->state.animation = animation;
            FUN_0045ab90(&view->state.binding, &animation->header, view->metadata);
            gfxMarkMaterialAnimationCapabilities(&animation->header, &view->materials, &view->state.binding);
            view->state.mode = mode;
            animation = view->state.animation;
            u32 count = animation->valueCount;
            for (u32 member = 0; member < animation->header.count; ++member) {
                if (animation->header.members[member]->targetKind == 6) {
                    void *storage = view->state.storage;
                    if (storage == NULL) {
                        asdDebugTrace(DAT_00526108, 942);
                        storage = asdMemoryAlloc(0x10000, 0x100, 0, count * 4, 1);
                        view->state.storage = storage;
                    }
                    FUN_0045b498(view->state.samples, storage, count);
                    model = &view->holder->model;
                    if (model != NULL) {
                        FUN_0045b384(view->state.samples, &animation->header, model);
                    }
                    return;
                }
            }
        }
    }
}
}
