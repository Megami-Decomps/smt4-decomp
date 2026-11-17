#include "shard/Shard0032.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {

extern void sysMemClear(void *ptr, u32 size);
extern void __aeabi_memcpy4(void *dst, const void *src, u32 size);
extern void partyRecordSetEquippedItemClampRank(UnitRecord *unit, u16 skill, s32 slot);
extern void unitRecomputeDerivedStats(UnitRecord *unit);
extern u16 recordGetScaledMaximum(UnitRecord *unit);

/* Builds unit record `out` from table entry `id`. */
void unitRecordBuild(s32 id, UnitRecord *out)
{
    NkmBaseRecordA *entry = nkmBaseGetRecord(id);
    s32 i;

    sysMemClear(out, 300);
    out->id = id;
    out->unk64 = entry->level;
    out->stats[0] = entry->baseHp;
    out->stats[1] = entry->baseMp;
    out->stats[2] = entry->stats[0];
    out->stats[4] = entry->stats[2];
    out->stats[5] = entry->stats[3];
    out->stats[6] = entry->stats[4];
    out->stats[3] = entry->stats[1];
    out->unk1C = 0;
    out->unk1E = 0;
    out->stats2[0] = entry->stats[0];
    out->stats2[2] = entry->stats[2];
    out->stats2[3] = entry->stats[3];
    out->stats2[4] = entry->stats[4];
    out->stats2[1] = entry->stats[1];
    __aeabi_memcpy4(out->name, entry->categoryModifiers, 0x12);
    for (i = 0; i < 8; i++) {
        partyRecordSetEquippedItemClampRank(out, entry->skills.ids[i], i);
    }
    out->unk30 = 0;
    unitRecomputeDerivedStats(out);
    out->unk2A = recordGetScaledMaximum(out);
    out->unk2C = out->unk10;
}

} /* extern "C" */
