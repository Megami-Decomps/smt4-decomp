/* NON_MATCHING: the first flag-byte store is moved after record initialization. */
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

extern "C" {
extern MapWorkEntries *DAT_00581280;
void FUN_002241d0();

void FUN_0020ef94()
{
    // This controller variant has larger records and more entries than the shared prefix.
    struct ControllerRecord {
        u8 active, firstFlag, secondFlag, unk03;
        u16 unk04;
        s16 firstId, secondId;
        u16 state;
        f32 x, y, z;
        f32 scalar18;
        f32 angle;
        u32 unk20;
        f32 scalar24;
        u16 unk28, unk2a;
        u8 ready;
        u8 unk2d[3];
        u32 unk30, unk34, unk38;
    };
    struct ControllerWorkView {
        u32 first, second, third;
        ControllerRecord records[64];
        u8 active;
        u8 unkf0d[3];
        u32 count;
        u8 unkf14[0x2c];
        u8 ready;
        u8 unkf41[0xb];
        u32 unkf4c;
        s32 selected;
    };
    typedef char ControllerLayoutCheck[sizeof(ControllerRecord) == 0x3c &&
        offsetof(ControllerWorkView, records) == 0xc &&
        offsetof(ControllerWorkView, active) == 0xf0c &&
        offsetof(ControllerWorkView, selected) == 0xf50 ? 1 : -1];
    ControllerWorkView *work = (ControllerWorkView *)DAT_00581280;
    work->third = 0;
    work->first = 0;
    work->second = 0;
    work->active = 0;
    work->ready = 0;
    work->count = 0;
    work->unkf4c = 0;
    work->selected = -1;
    for (s32 index = 0; index < 64; ++index) {
        work->records[index].firstFlag = 0;
        work->records[index].secondFlag = 0;
        work->records[index].secondId = -1;
        work->records[index].state = 0;
        work->records[index].x = 4.0f;
        work->records[index].y = -9.0f;
        work->records[index].z = 0.0f;
        work->records[index].scalar18 = 0.0f;
        work->records[index].angle = 90.0f;
        work->records[index].unk20 = 0;
        work->records[index].scalar24 = 0.0f;
        work->records[index].unk30 = 0;
        work->records[index].firstId = -1;
        work->records[index].unk34 = 0;
        work->records[index].unk28 = 0;
        work->records[index].unk2a = 0;
        work->records[index].unk38 = 0;
        work->records[index].ready = 0;
        work->records[index].active = 0;
    }
    FUN_002241d0();
}
}
