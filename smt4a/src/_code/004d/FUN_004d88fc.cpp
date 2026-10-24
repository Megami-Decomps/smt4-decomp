#include "common.h"

struct ActionPoint {
    s32 x;
    s32 y;
};

struct ActionSource {
    u8 unk000[0xf4];
    u8 record[0x20];     // 0x0f4
    s8 pointX;           // 0x114
    s8 pointY;           // 0x115
    u8 unk116[0x62];
    ActionPoint point;   // 0x178, negative until resolved
};

struct ActionView {
    u8 unk00[0xa4];
    ActionPoint point;   // 0xa4
    s16 id;              // 0xac
    u8 unkae[2];
    f32 offset[3];       // 0xb0
};

extern "C" {

void btlActionPrepareFromSource(ActionSource *source, void *record, s32 mode);

// Reset the view and copy the source's action point, resolving it first when it is still unset.
void FUN_004d88fc(ActionView *view, ActionSource *source)
{
    view->offset[2] = 0;
    view->offset[1] = 0;
    view->offset[0] = 0;
    view->id = -1;
    if (source->point.x < 0 || source->point.y < 0) {
        btlActionPrepareFromSource(source, source->record, 0);
        source->point.x = source->pointX;
        source->point.y = source->pointY;
    }
    view->point = source->point;
}

} /* extern "C" */
