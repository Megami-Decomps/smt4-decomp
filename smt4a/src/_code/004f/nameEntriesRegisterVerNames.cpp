#include "common.h"

extern "C" {

struct NameRecord {
    /* 0x00 */ u8 data[0x84];
};

struct NameEntry {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ const char *name;
    /* 0x08 */ NameRecord record;
};

struct NameOwner {
    /* 0x0000 */ u8 unk0000[0x281c];
    /* 0x281c */ NameEntry entries[11];
};

u8 keyedRecordRegisterName(NameRecord *record);
u8 FUN_003478dc(u8 id, const char *name);

/* Registers every entry whose name starts with "VER", replacing its id with the one the name resolves to. */
void nameEntriesRegisterVerNames(NameOwner *owner)
{
    s32 i;

    for (i = 0; i < 11; i++) {
        NameEntry *entry = &owner->entries[i];
        const char *name = entry->name;

        if (name[0] == 'V' && name[1] == 'E' && name[2] == 'R') {
            entry->id = keyedRecordRegisterName(&entry->record);
            entry->id = FUN_003478dc(entry->id, name);
        }
    }
}

} /* extern "C" */
