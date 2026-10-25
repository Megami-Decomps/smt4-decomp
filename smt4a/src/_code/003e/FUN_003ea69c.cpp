/* NON_MATCHING: cached stat registers and original attribute-block copy grouping differ; initial flag stores and packed skill-bitfield operations now match structurally. */
#include "battle/btlUnit.h"
#include "shard/PadState.h"
#include "gamedata/UnitStats.h"
#include "gamedata/PackedSkillSlot.h"
#include <string.h>

extern "C" {
void clearTwoWords(void *);
void rt_memclr(void *, u32);
void sysMemClear(void *, u32);
u16 playerPackedEntryLow10(u32);
s16 playerPackedEntryHigh(u32);
s32 playerAlignmentClass();

void FUN_003ea69c(u32, BtlUnitDataA *unit, const PadState *player)
{
    // Four-word skill views would enlarge the shared 0x3a-byte union region.
    struct Attributes {
        u16 values[5];
        u16 reserved;
    };
    struct Values {
        s32 hp, maxHp, mp, maxMp;
        Attributes attributes;
    };
    struct SnapshotView {
        u8 initialized, reserved01;
        s16 header[4];
        u8 unk00a[0xca];
        struct { u8 hp, maxHp, mp, maxMp; } changes;
        Values current, original;
        u16 flags, counterA, counterB, sourceKind;
        UnitSummarySkills skills;
        PackedSkillSlot packed[21], originalPacked[21];
        u8 flagsBySlot[21], changedBySlot[21], levels[21];
        u8 percentage, alignment, reserved1bd;
        u8 groups[3][8];
        u8 scratch[0x50];
        u8 reserved226[2];
        u32 pending;
    };
    struct SourceView {
        u8 unk00[0x1c];
        s16 maxHp, maxMp;
        u16 attributes[5];
        s16 hp, mp;
        u8 unk2e[6];
        UnitSummarySkills skills;
        u8 unk44[0x1a];
        u16 flags;
        u8 unk60[2];
        u16 kind;
    };
    typedef char SnapshotOffsets[
        sizeof(SnapshotView) == sizeof(BtlUnitDataA) &&
        offsetof(SnapshotView, current) == 0xd8 &&
        offsetof(SnapshotView, original) == 0xf4 &&
        offsetof(SnapshotView, skills) == 0x118 &&
        offsetof(SnapshotView, packed) == 0x128 &&
        offsetof(SnapshotView, changedBySlot) == 0x191 &&
        offsetof(SnapshotView, groups) == 0x1be &&
        offsetof(SnapshotView, scratch) == 0x1d6 &&
        offsetof(SnapshotView, pending) == 0x228 &&
        offsetof(SourceView, skills) == 0x34 &&
        offsetof(SourceView, flags) == 0x5e ? 1 : -1];
    SnapshotView *snapshot = reinterpret_cast<SnapshotView *>(unit);
    const SourceView *source = reinterpret_cast<const SourceView *>(player);
    snapshot->initialized = 1;
    snapshot->header[3] = -1;
    snapshot->header[0] = 0;
    snapshot->header[1] = -1;
    snapshot->header[2] = -1;
    snapshot->changes.hp = 0;
    snapshot->changes.maxHp = 0;
    snapshot->changes.mp = 0;
    snapshot->changes.maxMp = 0;
    s32 hp = source->hp;
    snapshot->current.hp = hp;
    s32 maxHp = source->maxHp;
    snapshot->current.maxHp = maxHp;
    s32 mp = source->mp;
    snapshot->current.mp = mp;
    s32 maxMp = source->maxMp;
    snapshot->current.maxMp = maxMp;
    for (s32 index = 0; index < 5; ++index)
        snapshot->current.attributes.values[index] = source->attributes[index];
    Values captured = { hp, maxHp, mp, maxMp, snapshot->current.attributes };
    snapshot->original = captured;
    snapshot->flags = source->flags;
    snapshot->counterA = 0;
    snapshot->counterB = 0;
    snapshot->sourceKind = source->kind;
    snapshot->pending = 0;
    clearTwoWords(snapshot->groups[0]);
    clearTwoWords(snapshot->groups[1]);
    clearTwoWords(snapshot->groups[2]);
    rt_memclr(snapshot->scratch, sizeof(snapshot->scratch));
    for (s32 index = 0; index < 21; ++index) {
        snapshot->packed[index].id = playerPackedEntryLow10((u8)index);
        snapshot->packed[index].unk00 = playerPackedEntryHigh((u8)index);
        snapshot->originalPacked[index].id = playerPackedEntryLow10((u8)index);
        snapshot->originalPacked[index].unk00 = playerPackedEntryHigh((u8)index);
        snapshot->levels[index] = snapshot->originalPacked[index].unk00;
    }
    snapshot->percentage = 100;
    switch (playerAlignmentClass()) {
    case 1: snapshot->alignment = 1; break;
    case 4: snapshot->alignment = 0; break;
    case 5: snapshot->alignment = 2; break;
    }
    snapshot->skills = source->skills;
    sysMemClear(snapshot->flagsBySlot, sizeof(snapshot->flagsBySlot));
    memset(snapshot->changedBySlot, 0, sizeof(snapshot->changedBySlot));
}
}
