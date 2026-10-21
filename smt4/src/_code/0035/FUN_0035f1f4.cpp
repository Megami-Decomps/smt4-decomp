/* NON_MATCHING: retail is a C++ constructor; proper class/constructor/vtable symbol migration is required before this C-linkage unit can be replaced. */
#include "shard/W6_W6Match1_TextScannerState.h"

extern "C" {
extern const u32 DAT_00420fac[];

// Initializes the recovered text-scanner object layout.
void FUN_0035f1f4(TextScannerState* scanner)
{
    scanner->vtable = DAT_00420fac;
    scanner->unk04 = 0;
    scanner->unk08 = 0;
    scanner->unk0c = 0;
    scanner->unk10 = 0;
    scanner->unk14 = 0;
    scanner->unk18 = 0;
    scanner->unk19 = 0;
    scanner->unk1a = 0;
    scanner->unk1c = 0;
    scanner->unk20 = 0;
    scanner->unk24 = 0;
    scanner->unk28 = 0;
    scanner->unk2c = 0;
    scanner->enabled = 1;
}
}
