#ifndef BATTLE_BATTLESKILLRESPONSEMASKS_H
#define BATTLE_BATTLESKILLRESPONSEMASKS_H
#include "common.h"
#include <stddef.h>

/* Apocalypse's battle flag masks (0x5713f0, 0x118 bytes of .data): one 64-bit single-bit mask per
 * flag the battle code tests. The masks up to 0x88 test a combatant entry's flags; those from 0x90
 * test the battle's state flags (stateFlags64) and marker masks. */
struct BattleSkillResponseMasks {
    /* 0x000 */ u64 present;         // 0x1: the entry holds a unit
    /* 0x008 */ u64 mappedKind;      // 0x2: skill values come from padGetMappedValue
    /* 0x010 */ u64 actionBlocked;   // 0x4: the entry cannot act
    /* 0x018 */ u64 sourceKind;      // 0x8: skill values come from the entry's source record
    /* 0x020 */ u64 demonKind;       // 0x10: skill values come from the demon's NKM base record
    /* 0x028 */ u64 kindD;           // 0x20
    /* 0x030 */ u64 outOfFight;      // 0x40: the unit is out of the fight
    /* 0x038 */ u64 valueShare;      // 0x100
    /* 0x040 */ u64 unk040;          // 0x1000
    /* 0x048 */ u64 tierFirst;       // 0x2000: action tier 1
    /* 0x050 */ u64 tierSecond;      // 0x4000: action tier 2
    /* 0x058 */ u64 unk058;          // 0x4000000
    /* 0x060 */ u64 unk060;          // 0x40000000
    /* 0x068 */ u64 unk068;          // 0x80000000
    /* 0x070 */ u64 boostKind;       // 0x200000000: raises the base chance to 100
    /* 0x078 */ u64 unk078;          // 0x400000000
    /* 0x080 */ u64 allyKind;        // 0x2000000000: acts on a queued ally action
    /* 0x088 */ u64 tierThird;       // 0x8000000000: action tier 3
    /* 0x090 */ u64 unk090;          // 0x2
    /* 0x098 */ u64 alwaysEscape;    // 0x4: the battle always lets the party escape
    /* 0x0A0 */ u64 assistActive;    // 0x200
    /* 0x0A8 */ u64 alwaysProc;      // 0x40000: chance skills always fire
    /* 0x0B0 */ u64 stateBlocked;    // 0x400000
    /* 0x0B8 */ u64 unk0B8;          // 0x4000000
    /* 0x0C0 */ u64 tierForced;      // 0x80
    /* 0x0C8 */ u64 markerEscape;    // 0x100: the marker that always lets the party escape
    /* 0x0D0 */ u64 markerGuarantee; // 0x10000: guarantees the assist; never lets the party escape
    /* 0x0D8 */ u64 unk0D8;          // 0x400000
    /* 0x0E0 */ u64 unk0E0;          // 0x800000
    /* 0x0E8 */ u64 unk0E8;          // 0x4000000
    /* 0x0F0 */ u64 reinforceForced; // 0x20000000
    /* 0x0F8 */ u64 blockKind;       // 0x100000000: never acts
    /* 0x100 */ u64 restart;         // 0x2000000000
    /* 0x108 */ u64 unk108;          // 0x4000000000
    /* 0x110 */ u64 unk110;          // 0x10000000000
};
typedef char BattleSkillResponseMaskOffsets[
    offsetof(BattleSkillResponseMasks, mappedKind) == 0x8 &&
    offsetof(BattleSkillResponseMasks, sourceKind) == 0x18 &&
    offsetof(BattleSkillResponseMasks, demonKind) == 0x20 &&
    offsetof(BattleSkillResponseMasks, tierFirst) == 0x48 &&
    offsetof(BattleSkillResponseMasks, tierThird) == 0x88 &&
    offsetof(BattleSkillResponseMasks, assistActive) == 0xA0 &&
    offsetof(BattleSkillResponseMasks, markerGuarantee) == 0xD0 &&
    offsetof(BattleSkillResponseMasks, restart) == 0x100 &&
    sizeof(BattleSkillResponseMasks) == 0x118 ? 1 : -1];

extern "C" BattleSkillResponseMasks g_btlSkillResponseMasks;
#endif
