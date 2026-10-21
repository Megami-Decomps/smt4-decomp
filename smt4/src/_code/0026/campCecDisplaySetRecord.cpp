#include "shard/S1Mover.h"

struct RecordDisplayWork {
    /* 0x00 */ Vec3f tuning;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ void* display;
    /* 0x20 */ const void* record;
};

extern "C" void FUN_00343ce4(void* display, const void* record, u32 kind);

// Reset display tuning and delegate the selected record's rendering.
extern "C" void campCecDisplaySetRecord(RecordDisplayWork* work, const void* record)
{
    void* display = work->display;
    if (display != NULL) {
        work->record = record;
        work->unk18 = 0.012f;
        work->unk10 = 350.0f;
        work->tuning.x = 1.2f;
        work->tuning.y = 5.3f;
        work->tuning.z = 0.5f;
        FUN_00343ce4(display, record, 7);
    }
}
