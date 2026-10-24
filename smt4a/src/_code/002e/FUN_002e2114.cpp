#include "common.h"

struct Vec3 {
    f32 x, y, z;

    Vec3() {}
    Vec3(f32 v)
    {
        z = v;
        y = v;
        x = v;
    }
};

struct LinkHolder;

struct LinkedTarget {
    Vec3 position;      // 0x00
    u8 unk0c[0xc];
    f32 scale;          // 0x18
    LinkHolder *holder; // 0x1c
};

extern "C" {

void FUN_003e5858(void);
s32 fourPtrsAllNull(LinkHolder *holder);
void linkHolderRunAll(LinkHolder *holder, Vec3 *position);
void FUN_003e5558(LinkHolder *holder, Vec3 scale);
void FUN_003857b4(s32 value);

// Run every link of the target's holder at the target position and apply its uniform scale; 1 when it ran.
u32 FUN_002e2114(LinkedTarget *target)
{
    u32 ran = 0;
    if (target->holder != NULL) {
        FUN_003e5858();
        if (fourPtrsAllNull(target->holder) != 0) {
            Vec3 position = target->position;
            linkHolderRunAll(target->holder, &position);
            FUN_003e5558(target->holder, Vec3(target->scale));
            FUN_003857b4(0);
            ran = 1;
        }
    }
    return ran;
}

} /* extern "C" */
