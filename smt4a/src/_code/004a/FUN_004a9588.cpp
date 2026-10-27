/* NON_MATCHING: register allocation only: retail reuses r5 for the entry-offset arithmetic and keeps the vector store address in r7 (built pushes r8). */
#include "battle/btlUI.h"
#include "shard/S1Mover.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;

/* Reuse a group at the same position, or open an empty group, and append a request. */
u32 FUN_004a9588(u32 unused, u32 value, u8 first, u8 second,
    s32 enabled, u8 mode, f32 x, f32 y, f32 z)
{
    /* Request banks cross the objD/tail-union boundary in BtlUiA. A local
       complete view avoids extending or overlapping either shared member. */
    struct PositionedRequest {
        Vec3f position;
        u8 active;
        u8 mode;
        u8 unk0E[2];
        u32 value;
        u8 unk14[2];
        u8 first;
        u8 second;
    };
    struct RequestBank { PositionedRequest entries[32]; };
    struct RequestView {
        u8 unk0000[0xC054];
        RequestBank banks[16];
        u8 unkF054[0x10];
        s8 counts[16];
    };
    typedef char RequestViewOffsets[
        sizeof(PositionedRequest) == 0x18 &&
        offsetof(PositionedRequest, active) == 0xC &&
        offsetof(PositionedRequest, value) == 0x10 &&
        offsetof(RequestView, banks) == 0xC054 &&
        offsetof(RequestView, counts) == 0xF064 ? 1 : -1];
    if (!enabled) {
        return 0xFFFFFFFF;
    }
    RequestView *ui = (RequestView *)g_btlUi.ui;
    s32 group = -1;
    for (s32 i = 0; i < 16; ++i) {
        s32 count = ui->counts[i];
        if ((u32)(count - 1) < 31) {
            if (ui->banks[i].entries[count - 1].position.x == x && ui->banks[i].entries[count - 1].position.y == y &&
                ui->banks[i].entries[count - 1].position.z == z) {
                group = i;
                break;
            }
        }
    }
    if (group < 0) {
        for (s32 i = 0; i < 16; ++i) {
            if (ui->counts[i] <= 0) {
                group = i;
                break;
            }
        }
    }
    if ((u32)group >= 16) {
        return 0xFFFFFFFF;
    }
    if (ui->counts[group] >= 32) {
        return 0xFFFFFFFF;
    }
    s32 index = ui->counts[group];
    ui->banks[group].entries[index].active = 1;
    ui->banks[group].entries[index].mode = mode;
    ui->banks[group].entries[index].position.x = x;
    ui->banks[group].entries[index].position.y = y;
    ui->banks[group].entries[index].position.z = z;
    ui->banks[group].entries[index].value = value;
    ui->banks[group].entries[index].first = first;
    ui->banks[group].entries[index].second = second;
    ++ui->counts[group];
    return group;
}
}
