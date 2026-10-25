/* NON_MATCHING: readable rewrite from retail disassembly compiles (213 vs 259 rows); retail returns the position in s0-s2 keeping it in d8/s18 across the switch, this version builds it through a struct and does not reproduce that */
#include "battle/BtlMainAccess.h"
#include "common.h"

struct Vec3 {
    f32 x, y, z;
};

// Battle entry: only the fields the offset lookup reads.
struct BattleEntry {
    u32 flags;          // 0x00, bit 5: off-screen/hidden
    u8 unk04[0x6a];
    s16 facing;         // 0x6e: 0..3
};

// Battle camera/main object: the position, its offset and the orbit distance.
struct BattleMain {
    Vec3 base;                  // 0x000
    u8 unk00c[0x568 - 0x0c];
    Vec3 offset;                // 0x568
    u8 unk574[0x580 - 0x574];
    Vec3 direction;             // 0x580
    u8 unk58c[0x598 - 0x58c];
    f32 distance;               // 0x598
};

extern "C" {

extern BattleMain* g_btlMain;

Vec3 FUN_0023cd08(void* battle, u32 id, s32 mode);
Vec3 FUN_0024d434(void* battle, u32 id, s32 mode);
BattleEntry* btlMainFindEntryByListedId(void* battle, u32 id);

// Position `distance` units along the camera direction from the main object's anchor.
static Vec3 cameraRelativePoint()
{
    BattleMain* main = g_btlMain;
    f32 t = main->distance - 10.0f;
    Vec3 point;
    point.x = main->direction.x * t + main->offset.x + main->base.x;
    point.y = main->direction.y * t + main->offset.y + main->base.y;
    point.z = main->direction.z * t + main->offset.z + main->base.z;
    return point;
}

// Slot position beside an entry, by which side it faces.
static Vec3 entrySlotPoint(u32 listedId)
{
    Vec3 point = { 0.0f, 0.0f, 0.0f };
    BattleEntry* entry = btlMainFindEntryByListedId(static_cast<void *>(btlGetMainState()), listedId);
    if (entry != NULL) {
        if ((entry->flags & 0x20) != 0) {
            point.x = 0.0f;
            point.y = -1.5f;
        } else if (entry->facing == 0) {
            point.x = -2.975f;
            point.y = 0.6f;
        } else if (entry->facing == 1) {
            point.x = -1.0f;
            point.y = 0.6f;
        } else if (entry->facing == 2) {
            point.x = 0.975f;
            point.y = 0.6f;
        } else if (entry->facing == 3) {
            point.x = 2.95f;
            point.y = 0.6f;
        }
    }
    return point;
}

// Resolves the world position a script operand refers to: kinds 0-5 name a unit by `first`
// or `second`, 6/8/9 the camera-relative point, 12 a fixed spot, 13 the second unit's anchor.
Vec3 FUN_003dd680(u32 unused, u32 kind, u32 first, u32 second)
{
    Vec3 result = { 0.0f, 0.0f, 0.0f };
    switch (kind) {
    case 0:
        result = FUN_0023cd08(static_cast<void *>(btlGetMainState()), first, 0);
        break;
    case 1:
        result = FUN_0024d434(static_cast<void *>(btlGetMainState()), first, 0);
        break;
    case 2:
        result = entrySlotPoint(first);
        break;
    case 3:
        result = FUN_0023cd08(static_cast<void *>(btlGetMainState()), second, 0);
        break;
    case 4:
        result = FUN_0024d434(static_cast<void *>(btlGetMainState()), second, 0);
        break;
    case 5:
        result = entrySlotPoint(second);
        break;
    case 6:
        result = cameraRelativePoint();
        break;
    case 8:
        result = cameraRelativePoint();
        break;
    case 9:
        result = cameraRelativePoint();
        break;
    case 12:
        result.x = -2.975f;
        result.y = 0.6f;
        break;
    case 13:
        result = FUN_0023cd08(static_cast<void *>(btlGetMainState()), second, 1);
        break;
    }
    return result;
}

} /* extern "C" */
