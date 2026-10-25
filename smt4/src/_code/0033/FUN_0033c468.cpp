/* NON_MATCHING: ailment-count accumulator registers and equivalent count/blink threshold comparisons differ. */
#include "ui/SlotPlacement.h"
#include "shard/PadState.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/PlayerDataBlock.h"

/* The cycle fields occupy unaligned-union padding, and the blink fields extend the shared prefix. */
struct AnimatedSlotPlacementView {
    u32 state;
    s32 frame;
    s32 stepX, stepY;
    s32 currentX, currentY;
    s32 cycleFrames, cycleIndex;
    u8 unk20[0xc];
    s32 x, y;
    s32 unitIndex;
    u8 unk38[0x10];
    u8 blinking;
    u8 unk49[7];
    s32 blinkFrames;
};

extern "C" {
PartyDamageUnitIV *gameGetUnitRecord(s32 index);
void slotPlacementGetPosition(const SlotPlacement *placement, s32 *x, s32 *y);

void FUN_0033c468(AnimatedSlotPlacementView *placement)
{
    switch (placement->state) {
    case 0: {
        u16 ailments;
        if (placement->unitIndex < 0)
            ailments = reinterpret_cast<PadState *>(gameGetPlayerData())->unk72;
        else
            ailments = gameGetUnitRecord(placement->unitIndex)->ailments;
        s32 count = 0;
        for (s32 bit = 1; bit <= 10; ++bit)
            if (ailments & (1 << bit))
                ++count;
        if (count > 1 && ++placement->cycleFrames >= 24) {
            placement->cycleIndex = (placement->cycleIndex + 1) % count;
            placement->cycleFrames = 0;
        }
        break;
    }
    case 1:
        placement->currentX += placement->stepX;
        placement->currentY += placement->stepY;
        placement->x = placement->currentX >> 12;
        placement->y = placement->currentY >> 12;
        if (placement->frame >= 8) {
            s32 x = 0, y = 0;
            slotPlacementGetPosition((const SlotPlacement *)placement, &x, &y);
            placement->x = x;
            placement->y = y;
            placement->state = 0;
        }
        break;
    }
    if (placement->blinking && ++placement->blinkFrames > 13)
        placement->blinking = 0;
    ++placement->frame;
}
}
