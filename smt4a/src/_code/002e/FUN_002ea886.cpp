/* NON_MATCHING: the virtual-call target is loaded into r2 where retail reuses the dead r5. */
#include "common.h"

extern "C" {

typedef struct Entry {
    u8 unk00[0x24];
    u8 kind;        /* 0x24 */
    u8 unk25[0x17];
    u16 flags;      /* 0x3c: low nibble is the entry type */
} Entry;

/* Polymorphic handler: Process is the fifth virtual slot. */
class Handler {
public:
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual u32 Process(Entry *entry);
};

/* Owner object: the handler pointer lives at 0xf0. */
typedef struct {
    u8 unk00[0xf0];
    Handler *handler;   /* 0xf0 */
} Owner;

int FUN_002eafbe(Entry *entry);

/* Returns 4 for a type-1 entry rejected by FUN_002eafbe, otherwise lets the handler process it. */
u32 FUN_002ea886(Owner *owner, Entry *entry)
{
    if ((entry->flags & 0xf) == 1 && entry->kind == 1 && FUN_002eafbe(entry) == 0) {
        return 4;
    }
    return owner->handler->Process(entry);
}

} /* extern "C" */
