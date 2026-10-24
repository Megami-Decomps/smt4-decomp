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
    /* 0x0000 */ u8 unk0000[0x2bc4];
    /* 0x2bc4 */ NameEntry entries[2];
};

u8 keyedRecordRegisterName(NameRecord *record);
u8 FUN_00249e54(u8 id, const char *name);
void FUN_0024679c(void);

/* Registers every entry whose name starts with "VER", replacing its id with the one the name resolves to, then continues with FUN_0024679c. */
void nameEntriesRegisterVerNamesThenContinue(NameOwner *owner)
{
    s32 i;

    for (i = 0; i < 2; i++) {
        NameEntry *entry = &owner->entries[i];
        const char *name = entry->name;

        if (name[0] == 'V' && name[1] == 'E' && name[2] == 'R') {
            entry->id = keyedRecordRegisterName(&entry->record);
            entry->id = FUN_00249e54(entry->id, name);
        }
    }
    FUN_0024679c();
}

} /* extern "C" */
