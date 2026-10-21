/* NON_MATCHING: constructor scheduling places the vtable store before the second pointer reset rather than after it. */
#include "common.h"

struct ModelAnimationData {
    const void *vtable;
    void **kind4Animations;
    void **kind5Animations;
    void **kind6Animations;
    u32 count;
};
struct ModelAnimationOwner {
    u8 unk00[0x44];
    ModelAnimationData *animations; // 0x44
};

extern "C" {
extern const u8 DAT_004208cc[];
void *asdOperatorNew(u32);
void FUN_00349a14(ModelAnimationData *, ModelAnimationOwner *);

void FUN_0023fb84(ModelAnimationOwner *owner)
{
    if (owner->animations != NULL)
        return;
    ModelAnimationData *data = (ModelAnimationData *)asdOperatorNew(sizeof(ModelAnimationData));
    if (data != NULL) {
        data->kind4Animations = NULL;
        data->kind5Animations = NULL;
        data->vtable = DAT_004208cc;
        data->kind6Animations = NULL;
        data->count = 0;
    }
    owner->animations = data;
    FUN_00349a14(data, owner);
}
}
