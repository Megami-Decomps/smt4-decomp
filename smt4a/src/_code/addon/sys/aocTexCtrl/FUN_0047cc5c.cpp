/* NON_MATCHING: header copy and cached header pointer now follow retail's reloads; saved-register assignment (retail keeps `control` in fp) and the row allocation/link scheduling still differ. */
#include "addon/sys/aocTexCtrl.h"
#include "AsdSDK/AsdDebug.h"

union AocTexturePackageHeader {
    u8 bytes[0x40];
    struct {
        u8 unk00[0x20];
        s32 rowCount;
        u8 unk24[0x1C];
    } info;
};
struct AocTexturePackageEntry { u32 words[5]; };
struct AocTexturePackageRow {
    u32 kind;
    s32 count;
    u8 flags;
    u8 unk09[3];
    AocTexturePackageEntry *entries;
    AocTexturePackageRow *next;
};
struct AocTexturePackageView {
    AocTexturePackageHeader *header;
    AocTexturePackageRow *rows;
};
struct PackedAocTextureRow {
    u8 kind;
    u8 unk01[3];
    u8 count;
    u8 unk05[3];
    u8 flags;
    u8 unk09[3];
};
extern "C" {
extern const char DAT_005271bc[];
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void __aeabi_memcpy4(void *, const void *, u32);

void FUN_0047cc5c(AocTexCtrl *control, const AocTexturePackageHeader *const *source)
{
    if (!control->state) {
        const AocTexturePackageHeader *header = *source;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\sys\\aocTexCtrl.cpp", 902);
        control->state = static_cast<AocTexState *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AocTexturePackageView), 1));
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\sys\\aocTexCtrl.cpp", 904);
        AocTexturePackageHeader *copy = static_cast<AocTexturePackageHeader *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AocTexturePackageHeader), 1));
        reinterpret_cast<AocTexturePackageView *>(control->state)->header = copy;
        *copy = *header;
        AocTexturePackageHeader *stored = reinterpret_cast<AocTexturePackageView *>(control->state)->header;
        const u8 *cursor = reinterpret_cast<const u8 *>(*source + 1);
        AocTexturePackageRow *previous = NULL;
        for (s32 i = 0; i < stored->info.rowCount; ++i) {
            const PackedAocTextureRow *input = reinterpret_cast<const PackedAocTextureRow *>(cursor);
            asdDebugTrace(DAT_005271bc, 97);
            AocTexturePackageRow *row = static_cast<AocTexturePackageRow *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AocTexturePackageRow), 1));
            row->kind = input->kind;
            row->count = input->count;
            row->flags = input->flags;
            if (row->count > 0) {
                asdDebugTrace(DAT_005271bc, 111);
                row->entries = static_cast<AocTexturePackageEntry *>(asdMemoryAllocTracked(0x100, 0x100, 0, row->count * sizeof(AocTexturePackageEntry), 1));
            } else {
                row->entries = NULL;
            }
            if (row->count > 0)
                __aeabi_memcpy4(row->entries, input + 1, row->count * sizeof(AocTexturePackageEntry));
            if (!previous)
                reinterpret_cast<AocTexturePackageView *>(control->state)->rows = row;
            else
                previous->next = row;
            cursor += sizeof(PackedAocTextureRow) + row->count * sizeof(AocTexturePackageEntry);
            previous = row;
        }
    }
}
}
