/* NON_MATCHING: the motion getter now matches; the saved registers holding zero and the range-work global are exchanged. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match2_AnimationVisualState.h"
#include "game/GameState.h"
#include "addon/AocSystem.h"

struct Inner0020ffe0;
namespace {
struct RangeModelBinding {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ AsdMdlNode* model;
};
struct RangeModelSlot {
    /* 0x00 */ RangeModelBinding* binding;
    /* 0x04 */ u32 unk04;
};
struct RangeEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 kind;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ NodeVec3 position;
    /* 0x18 */ f32 heading;
    /* 0x1C */ s32 motion;
    /* 0x20 */ u8 transformPending;
    /* 0x21 */ u8 unk21[7];
    /* 0x28 */ u8 hasOwnBinding;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ RangeModelBinding* binding;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ s32 slot;
    /* 0x38 */ u32 unk38;
};
struct RangeWork {
    /* 0x00 */ u8 unk00[0x18];
    union {
        /* 0x18 */ RangeModelSlot slots[2];
        struct {
            u8 unk18[0xC];
            /* 0x24 */ RangeEntry entries[16];
        } table;
    };
};

inline void setModelEnabled(RangeModelBinding* binding, u8 enabled)
{
    reinterpret_cast<AnimationVisualPart*>(binding->model->sceneNode)->enabled = enabled;
}
}

extern "C" {
extern RangeWork* g_mapRangeWork;
void modelSetScale(AsdMdlNode*, f32);
void nodeSetPropertyScale(AsdMdlNode*, f32);
void modelPartSetRotationDegrees(AsdMdlNode*, s32, f32, f32, f32);
void modelSelectPrimaryMotion(AsdMdlNode*, s32, f32);
void modelSelectSecondaryMotion(AsdMdlNode*, s32, f32);
u32 modelGetCurrentMotion(Inner0020ffe0 *model);

/* Apply visibility and queued transforms to the sixteen active range entries. */
void mapRangeUpdateModelVisibilityAndTransforms()
{
    for (s32 i = 0; i < 16; ++i) {
        RangeWork* work = g_mapRangeWork;
        RangeEntry* entry = &work->table.entries[i];
        if (!entry->active || entry->kind == 3) {
            continue;
        }
        RangeModelBinding* binding = entry->hasOwnBinding
            ? entry->binding : work->slots[entry->slot].binding;
        if (g_gameState.loading) {
            modelSetScale(binding->model, 0.0f);
            nodeSetPropertyScale(binding->model, 0.0f);
            if (!(binding->flags & 2)) {
                binding->flags |= 2;
                setModelEnabled(binding, 0);
            }
        } else {
            modelSetScale(binding->model, 1.0f);
            nodeSetPropertyScale(binding->model, 1.0f);
            if (binding->flags & 2) {
                binding->flags &= ~2u;
                setModelEnabled(binding, 1);
            }
            if (entry->transformPending) {
                nodeSetTranslation(binding->model, 0, &entry->position.x);
                modelPartSetRotationDegrees(binding->model, 0, 0.0f, entry->heading, 0.0f);
                if ((s32)modelGetCurrentMotion(reinterpret_cast<Inner0020ffe0 *>(binding->model)) != entry->motion) {
                    modelSelectPrimaryMotion(binding->model, entry->motion, 0.0f);
                    modelSelectSecondaryMotion(binding->model, entry->motion, 0.0f);
                }
                entry->transformPending = 0;
            }
        }
    }
}
} // extern "C"
