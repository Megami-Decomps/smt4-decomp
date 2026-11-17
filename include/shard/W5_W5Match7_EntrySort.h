#ifndef SHARD_W5_W5MATCH7_ENTRYSORT_H
#define SHARD_W5_W5MATCH7_ENTRYSORT_H

#include "common.h"
#include "AsdSDK/Source/Util/AsdListBox.h"

struct SortItem { u16 id; };

struct EntrySortBonus {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 firstValue; /* upgrade kind 0 */
    union {
        /* 0x06 */ s16 value;
        /* 0x06 */ s16 valuesFrom1[5]; /* upgrade kinds 1..5 */
    };
};

union EquipmentUpgradeBonuses {
    EntrySortBonus common;
    s16 values[8];
};
struct EquipmentUpgradeRecord {
    /* 0x00 */ u32 firstId;
    /* 0x04 */ u32 lastId;
    /* 0x08 */ u8 category;
    /* 0x09 */ u8 unk09[3];
};
typedef char EquipmentUpgradeBonusesSizeCheck[sizeof(EquipmentUpgradeBonuses) == 0x10 ? 1 : -1];

struct SortDefaults { s32 left, right; };

extern "C" {
void equipmentGetCappedUpgradeBonuses(u32 id, s16 *bonuses);
s32 FUN_00345098(s32 left, s32 right);
extern SortDefaults DAT_0052b8ac[2];
}


#ifdef __cplusplus
extern "C" {
#endif

f32 mathInterpolatePackedTable(u32 packed);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00191f18(u32 slot, u32 arg);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_0033aa6c(int bit);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00340f2c(u16 first, u16 second, u16 third, u16 fourth);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdListBoxSetFloatItem(AsdListBox *listBox, u32 id, f32 value, s32 minimum, s32 maximum);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 btlItemComputeValues(u32 owner, u32 id, u32* first, u32* second);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_004713ec(u32 context, u32 arg, u32 second, u32 third);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void aocRecordLookup83(u16 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void aocRecordLookup84(u16 id);

#ifdef __cplusplus
}
#endif

#endif
