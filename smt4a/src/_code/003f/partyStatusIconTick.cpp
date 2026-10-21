/* NON_MATCHING: only state-1 fixed-point arithmetic destinations and coordinate store grouping differ; status selection/cycling/transient paths match. Alternate optimization candidate. */
#include "shard/W5_W5Match5_GameSaveViews.h"

namespace {
struct StatusIconPoint {
    s32 x;
    s32 y;
};
struct StatusIconWork {
    s32 state;
    s32 frame;
    StatusIconPoint velocity; // Q12
    StatusIconPoint position; // Q12
    s32 cycleFrame;
    s32 cycleIndex;
    u8 unk20[0xc];
    StatusIconPoint screen;
    s32 slot;
    u8 unk38[0x10];
    u8 transientActive;
    u8 unk49[7];
    s32 transientFrame;
};
struct SlotStatusView {
    u8 unk00[0x60];
    u16 mask;
};
struct PlayerStatusView {
    u8 unk00[0x5e];
    u16 mask;
};

inline u16 slotStatusMask(const SlotRecord* record)
{
    return reinterpret_cast<const SlotStatusView*>(record)->mask;
}
}

extern "C" {
PlayerStatusView* gameGetPlayerData();
SlotRecord* btlMainGetUnk14();
void FUN_003f3e64(StatusIconWork*, s32* x, s32* y);

void partyStatusIconTick(void* data)
{
    StatusIconWork* work = static_cast<StatusIconWork*>(data);
    switch (work->state) {
    case 0: {
        u32 mask = 0;
        s32 count = 0;
        if (work->slot == -1) {
            mask = gameGetPlayerData()->mask;
        } else if (work->slot == -2) {
            SlotRecord* record = btlMainGetUnk14();
            if (record) {
                mask = slotStatusMask(record);
            }
        } else if (work->slot >= 0) {
            mask = slotStatusMask(gameGetSlotRecord(work->slot));
        }
        for (s32 bit = 1; bit <= 13; ++bit) {
            if (bit != 2 && (mask & (1u << bit))) {
                ++count;
            }
        }
        if (count > 1 && ++work->cycleFrame >= 24) {
            work->cycleIndex = (work->cycleIndex + 1) % count;
            work->cycleFrame = 0;
        }
        break;
    }
    case 1:
        work->position.x += work->velocity.x;
        work->position.y += work->velocity.y;
        work->screen.x = work->position.x >> 12;
        work->screen.y = work->position.y >> 12;
        if (work->frame >= 8) {
            s32 targetX = 0;
            s32 targetY = 0;
            FUN_003f3e64(work, &targetX, &targetY);
            work->screen.x = targetX;
            work->screen.y = targetY;
            work->state = 0;
        }
        break;
    }
    if (work->transientActive && ++work->transientFrame > 13) {
        work->transientActive = 0;
    }
    ++work->frame;
}
} // extern "C"
