#include "common.h"

extern "C" {

typedef struct DataRecord {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 sub;
    /* 0x02 */ u8 unk02[8];
    /* 0x0A */ u16 requiredFlag;   /* 0 = none */
    /* 0x0C */ u16 forbiddenFlag;  /* 0 = none */
    /* 0x0E */ u8 unk0E[0x92];
} DataRecord; /* 0xA0 bytes */

typedef struct SourceEntry {
    /* 0x00 */ u8 type;
    /* 0x01 */ u8 unk01[0x3F];
} SourceEntry; /* 0x40 bytes */

typedef struct SourceRef {
    /* 0x0 */ u32 table;
    /* 0x4 */ u8 unk4[0xC];
} SourceRef; /* 0x10 bytes */

typedef struct SourceNode {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ SourceRef *refs;
} SourceNode; /* 0x50 bytes */

typedef struct SourceOwner {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 nodeCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ SourceNode *nodes;
} SourceOwner;

extern s32 FUN_002ac12c(void);
extern SourceEntry *FUN_002ac0f8(SourceNode *node);
extern u32 FUN_002ac0c4(SourceNode *node);
extern u32 dataTableFileGetTable(u32 table, u32 index);
extern DataRecord *dataTableGetEntries(void);
extern s32 dataTableGetCount(u32 table);
extern s32 gameFlagIsSet(u32 flag);

/* Finds the data record of `kind`/`sub` (whose flag conditions hold) among the tables referenced by the owner's type-0x1B source entries. */
DataRecord *dataTableFindRecordForSources(SourceOwner *owner, u32 kind, u32 sub)
{
    s32 i;

    for (i = 0; i < owner->nodeCount; i++) {
        SourceNode *node = &owner->nodes[i];

        if (FUN_002ac12c() != 0) {
            SourceEntry *entries = FUN_002ac0f8(node);
            u32 count = FUN_002ac0c4(node);
            u32 j;

            for (j = 0; j < count; j++) {
                if (entries[j].type == 0x1B) {
                    u32 table = dataTableFileGetTable(node->refs[j].table, 0);
                    DataRecord *records = dataTableGetEntries();
                    s32 recordCount = dataTableGetCount(table);
                    s32 k;

                    for (k = 0; k < recordCount; k++) {
                        DataRecord *record = &records[k];

                        if (record->kind == kind && record->sub == sub
                            && (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag) != 0)
                            && (record->forbiddenFlag == 0 || gameFlagIsSet(record->forbiddenFlag) == 0)) {
                            return &records[k];
                        }
                    }
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
