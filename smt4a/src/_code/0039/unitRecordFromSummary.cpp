#include "shard/Shard0032.h"

extern "C" {

extern void rt_aeabi_memclr(void *dst, s32 size);
extern void memcpySrcFirst(const void *src, void *dst, u32 size);

/* Builds a unit record from a player summary: the name and id carry over. */
void unitRecordFromSummary(PlayerSummary *summary, UnitRecord *unit)
{
    if (summary == NULL || unit == NULL) {
        return;
    }
    rt_aeabi_memclr(unit, 100);
    memcpySrcFirst(summary, unit, 0xE);
    memcpySrcFirst(summary->name, unit->name, 0x12);
    unit->id = summary->unk36;
}

} /* extern "C" */
