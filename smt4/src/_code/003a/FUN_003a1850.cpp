#include "common.h"

extern "C" {

struct CommandSlot {
    /* 0x0 */ u32 kind;
    /* 0x4 */ u32 value;
};

struct CommandRecord {
    /* 0x0 */ u32 flags;
    /* 0x4 */ CommandSlot command;
};

static inline void commandSet(CommandSlot *slot, u32 kind, u32 value)
{
    CommandSlot command = { kind, value };
    *slot = command;
}

/* Virtual slot: marks the record (flags, kind, value) active as command kind 19 with no value. */
void FUN_003a1850(CommandRecord *record)
{
    record->flags |= 1;
    commandSet(&record->command, 19, 0);
}

} /* extern "C" */
