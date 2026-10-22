/* NON_MATCHING: Retail movs r6, r0 differs from recovered mov r4, r1. */
#include "common.h"

// Private view of the five locale-table slots used here.
struct LocaleTablesView {
    u8* unk00; // 0x00
    u8* unk04; // 0x04
    u8* unk08; // 0x08
    u8* unk0C; // 0x0C
    u8* unk10; // 0x10
};

extern "C" {
extern u8 DAT_0042a53c;
u8* FUN_001382e4(u8* data, u32 selector);
u8* FUN_0014d9f0(u8* data, u32 selector);
LocaleTablesView* libcLocaleGetTables(void);
int FUN_002c6864(u32 locale, u32 flags);

// Updates the selected locale-table slots before applying the locale flags.
void FUN_002c6966(u32 locale, u32 flags, u32 selector)
{
    if (flags & 2) {
        u8* table = FUN_001382e4(&DAT_0042a53c, selector);
        if (!table)
            return;
        libcLocaleGetTables()->unk04 = table + 1;
    }

    if (flags & 1) {
        u8* table = &DAT_0042a53c;
        if (!table)
            return;
        libcLocaleGetTables()->unk00 = table;
    }

    if (flags & 4) {
        u8* table = &DAT_0042a53c;
        if (!table)
            return;
        libcLocaleGetTables()->unk08 = table;
    }

    if (flags & 8) {
        u8* table = FUN_0014d9f0(&DAT_0042a53c, selector);
        if (!table)
            return;
        libcLocaleGetTables()->unk0C = table;
    }

    if (flags & 16) {
        u8* table = &DAT_0042a53c;
        if (!table)
            return;
        libcLocaleGetTables()->unk10 = table;
    }

    FUN_002c6864(locale, flags);
}
}
