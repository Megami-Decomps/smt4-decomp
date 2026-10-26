/* NON_MATCHING: the sound branch layout and the clamp now match; retail stores the state/step pair with STRD, forms the flags write-back address from a base register and reads the hasValue/unk861 bytes through a +0x800 base. */
#include "classes/Obj55c8d0.h"
#include "classes/Obj55c89c.h"
#include "shard/S1ListMenu.h"
#include "code/Code0033.h"

struct BibleSelectionEntry {
    Vec2Int position;
    u8 data[0x84];
};

struct BibleSelectionTarget;
struct BibleSelectionTargetVtbl {
    void *destructors[2];
    void (*apply)(BibleSelectionTarget *, const SelectionFlags *);
};
struct BibleSelectionTarget {
    const BibleSelectionTargetVtbl *vtbl;
    u16 flags;
};

extern "C" {
s32 entryDispatchUpdate(void *, s32);
s32 vec2GetXInt(const Vec2Int *);
s32 vec2GetYInt(const Vec2Int *);
void pointConvertToFloat(SelectionRectangle *, s32, s32);
void sysPlaySe(u32);
void FUN_0032cfe0(Obj55c8d0 *);
void FUN_004d05c4(Obj55ca08 *, s32, s32, s32);

// Keep the cursor on the selected entry, then reopen touch regions after a selection changes.
}

void Obj55c89c::FUN_004a15a0()
{
    Obj55c8d0 * menu = reinterpret_cast<Obj55c8d0 *>(this);
    struct StateView { u8 prefix[0x14]; u32 state; u32 step; };
    struct CountView { u8 prefix[8]; s32 count; };
    struct SelectionView {
        u8 prefix[0xFC];
        BibleSelectionEntry entries[13];
        u8 padding[0xA05C];
        s16 selectedIndex;
    };
    StateView *state = reinterpret_cast<StateView *>(menu);
    SelectionView *selection = reinterpret_cast<SelectionView *>(menu);
    s32 changed = entryDispatchUpdate(menu->unk0dc, selection->selectedIndex);
    const Vec2Int *position = &selection->entries[selection->selectedIndex].position;
    s32 y = vec2GetYInt(position);
    s32 x = vec2GetXInt(position);
    pointConvertToFloat(&menu->rectangle, x, y);
    if (!changed)
        return;

    if (!menu->hasValue)
        sysPlaySe(0x2F);
    else
        sysPlaySe(menu->unk861[0] == 1 ? 0x4E : 0x4F);
    FUN_0032cfe0(menu);
    FUN_003343f0(0);
    state->state = 2;
    state->step = 0;
    pointConvertToFloat(&menu->rectangle, 0, 0);
    BibleSelectionTarget *target = reinterpret_cast<BibleSelectionTarget *>(menu->touchSelection.unk34);
    target->vtbl->apply(target, &menu->flags);
    reinterpret_cast<BibleSelectionTarget *>(menu->touchSelection.unk34)->flags |= 0x1000;
    s32 count = reinterpret_cast<const CountView *>(&menu->flags)->count;
    count = count < 10 ? count : 10;
    FUN_004d05c4(&menu->touchSelection, 0x14, 0x40E, count);
    menu->touchSelection.soundEnabled = 1;
}
