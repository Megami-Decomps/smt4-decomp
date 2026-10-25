#include "common.h"
#include "status/StatusCamera.h"

namespace {
struct SceneSelection {
    /* 0x00 */ s16 unitA;
    /* 0x02 */ s16 unitB;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s16 value2;
    /* 0x0A */ u16 value1;
    /* 0x0C */ u16 value3;
    /* 0x0E */ s16 value5;
    /* 0x10 */ u8 unk10[5];
    /* 0x15 */ s8 value4;
};

struct SceneContext {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ SceneSelection selection;
};

struct UnitRecordView {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
};
}

extern "C" {

UnitRecordView *gameGetUnitRecord(s32 unit);

/* The id selected in a scene slot, or -1 when that slot is empty; slots 0 and 13 hold units. */
s32 sceneSelectionGetSlotId(u32 slot)
{
    SceneSelection *selection = &reinterpret_cast<SceneContext *>(FUN_002a0d0c())->selection;

    switch (slot) {
    case 0:
        if (selection->unitA >= 0) {
            return gameGetUnitRecord(selection->unitA)->id;
        }
        break;
    case 13:
        if (selection->unitB >= 0) {
            return gameGetUnitRecord(selection->unitB)->id;
        }
        break;
    case 1:
        if (selection->value1 != 0) {
            return selection->value1;
        }
        break;
    case 2:
        if (selection->value2 > 0) {
            return selection->value2;
        }
        break;
    case 3:
        if (selection->value3 != 0) {
            return selection->value3;
        }
        break;
    case 4:
        if (selection->value4 >= 0) {
            return selection->value4;
        }
        break;
    case 5:
        if (selection->value5 >= 0) {
            return selection->value5;
        }
        break;
    }
    return -1;
}

} /* extern "C" */
