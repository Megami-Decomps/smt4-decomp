/* NON_MATCHING: the accessory loop uses a writeback load for the BAM filename, and schedules the position halfword loads and conversions differently. */
#include <stdio.h>
#include "battle/BtlMainAccess.h"
#include "battle/BattleStageAccessory.h"
#include "shard/W6_W6Match1_BattleStageModel.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct BattleStageAccessoryRecord {
    u16 area;
    u16 variant;
    BattleStageAccessoryPart parts[2];
};
typedef char BattleStageAccessoryLayout[sizeof(BattleStageAccessoryRecord) == 0x4C ? 1 : -1];

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
    s32 index = 0;
    do {
        const BattleStageAccessoryPart *part = &record->parts[index];
        if (part->name[0] != '0') {
            sprintf(path, "%s%s.bam", BATTLE_STAGE_DIRECTORY, part->name);
            stage->scene.nodes[index + 1] = (BattleStageNode *)asdMdlManagerCreateSecondList(path, options);
            stage->scene.offsets[index + 1] = nodeVec3(part->x, part->y, part->z);
        }
    } while (++index < 2);
}
}
