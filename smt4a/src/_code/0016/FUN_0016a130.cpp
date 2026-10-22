/* NON_MATCHING: aggregate scale initialization clears all elements before diagonal stores; retail interleaves those stores. */
/* Refreshes a model's world matrix from its selected joint or its scale, rotation, and translation. */
#include "shard/W4_Match1b_Node.h"

extern "C" {
void FUN_0018eb44(void *scaleTable);
void nn_math_ARMv6_MTX34MultAsm(void *destination, const void *first, const void *second);
void FUN_0017fc94(void *destination, const NodeVec3 *translation, const void *source);

void FUN_0016a130(void *object)
{
    struct Matrix34 {
        f32 values[3][4];
    };
    struct JointMatrixTable {
        u8 unk000[0x14];
        Matrix34 *matrices;
    };
    struct ModelResourceView {
        u8 unk000[0x108];
        JointMatrixTable *joints;
    };
    struct ScaleTableView {
        u8 unk00[0xC];
        void *records;
        s32 count;
    };
    struct ModelMatrixView {
        u32 unk000;
        u32 flags;
        u8 unk008[0xDC];
        ScaleTableView scaleTable;
        u8 unk0F8[0x28];
        Matrix34 world;
        u8 unk150[0x64];
        NodeVec3 translation;
        Matrix34 rotation;
        NodeVec3 scale;
        u8 unk1FC[8];
        ModelResourceView *resource;
        u16 jointIndex;
    };
    ModelMatrixView *model = (ModelMatrixView *)object;
    if (model->flags & 4) {
        model->world = model->resource->joints->matrices[model->jointIndex];
        return;
    }
    FUN_0018eb44(&model->scaleTable);
    Matrix34 scale = {{
        {model->scale.x, 0.0f, 0.0f, 0.0f},
        {0.0f, model->scale.y, 0.0f, 0.0f},
        {0.0f, 0.0f, model->scale.z, 0.0f}
    }};
    Matrix34 combined;
    nn_math_ARMv6_MTX34MultAsm(&combined, &scale, &model->rotation);
    FUN_0017fc94(&combined, &model->translation, &combined);
    model->world = combined;
}
}
