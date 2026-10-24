/* NON_MATCHING: plays a demon's voice/motion line: picks the name slot of the 0x7c-byte record for the requested kind (with the random variants), copies the 10-character name, patches its trailing digits / suffix letter from the kind-specific override table, and starts it; written from the decompilation, the argument of FUN_00184310, the field read from its result and the base offset of the name slots inside the record are recovered from lost arguments, and the float scale arrives in s0 (VFP argument) */
#include "common.h"

#define LINE_TABLE 0x3E
#define LINE_TABLE_OVERRIDES 1
#define LINE_NAME_LENGTH 10
#define LINE_KIND_COUNT 11
#define LINE_RECORD_SIZE 0x7C
#define LINE_OVERRIDE_STRIDE 8
#define LINE_KIND_SLOT_A 5
#define LINE_KIND_SLOT_B 6
#define LINE_OWNER_KEY_OFFSET 0x9E
#define LINE_SUFFIX_NONE 0
#define LINE_SUFFIX_A 1
#define LINE_SUFFIX_B 2
#define LINE_ASCII_ZERO 0x30
#define LINE_START_ARG 4

/* A voice-line record: ten-character names, one per slot, followed by the data (observed fields). */
struct LineRecord {
    /* 0x00 */ u16 key;
    /* 0x02 */ char names[12][LINE_NAME_LENGTH];
    /* 0x7A */ u8 unk7A[2];
};

/* An override entry: which owner/index pair it applies to and how it patches the name. */
struct LineOverride {
    /* 0x00 */ u16 owner;
    /* 0x02 */ u16 index;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 suffix;        /* 0: terminate the name, 1: 'a', 2: 'b' */
    /* 0x06 */ u8 chance;        /* percent */
    /* 0x07 */ u8 unk07;
};

extern "C" {
void dataTableGet(s32 table, s32 sub);
s32 dataTableGetCount(void);
void *dataTableGetEntries(void);
u8 *FUN_00184310(u32 id);
s32 lcgRandomRange(s32 max);
void rt_memcpy(void *destination, const void *source, s32 size);
void rt_aeabi_memclr(void *block, s32 size);
u32 FUN_0014af98(void);
void FUN_001628c0(const char *name, u32 value, s32 mode, u32 argument);

/* Chooses the record slot for a line kind (randomised for several kinds). */
static __inline s32 lineSlot(s32 kind)
{
    s32 slot = 0;
    switch (kind) {
    case 0: {
        s32 r = lcgRandomRange(2);
        slot = r == 0 ? 0 : r == 1 ? 1 : 2;
        break;
    }
    case 1: {
        s32 r = lcgRandomRange(2);
        slot = r == 0 ? 4 : r == 1 ? 5 : 6;
        break;
    }
    case 2: slot = 0xB; break;
    case 3: slot = lcgRandomRange(1) != 0 ? 5 : 4; break;
    case 4: {
        u32 r = lcgRandomRange(9);
        slot = r <= 5 ? 3 : r >= 8 ? 6 : 4;
        break;
    }
    case 5: slot = lcgRandomRange(1) != 0 ? 9 : 8; break;
    case 6: slot = 2; break;
    case 7: slot = 10; break;
    case 8: slot = 1; break;
    case 9: slot = lcgRandomRange(1) != 0 ? 10 : 0; break;
    case 10: slot = 7; break;
    }
    return slot;
}

static __inline bool lineIsDigit(char c)
{
    return (u32)(c - LINE_ASCII_ZERO) < 10;
}

void FUN_0015f490(u32 id, s32 kind, u32 argument, u32 variant, f32 scale)
{
    dataTableGet(LINE_TABLE, 0);
    LineRecord *records = static_cast<LineRecord *>(dataTableGetEntries());
    if (kind >= LINE_KIND_COUNT)
        return;
    dataTableGet(LINE_TABLE, 0);
    s32 recordCount = dataTableGetCount();
    u32 owner = id & 0xFFFF;
    u8 *source = FUN_00184310(owner);
    if (owner == 0)
        return;
    u32 key = owner;
    if (recordCount > 0)
        key = source[LINE_OWNER_KEY_OFFSET];

    s32 found = 0;
    for (s32 i = 0; i < recordCount; i++) {
        if (reinterpret_cast<LineRecord *>(reinterpret_cast<u8 *>(records) + i * LINE_RECORD_SIZE)->key == key) {
            found = i;
            break;
        }
    }
    LineRecord record;
    rt_memcpy(&record, reinterpret_cast<u8 *>(records) + found * LINE_RECORD_SIZE, LINE_RECORD_SIZE);

    char name[LINE_NAME_LENGTH];
    rt_aeabi_memclr(name, LINE_NAME_LENGTH);
    s32 slot = lineSlot(kind);
    for (s32 i = 0; i < LINE_NAME_LENGTH; i++) {
        name[i] = record.names[slot][i];
        if (name[i] == 0)
            break;
    }

    if ((kind == LINE_KIND_SLOT_A || kind == LINE_KIND_SLOT_B) && variant != 0) {
        dataTableGet(LINE_TABLE, LINE_TABLE_OVERRIDES);
        LineOverride *overrides = static_cast<LineOverride *>(dataTableGetEntries());
        dataTableGet(LINE_TABLE, LINE_TABLE_OVERRIDES);
        s32 count = dataTableGetCount();
        for (s32 i = 0; i < count; i++) {
            LineOverride *entry = &overrides[i];
            if (entry->owner != id || entry->index != variant)
                continue;
            if ((u32)lcgRandomRange(99) < entry->chance) {
                s32 units = -1;
                s32 tens = -1;
                s32 suffix = -1;
                for (s32 pos = LINE_NAME_LENGTH - 1; pos >= 0; pos--) {
                    if (!lineIsDigit(name[pos]))
                        continue;
                    if (units >= 0) {
                        tens = pos;
                        break;
                    }
                    units = pos;
                    if (pos + 1 < LINE_NAME_LENGTH)
                        suffix = pos + 1;
                }
                if (units >= 0)
                    name[units] = (u8)entry->index % 10 + LINE_ASCII_ZERO;
                if (tens >= 0)
                    name[tens] = (u8)entry->index / 10 % 10 + LINE_ASCII_ZERO;
                if (suffix >= 0) {
                    if (entry->suffix == LINE_SUFFIX_NONE)
                        name[suffix] = 0;
                    else if (entry->suffix == LINE_SUFFIX_A)
                        name[suffix] = 'a';
                    else if (entry->suffix == LINE_SUFFIX_B)
                        name[suffix] = 'b';
                }
            }
            break;
        }
    }

    FUN_001628c0(name, (u32)((f32)FUN_0014af98() * scale) & 0xFF, LINE_START_ARG, argument);
}

} /* extern "C" */
