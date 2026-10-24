/* NON_MATCHING: only instruction scheduling differs (mov r1,r5 before vstmia, mov r2,#7 after) */
#include "common.h"

struct ModelScale {
    f32 x, y, z;
};

struct OutfitModel {
    ModelScale scale;  // 0x00
    u8 unk0c[4];       // 0x0C
    f32 unk10;         // 0x10
    u8 unk14[4];       // 0x14
    f32 unk18;         // 0x18
    void *player;      // 0x1C
    u32 outfit;        // 0x20
};

extern "C" {

s32 linkHolderCallFirst(void);
void linkHolderSetFlag(void);
void playerLoadOutfitModels(void *player, u32 outfit, s32 mode);

/* Sets up the outfit model's scale for the player and loads the outfit models. */
void FUN_002e2184(OutfitModel *model, u32 outfit)
{
    if (model->player != NULL) {
        model->unk18 = 0.012f;
        model->unk10 = 350.0f;
        ModelScale scale;

        if (linkHolderCallFirst() == 0x23) {
            scale.x = 1.0f;
            scale.y = 5.4f;
            scale.z = 1.5f;
        } else {
            scale.x = 1.2f;
            scale.y = 5.3f;
            scale.z = 0.5f;
        }
        model->scale = scale;
        model->outfit = outfit;
        playerLoadOutfitModels(model->player, outfit, 7);
        if (model->player != NULL) {
            linkHolderSetFlag();
        }
    }
}

} /* extern "C" */
