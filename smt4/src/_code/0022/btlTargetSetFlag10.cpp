#include "common.h"

struct TargetFlags {
    u8 flags;       // 0x00
    u8 unk01[0xfb]; // 0x01
    u16 primary;    // 0xfc
    u16 alternate;  // 0xfe
};

struct FlagTargetOwner {
    u8 unk0000[0x44a0]; // 0x0000
    u32 flags;           // 0x44a0
};

extern "C" TargetFlags* FUN_0027da30(FlagTargetOwner* owner, s32 targetId);

// Set bit 0x10 in the selected target flag bank unless either owner disables it.
extern "C" void btlTargetSetFlag10(FlagTargetOwner* owner, s32 targetId, s32 primary)
{
    if ((owner->flags & 0x40000) == 0) {
        TargetFlags* target = FUN_0027da30(owner, targetId);
        if ((target->flags & 8) == 0 && target != NULL) {
            u16 flags = primary ? target->primary : target->alternate;
            flags |= 0x10;
            if (primary) {
                target->primary = flags;
            } else {
                target->alternate = flags;
            }
        }
    }
}
