#include "common.h"

struct ScaleEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ f32 value;
    /* 0x2C */ u8 unk2c[0x1a4];
};

struct ScaleTable {
    /* 0x0000 */ u8 unk0000[0x1ed4];
    /* 0x1ED4 */ ScaleEntry *entries;
};

struct ScaleOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ScaleTable *table;
};

typedef char ScaleEntrySize[sizeof(ScaleEntry) == 0x1d0 ? 1 : -1];

extern "C" {

/* Virtual getter: returns the value of the table entry at the index. */
f32 _ZNK9Obj4209d87vfunc1cEi(const ScaleOwner *self, s32 index)
{
    ScaleEntry *entry = self->table->entries + index;

    return entry->value;
}

} /* extern "C" */
