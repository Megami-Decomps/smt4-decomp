/* NON_MATCHING: the accessory offset is stored like retail (vstr of z, vstmia of x/y); remaining: the first argument-save move and the order of the halfword loads and conversions (retail loads z and y first, the build y and z). */
#include <stdio.h>
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match1_BattleStageModel.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
struct BattleStageAccessoryPart {
    char name[30];
    u16 position[3];
};
struct BattleStageAccessoryRecord {
    u16 area;
    u16 variant;
    BattleStageAccessoryPart parts[2];
};
typedef char BattleStageAccessoryLayout[sizeof(BattleStageAccessoryPart) == 0x24 &&
    sizeof(BattleStageAccessoryRecord) == 0x4C && offsetof(BattleStageAccessoryPart, position) == 0x1E ? 1 : -1];

#define BATTLE_STAGE_DIRECTORY "battle/battle_map/"
extern "C" {
extern void *g_mapAccessoryTable;
s32 fileExistsPatchOrRom(BtlMainState *state, const char *path);
void FUN_002a09b4(const char *path, u32 mode);
void *dataTableFileGetTable(void *file, u32 section);

void btlStageModelLoad(BattleStageModel *stage, u32 area, u32 variant, u32 options)
{
    char path[64];
    stage->key0 = area;
    stage->key1 = variant;
    sprintf(path, "%se%03d_%02d.bcenv", BATTLE_STAGE_DIRECTORY, area, variant);
    if (!fileExistsPatchOrRom(btlGetMainState(), path)) {
        sprintf(path, "%se%03d_%02d.bcenv", BATTLE_STAGE_DIRECTORY, 1, 1);
        stage->key0 = 1;
        stage->key1 = 1;
    }
    FUN_002a09b4(path, 0);
    sprintf(path, "%sb%03d_%02d.bam", BATTLE_STAGE_DIRECTORY, area, variant);
    if (!fileExistsPatchOrRom(btlGetMainState(), path)) {
        sprintf(path, "%sb%03d_%02d.bam", BATTLE_STAGE_DIRECTORY, 1, 1);
        stage->key0 = 1;
        stage->key1 = 1;
    }
    stage->scene.nodes[0] = reinterpret_cast<BattleStageNode *>(asdMdlManagerCreateSecondList(path, options));
    void *table = dataTableFileGetTable(g_mapAccessoryTable, 0);
    const BattleStageAccessoryRecord *entries = (const BattleStageAccessoryRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    const BattleStageAccessoryRecord *record = NULL;
    for (u32 index = 0; index < count; ++index) {
        if (entries[index].area == stage->key0 && entries[index].variant == stage->key1) {
            record = &entries[index];
            break;
        }
    }
    if (!record)
        return;
    for (s32 index = 0; index < 2; ++index) {
        if (record->parts[index].name[0] != '0') {
            sprintf(path, "%s%s.bam", BATTLE_STAGE_DIRECTORY, record->parts[index].name);
            stage->scene.nodes[index + 1] = reinterpret_cast<BattleStageNode *>(asdMdlManagerCreateSecondList(path, options));
            stage->scene.offsets[index + 1] = nodeVec3(record->parts[index].position[0], record->parts[index].position[1], record->parts[index].position[2]);
        }
    }
}
}
