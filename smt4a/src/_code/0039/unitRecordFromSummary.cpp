#include "shard/Shard0032.h"

extern "C" {

extern void rt_aeabi_memclr(void *dst, s32 size);
extern void FUN_002e59f8(const void *src, void *dst, u32 size);

/* Builds a unit record from a player summary: the name and id carry over. */
void unitRecordFromSummary(PlayerSummary *summary, UnitRecord *unit)
{
    rt_aeabi_memclr(unit, 100);
    FUN_002e59f8(summary, unit, 0xE);
    FUN_002e59f8(summary->name, unit->name, 0x12);
    unit->id = summary->unk36;
}

} /* extern "C" */
