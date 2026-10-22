/* NON_MATCHING: transition clamp and node-transform VFP scheduling still differ from retail. */
#include "classes/Obj4222ac.h"

struct Obj4222acRenderFlags { u8 unk00[0x1F6]; u8 visible; };
struct Obj4222acNode { u8 unk00[0x2C]; Obj4222acRenderFlags *renderFlags; };
struct Obj4222acModel { u32 flags; u32 unk04; Obj4222acNode *node; };
struct Obj4222acTransition {
    u8 unk00[0x18];
    f32 heading;
    u8 unk1c[0x2A0];
    f32 progress;
};
extern "C" {
extern Obj4222acTransition *DAT_004474f4;
extern s8 DAT_0049f93e;
void nodeSetTranslation(Obj4222acNode *node, s32 index, const f32 *position);
void FUN_0028c618(Obj4222acNode *node, s32 index, f32 x, f32 y, f32 z);
void nodeSetScale(Obj4222acNode *node, s32 index, f32 x, f32 y, f32 z);
}

void Obj4222ac::updateMotion()
{
    if ((flags & 1) != 0) {
        position[1] += 50.0f;
        if (position[1] > 0) {
            position[1] = 0;
            flags &= ~1;
        }
    }
    if ((u32)frames < 10) {
        position[1] -= 50.0f;
        flags |= 2;
    }
    if (handle != 0) {
        Obj4222acModel *model = (Obj4222acModel *)handle;
        f32 translated[3] = {
            basePosition[0] + position[0],
            basePosition[1] + position[1],
            basePosition[2] + position[2]
        };
        if (DAT_004474f4->progress >= 0.9f) {
            f32 amount = (DAT_004474f4->progress - 0.9f) * 10.0f;
            if (amount < 0) {
                amount = 0;
            } else if (amount > 1) {
                amount = 1;
            }
            translated[1] += amount * 100.0f;
            nodeSetTranslation(model->node, 0, translated);
            FUN_0028c618(model->node, 0, amount * -60.0f, DAT_004474f4->heading + 180.0f, 0);
        } else {
            nodeSetTranslation(model->node, 0, translated);
            FUN_0028c618(model->node, 0, rotation[0], rotation[1], rotation[2]);
        }
        nodeSetScale(model->node, 0, scale[0], scale[1], scale[2]);
        if (DAT_0049f93e != 0) {
            if ((model->flags & 2) == 0) {
                model->flags |= 2;
                model->node->renderFlags->visible = 0;
            }
        } else if ((model->flags & 2) != 0) {
            model->flags &= ~2;
            model->node->renderFlags->visible = 1;
        }
    }
}
