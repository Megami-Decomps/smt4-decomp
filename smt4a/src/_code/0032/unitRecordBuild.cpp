#include "shard/Shard0032.h"

extern "C" {

extern UnitTemplate *FUN_00184310(s32 id);
extern void sysMemClear(void *ptr, u32 size);
extern void rt_memcpy_w(void *dst, const void *src, u32 size);
extern void FUN_004bd6b0(UnitRecord *unit, u16 skill, s32 slot);
extern void FUN_004bcd90(UnitRecord *unit);
extern u16 FUN_0017760c(UnitRecord *unit);

/* Builds unit record `out` from table entry `id`. */
void unitRecordBuild(s32 id, UnitRecord *out)
{
    UnitTemplate *entry = FUN_00184310(id);
    s32 i;

    sysMemClear(out, 300);
    out->id = id;
    out->unk64 = entry->unk06;
    out->stats[0] = entry->stat0;
    out->stats[1] = entry->stat1;
    out->stats[2] = entry->stat2;
    out->stats[4] = entry->stat4;
    out->stats[5] = entry->stat5;
    out->stats[6] = entry->stat6;
    out->stats[3] = entry->stat3;
    out->unk1C = 0;
    out->unk1E = 0;
    out->stats2[0] = entry->stat2;
    out->stats2[2] = entry->stat4;
    out->stats2[3] = entry->stat5;
    out->stats2[4] = entry->stat6;
    out->stats2[1] = entry->stat3;
    rt_memcpy_w(out->name, entry->name, 0x12);
    for (i = 0; i < 8; i++) {
        FUN_004bd6b0(out, entry->skills[i], i);
    }
    out->unk30 = 0;
    FUN_004bcd90(out);
    out->unk2A = FUN_0017760c(out);
    out->unk2C = out->unk10;
}

} /* extern "C" */
