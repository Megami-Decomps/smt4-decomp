/* NON_MATCHING: retail computes the slot id inside each branch (ctor, format, id, then both branches share the cd2c/destructor tail) and addresses slot through this+0x20; armcc builds the object in one ternary and computes the id once */
/* Gives the slot's connection settings its name: the system table's configured text when it has one, else the default. */
#include "classes/Obj558cbc.h"
#include "classes/Obj55a218.h"
#include "shard/W4_Match4_Obj559ecc.h"

extern "C" {
extern const u16 DAT_00630430[];
u32 FUN_002eac34(u8 slot);
void FUN_0010cd2c(u32 id, const Obj55aff4 *name);
void onlineFormatWideString(Obj55aff4 *output, const u16 *format, const u16 *text, u32 value);
}

/* The name text formatted with the system table's value. */
static Obj55aff4 formatSlotName(u32 value)
{
    Obj55aff4 name;
    onlineFormatWideString(&name, (const u16 *)L"%s", DAT_00630430, value);
    return name;
}

void Obj558cbc::applySlotName()
{
    const Obj55aff4 &name = g_systemTable.unk10 != 0 ? formatSlotName(g_systemTable.unk10) : Obj55aff4(DAT_00630430);

    FUN_0010cd2c(FUN_002eac34(slot), &name);
}
