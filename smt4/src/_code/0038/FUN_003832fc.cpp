/* NON_MATCHING: duplicate-id scan: retail jumps from the inner loop straight to the outer loop's increment and does not unroll it; armcc unrolls this form */
#include "common.h"
#include "shard/FUN_0023ea64.h"

extern "C" {

/* A picked hunter-company record: its index in data table 27 and the id used as the sort key. */
typedef struct HunterPick {
    /* 0x0 */ s32 recordIndex;
    /* 0x4 */ s32 id;
} HunterPick;

typedef struct HunterRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 rank;
    /* 0x62 */ u16 id;
    /* 0x64 */ u16 pose;
    /* 0x66 */ u16 requiredFlag;
    /* 0x68 */ u16 forbiddenFlag;
    /* 0x6A */ u8 unk6A[0x1E];
} HunterRecord;

typedef struct HunterSlot {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 text;
} HunterSlot;

typedef struct HunterCompany {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 state;
    /* 0x008 */ u32 stateArg;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ s8 rank;
    /* 0x011 */ u8 unk011[7];
    /* 0x018 */ u8 randomizePoses;
    /* 0x019 */ u8 unk019[7];
    /* 0x020 */ u8 table[0xCF0];
    /* 0xD10 */ HunterSlot *nameSlots[6];
    /* 0xD28 */ HunterSlot *addSlots[6];
    /* 0xD40 */ u8 unkD40[0x1C];
    /* 0xD5C */ HunterPick picks[6];
    /* 0xD8C */ s32 pickCount;
} HunterCompany;

extern s32 sortCompareEntryKey(const HunterPick *left, const HunterPick *right);
extern s32 FUN_00385afc(u8 *table);
extern s32 FUN_00385b1c(u8 *table);
extern HunterRecord *dataTable27Sub0GetRecord(u8 *table, s32 index);
extern s32 dataTable27Sub0GetCount(u8 *table);
extern s32 gameFlagIsSet(s32 flag);
extern void FUN_002b7bca(void *base, s32 count, s32 size, s32 (*compare)(const HunterPick *, const HunterPick *));
extern s32 randBetween(s32 low, s32 high);
extern s32 textFormatBuffer(u8 *destination, const char *format, ...);
extern void FUN_0031e2bc(u32 text, u8 *name, s32 flag);

/* Picks up to six hunter-company records matching the current rank, sorts them by id and names their slots. */
void FUN_003832fc(HunterCompany *company)
{
    u8 name[64];
    HunterRecord *records;
    HunterRecord *record;
    s32 i;
    s32 j;
    s32 pose;

    if (FUN_0023ea64(company->table) == 0 || FUN_00385afc(company->table) == 0 ||
        FUN_00385b1c(company->table) == 0) {
        return;
    }
    records = dataTable27Sub0GetRecord(company->table, 0);
    for (i = 0; i < dataTable27Sub0GetCount(company->table); i++) {
        record = &records[i];
        if (record->rank != company->rank) {
            continue;
        }
        if (record->requiredFlag != 0 && gameFlagIsSet(record->requiredFlag) == 0) {
            continue;
        }
        if (record->forbiddenFlag != 0 && gameFlagIsSet(record->forbiddenFlag) != 0) {
            continue;
        }
        for (j = 0; j < company->pickCount; j++) {
            if ((u32)company->picks[j].id == record->id) {
                break;
            }
        }
        if (j < company->pickCount) {
            continue;
        }
        company->picks[company->pickCount].recordIndex = i;
        company->picks[company->pickCount].id = record->id;
        company->pickCount++;
        if ((u32)company->pickCount >= 6) {
            break;
        }
    }
    FUN_002b7bca(company->picks, company->pickCount, sizeof(HunterPick), sortCompareEntryKey);
    if (company->randomizePoses == 1) {
        for (i = 0; i < 6; i++) {
            for (j = 0; j < company->pickCount; j++) {
                if (company->picks[j].id == i + 1) {
                    break;
                }
            }
            if (j < company->pickCount) {
                record = dataTable27Sub0GetRecord(company->table, company->picks[j].recordIndex);
                pose = (record->pose == 1 || record->pose != 2) ? 2 : 1;
            } else {
                pose = randBetween(1, 2);
            }
            textFormatBuffer(name, "hunter_company_npc%d_%d", i + 1, pose);
            FUN_0031e2bc(company->nameSlots[i]->text, name, 0);
            textFormatBuffer(name, "hunter_company_npc%d_%d_add1", i + 1, pose);
            FUN_0031e2bc(company->addSlots[i]->text, name, 0);
        }
    }
    company->state = 2;
    company->stateArg = 0;
}

} /* extern "C" */
