#include "battle/BtlTables.h"

extern "C" {

void *dataTableFileGetTable(void *file, u32 index);

/* The part of the battle state that holds the loaded data-table file. */
struct BtlTableFileView {
    /* 0x0000 */ u8 unk0000[0x2270];
    /* 0x2270 */ void *file;
};

void *btlGetTable(BtlMainStateA *state, u32 table)
{
    void *file = static_cast<BtlTableFileView *>(static_cast<void *>(state))->file;

    if (file != NULL) {
        return dataTableFileGetTable(file, table);
    }
    return file;
}

} /* extern "C" */
