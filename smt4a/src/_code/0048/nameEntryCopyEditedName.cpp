/* NON_MATCHING: compiler uses a countdown/pointer-induction loop and removes retail's signed-byte index and separate high-byte narrowing. */
#include "common.h"

struct NameEntryMenu;
struct NameBuffer;

struct NameInputView {
    u8 unk000[0xb0];
    s8 text[18];

    s16 characterAt(s8 index) const
    {
        if (index < 0) {
            return (s16)0x8140;
        }
        u16 high = (u8)text[index * 2];
        high <<= 8;
        return (s16)(high + (u8)text[index * 2 + 1]);
    }
};

extern "C" void nameEntryCopyEditedName(NameEntryMenu* menu, NameBuffer* name)
{
    const NameInputView* input = (const NameInputView*)menu;
    u8* output = (u8*)name;
    for (s32 index = 0; index < 9; ++index) {
        s16 character = input->characterAt((s8)index);
        output[index * 2] = (u8)((u16)character >> 8);
        output[index * 2 + 1] = (u8)character;
    }
}
