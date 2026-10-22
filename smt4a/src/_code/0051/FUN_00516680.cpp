/* NON_MATCHING: context pair load and packed-bit register scheduling differ. */
#include "common.h"

namespace {
struct SelectionView {
    u8 unk00[0x1C]; // 0x00
    u32 entryIndex; // 0x1C
    u8 unk20[5];    // 0x20
    u8 packedValue; // 0x25
};

struct EntryBitsView {
    u8 unk00[0x2D4]; // 0x00
    u32 packedBits;  // 0x2D4
};

struct EntryFlagsView {
    u8 unk00[0x20];  // 0x00
    u32 packedFlags; // 0x20
};

struct EntryView {
    u8 unk00[8];           // 0x00
    EntryBitsView* bits;   // 0x08
    u8 unk0C[0x20];        // 0x0C
    EntryFlagsView* flags; // 0x2C
};

struct EntryTableView {
    u8 unk00[0x164];      // 0x00
    EntryView** entries; // 0x164
};

struct PackingContextView {
    u8 unk00[8];              // 0x00
    SelectionView* selection; // 0x08
    EntryTableView* table;     // 0x0C
};
}

extern "C" __softfp u32 FUN_00524fb4(f32 value);

// Pack the converted product, optional selected-entry fields, and high-byte tag.
extern "C" unsigned long long FUN_00516680(
    u32 owner, PackingContextView* context, u32 tag, f32 factor)
{
    unsigned long long packed = FUN_00524fb4(factor * 16777215.0f) & 0x00FFFFFF;
    packed <<= 21;

    const SelectionView* selection = context->selection;
    const EntryTableView* table = context->table;
    if (selection != 0 && table != 0) {
        const EntryView* entry = table->entries[selection->entryIndex];
        packed |= entry->bits->packedBits & 0x001FFFFF;
        packed |= static_cast<unsigned long long>(entry->flags->packedFlags & 3) << 54;
        packed |= static_cast<unsigned long long>(selection->packedValue) << 45;
    }

    packed |= static_cast<unsigned long long>(tag) << 56;
    return packed;
}
