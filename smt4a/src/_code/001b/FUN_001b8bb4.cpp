/* NON_MATCHING: SDK command-list relocator; retail saves r0-r3 in its prologue, keeps the patch cursor in a VFP register (vldr s16) and dispatches both kind switches through jump tables; built allocates differently */
#include "common.h"

/* Relocation kinds in the top bits of each table entry (bits 25..28) select how the word at the
 * patch site is rewritten: plain section offset, physical address, VRAM-relative address, ... */
enum RelocationKind {
    RELOC_PLAIN = 0,
    RELOC_SECTION_1 = 1,
    RELOC_SECTION_2 = 2,
    RELOC_SECTION_2_OVERRIDE = 3,
    RELOC_SECTION_3 = 4,
    RELOC_PHYSICAL_SHIFTED = 5,
    RELOC_PHYSICAL_VRAM = 6,
    RELOC_PHYSICAL_VRAM_FLAGGED = 7,
    RELOC_PHYSICAL_PLAIN = 8,
    RELOC_SECTION_4 = 9,
    RELOC_PHYSICAL_SHIFTED_B = 10,
    RELOC_PHYSICAL_VRAM_B = 11,
    RELOC_PHYSICAL_VRAM_FLAGGED_B = 12,
    RELOC_PHYSICAL_PLAIN_B = 13,
    RELOC_BASE_SHIFTED = 14
};

#define RELOC_FAILED 0x80000080
#define RELOC_NEEDS_PATCH_LIST_BIT 2
#define RELOC_FLAG_VRAM 0x80000000

struct RelocatableCommandList {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u8 flags;
    /* 0x41 */ u8 unk41;
    /* 0x42 */ u16 patchCount;   /* patch sites the list expects to record */
};

extern "C" {
u32 asdGxGetPhysicalAddress(u32 address);
u32 vramAreaGetBaseAddress(u32 area);

/* Applies a relocation table to a command list: every entry names a word of the list and the
 * section whose base it is relative to. Writes the resulting cursor and status to `result`. */
void FUN_001b8bb4(u32 *result, u32 unused, const u32 *table, u32 count, const u32 *sections,
                  const RelocatableCommandList *list, u32 *patchCursor)
{
    u32 status = 0;
    bool recordPatches = (~(list->flags >> 2) & 1) != 0;
    u32 vramBase = asdGxGetPhysicalAddress(vramAreaGetBaseAddress(0x20000));
    u32 patched = 0;
    u32 cursor = *patchCursor;

    for (u32 i = 0; i < count; i++) {
        u32 entry = table[i];
        u32 kind = (entry & 0x1FFFFFFF) >> 25;
        u32 offset = entry & 0x1FFFFFF;
        s32 override = sections[8];
        if (kind != RELOC_SECTION_1)
            offset <<= 2;
        s32 section;
        if ((entry >> 29) != 2 || (section = override) == 0)
            section = sections[entry >> 29];
        u32 *site = (u32 *)(section + offset);

        s32 base;
        switch (kind) {
        default:
            base = 0;
            break;
        case RELOC_SECTION_1:
            base = 1;
            break;
        case RELOC_SECTION_2:
        case RELOC_SECTION_2_OVERRIDE:
            base = 2;
            break;
        case RELOC_SECTION_3:
        case RELOC_PHYSICAL_SHIFTED:
        case RELOC_PHYSICAL_VRAM:
        case RELOC_PHYSICAL_VRAM_FLAGGED:
        case RELOC_PHYSICAL_PLAIN:
            base = 3;
            break;
        case RELOC_SECTION_4:
        case RELOC_PHYSICAL_SHIFTED_B:
        case RELOC_PHYSICAL_VRAM_B:
        case RELOC_PHYSICAL_VRAM_FLAGGED_B:
        case RELOC_PHYSICAL_PLAIN_B:
            base = 4;
            break;
        }
        u32 value = sections[base] + *site;

        switch (kind) {
        case RELOC_SECTION_2_OVERRIDE:
            if (override != 0)
                value = override + *site;
            /* fall through */
        case RELOC_PLAIN:
        case RELOC_SECTION_1:
        case RELOC_SECTION_2:
        case RELOC_SECTION_3:
        case RELOC_SECTION_4:
            *site = value;
            break;
        case RELOC_PHYSICAL_SHIFTED:
        case RELOC_PHYSICAL_SHIFTED_B:
            *site = asdGxGetPhysicalAddress(value) >> 3;
            goto record;
        case RELOC_PHYSICAL_VRAM:
        case RELOC_PHYSICAL_VRAM_B:
            *site = asdGxGetPhysicalAddress(value) - vramBase;
            goto record;
        case RELOC_PHYSICAL_VRAM_FLAGGED:
        case RELOC_PHYSICAL_VRAM_FLAGGED_B:
            *site = (asdGxGetPhysicalAddress(value) - vramBase) | RELOC_FLAG_VRAM;
            goto record;
        case RELOC_PHYSICAL_PLAIN:
        case RELOC_PHYSICAL_PLAIN_B:
            *site = asdGxGetPhysicalAddress(value) - vramBase;
        record:
            if (recordPatches) {
                patched++;
                u32 *slot = (u32 *)((cursor + 3) & ~3u);
                cursor = (u32)(slot + 1);
                *patchCursor = cursor;
                *slot = value;
            }
            break;
        case RELOC_BASE_SHIFTED:
            *site = vramBase >> 3;
            break;
        default:
            status = RELOC_FAILED;
            break;
        }
    }
    if (recordPatches)
        count = list->patchCount;
    if (recordPatches && count != patched)
        status = RELOC_FAILED;
    result[0] = cursor;
    result[1] = status;
}

} /* extern "C" */
