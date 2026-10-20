#include "common.h"

extern "C" {

void wstrcatU16(u32 cursor, u8 *table);
extern u8 DAT_0053a778[];

typedef struct Writer {
    /* 0x000 */ u8 unk000[0x0C];
    /* 0x00C */ u32 cursor;
    /* 0x010 */ u8 unk010[0x201];
    /* 0x211 */ u8 enabled;
} Writer;

/* When enabled, writes the table at 0x53A778 at the cursor and advances it by 4. */
void FUN_002ee7c4(Writer *writer)
{
    if (writer->enabled != 0) {
        wstrcatU16(writer->cursor, DAT_0053a778);
        writer->cursor = writer->cursor + 4;
    }
}

} /* extern "C" */
