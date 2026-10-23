/* NON_MATCHING: bank-base address anchoring and failure epilogue placement differ. */
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
            const PositionedRequest *last = &ui->banks[i].entries[count - 1];
            if (last->position.x == x && last->position.y == y && last->position.z == z) {
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
    if ((u32)group < 16 && ui->counts[group] < 32) {
        PositionedRequest *request = &ui->banks[group].entries[ui->counts[group]];
        request->active = 1;
        request->mode = mode;
        request->position.x = x;
        request->position.y = y;
        request->position.z = z;
        request->value = value;
        request->first = first;
        request->second = second;
        ++ui->counts[group];
        return group;
    }
    return 0xFFFFFFFF;
}
}
