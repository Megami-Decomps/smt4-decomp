/* NON_MATCHING: the vtable pointer is held in r5 across the argument setup in retail; built loads the function pointer immediately through r1. */
#include "common.h"

extern "C" {

/* Polymorphic target: Apply is the third virtual slot. */
class Target {
public:
    virtual void Slot0();
    virtual void Slot1();
    virtual void Apply(u8 *record, u32 first, u32 second);
};

/* Object holding a target at 0x3c, parameters at 0x40/0x84, a record at 0x58 and a mode flag at 0x6c. */
typedef struct {
    u8 unk00[0x3c];
    Target *target;     /* 0x3c */
    u32 first;          /* 0x40 */
    u8 unk44[0x14];
    u8 record[0x14];    /* 0x58 */
    u8 mode;            /* 0x6c */
    u8 unk6d[7];
    u32 arg74;          /* 0x74 */
    u8 unk78[0xc];
    u32 second;         /* 0x84 */
} Owner;

int FUN_002ea43c(Owner *owner);
int FUN_002ea446(Owner *owner, u32 arg);

/* Applies the record through the target, then runs the mode-specific follow-up. */
void FUN_0011b3fe(Owner *owner)
{
    owner->target->Apply(owner->record, owner->first, owner->second);
    if (owner->mode != 0) {
        FUN_002ea446(owner, owner->arg74);
        return;
    }
    FUN_002ea43c(owner);
}

} /* extern "C" */
