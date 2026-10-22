#include "common.h"

namespace {
struct Vec3 {
    f32 x, y, z;
};

struct FieldUnit {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00C */ Vec3 position;
    /* 0x018 */ u8 unk018[0x30];
    /* 0x048 */ s32 kind;
    /* 0x04C */ u8 unk04c[0x7c];
    /* 0x0C8 */ f32 height;
    /* 0x0CC */ u8 unk0cc[0x48];
    /* 0x114 */ u8 offsetSource[0xbc];
};

struct FieldUnitOwner {
    /* 0x0000 */ u8 unk0000[0x1ed4];
    /* 0x1ED4 */ FieldUnit *units;
};

struct FieldUnitPosition {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ FieldUnitOwner *owner;
    /* 0x08 */ Vec3 position;
};
}

extern "C" {

void pairSourceGet(void *source, f32 *first, f32 *second);

/* Compute where a unit's marker goes: its position, plus its offset for kind 1, raised by its height. */
Vec3 *fieldUnitGetMarkerPosition(FieldUnitPosition *marker, s32 index)
{
    FieldUnit *unit = &marker->owner->units[index];

    marker->position = unit->position;
    if (unit->kind == 1) {
        f32 offset[2];
        pairSourceGet(unit->offsetSource, &offset[0], &offset[1]);
        marker->position.x += offset[0];
        marker->position.y += offset[1];
    }
    marker->position.x += unit->height;
    if (unit->kind != 2) {
        marker->position.y += unit->height * 0.25f;
    }
    return &marker->position;
}

} /* extern "C" */
