/* NON_MATCHING: -O2 candidate; signed indexing folds into ADD, bitset stores reschedule, and lookup/default-value registers and branches differ. */
#include "shard/W5_W5Match1_RecordKeys.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GauntletAppTable.h"

struct UnlockProgress {
    /* 0x00 */ u8 unlocked[0x12];
    /* 0x12 */ u8 newlyUnlocked[0x12];
    /* 0x24 */ u16 categoryCounts[20];
};

typedef s32 UnlockKeyComparator(const UnsignedRecordKey32*, const UnsignedRecordKey32*);
extern "C" {
u8* gameDataGetFlagBits(void);
u8 appCheckPurchaseRequirements(u32 id);
void FUN_00334ff8(void);
const GauntletAppRecord* libc_bsearch(const GauntletAppRecord* key, const GauntletAppRecord* entries,
                                u32 count, u32 stride, UnlockKeyComparator* compare);
s32 unsignedKeyRecordCompare(const UnsignedRecordKey32* left, const UnsignedRecordKey32* right);
void saveSubtractCounterSaturating(u32 amount);

}

namespace {
inline const GauntletAppRecord* findGauntletAppRecord(u16 id)
{
    void* table = dataTableGet(11, 0);
    if (table == NULL) {
        return NULL;
    }
    const GauntletAppRecord* entries = gauntletAppRecords(table);
    const u32 count = dataTableGetCount(table);
    GauntletAppRecord key;
    key.id = id;
    return libc_bsearch(&key, entries, count, sizeof(GauntletAppRecord), unsignedKeyRecordCompare);
}
} // namespace

extern "C" u32 appTryPurchase(u32 id, s32 ignoreRequirements, s32 checkOnly)
{
    UnlockProgress* progress = reinterpret_cast<UnlockProgress*>(gameDataGetFlagBits());
    const u8* flags = gameDataGetFlagBits();
    if ((flags[id >> 3] & (1u << (id & 7))) != 0 ||
        (ignoreRequirements == 0 && appCheckPurchaseRequirements(id) != 0)) {
        return 0;
    }
    if (checkOnly == 0) {
        const s32 signedId = static_cast<s32>(id);
        const u32 mask = 1u << (signedId % 8);
        progress->unlocked[signedId / 8] |= mask;
        progress->newlyUnlocked[signedId / 8] |= mask;
        FUN_00334ff8();

        const u16 recordId = static_cast<u16>(id);
        const GauntletAppRecord* record = findGauntletAppRecord(recordId);
        saveSubtractCounterSaturating(record != NULL ? record->cost : 0);
        record = findGauntletAppRecord(recordId);
        if (record->kind == 0) {
            ++progress->categoryCounts[record->category];
        }
        if (id == 0x2e) {
            gameFlagSetValue(0x520, 0, 1);
        } else if (id == 0x18) {
            gameFlagSetValue(0x521, 0, 1);
        } else if (id == 0x76) {
            gameFlagSetValue(0x527, 0, 1);
        }
    }
    return 1;
}
