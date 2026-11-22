/* NON_MATCHING: 184 lines: the result stays in s16-s18 as in retail and the three camera-relative copies (cases 6,
 * 8, 9) scale the direction before adding the offsets as retail does; left: retail zeroes x first and copies it to
 * z and y, loads the offsets after the products, and cross-jumps the entry-slot arms of cases 2 and 5 (the shared
 * y = 0.6 tail). */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"

struct Vec3 {
    f32 x, y, z;
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
Vec3 btlActionEffectAnchor(void* battle, u32 id, s32 mode);

/* Position `distance` - 10 units along the camera direction from the main object's anchor. */
static __inline Vec3 cameraRelativePoint()
{
    BattleMain* main = g_btlMain;
    f32 t = main->distance - 10.0f;
    Vec3 direction = main->direction;
    Vec3 scaled;
    scaled.x = direction.x * t;
    scaled.y = direction.y * t;
    scaled.z = direction.z * t;
    Vec3 point;
    point.x = scaled.x + main->offset.x + main->base.x;
    point.y = scaled.y + main->offset.y + main->base.y;
    point.z = scaled.z + main->offset.z + main->base.z;
    return point;
}

/* Slot position beside an entry, by which side it faces; unchanged when the entry is not listed. */
static __inline void entrySlotPoint(u32 listedId, f32 *x, f32 *y)
{
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    if (entry != NULL) {
        if ((entry->flags & 0x20) != 0) {
            *x = 0.0f;
            *y = -1.5f;
        } else {
            switch (entry->selectionIndex) {
            case 0:
                *x = -2.9750001f; /* retail's constant is 0xC03E6667, one ulp below -2.975f */
                *y = 0.6f;
                break;
            case 1:
                *x = -1.0f;
                *y = 0.6f;
                break;
            case 2:
                *x = 0.975f;
                *y = 0.6f;
                break;
            case 3:
                *x = 2.95f;
                *y = 0.6f;
                break;
            }
        }
    }
}

// Resolves the world position a script operand refers to: kinds 0-5 name a unit by `first`
// or `second`, 6/8/9 the camera-relative point, 12 a fixed spot, 13 the second unit's anchor.
Vec3 FUN_003dd680(u32 unused, u32 kind, u32 first, u32 second)
{
    Vec3 result;
    result.x = result.y = result.z = 0.0f;
    switch (kind) {
    case 0:
        result = FUN_0023cd08(static_cast<void *>(btlGetMainState()), first, 0);
        break;
    case 1:
        result = btlActionEffectAnchor(static_cast<void *>(btlGetMainState()), first, 0);
        break;
    case 2:
        entrySlotPoint(first, &result.x, &result.y);
        break;
    case 3:
        result = FUN_0023cd08(static_cast<void *>(btlGetMainState()), second, 0);
        break;
    case 4:
        result = btlActionEffectAnchor(static_cast<void *>(btlGetMainState()), second, 0);
        break;
    case 5:
        entrySlotPoint(second, &result.x, &result.y);
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
        result.x = -2.9750001f; /* 0xC03E6667, as above */
        result.y = 0.6f;
        break;
    case 13:
        result = FUN_0023cd08(static_cast<void *>(btlGetMainState()), second, 1);
        break;
    }
    return result;
}

} /* extern "C" */
