/* NON_MATCHING: directory pointer stays in a saved register; accessory position converts/stores scalar components rather than the native vector sequence. */
#include "shard/W6_W6Match1_BattleStageModel.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include <stddef.h>
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
extern "C" {
extern void *g_mapAccessoryTable;
BtlMainState *btlGetMainState(void);
s32 FUN_002402c4(BtlMainState *state, const char *path);
void FUN_002a09b4(const char *path, u32 mode);
BattleStageNode *asdMdlManagerCreateSecondList(const char *path, u32 options);
void *dataTableFileGetTable(void *file, u32 section);
s32 textFormatBuffer(char *buffer, const char *format, ...);

void FUN_003400f0(BattleStageModel *stage, u32 area, u32 variant, u32 options)
{
    const char *directory = "battle/battle_map/";
    char path[64];
    stage->key0 = area;
    stage->key1 = variant;
    textFormatBuffer(path, "%se%03d_%02d.bcenv", directory, area, variant);
    if (!FUN_002402c4(btlGetMainState(), path)) {
        textFormatBuffer(path, "%se%03d_%02d.bcenv", directory, 1, 1);
        stage->key0 = 1;
        stage->key1 = 1;
    }
    FUN_002a09b4(path, 0);
    textFormatBuffer(path, "%sb%03d_%02d.bam", directory, area, variant);
    if (!FUN_002402c4(btlGetMainState(), path)) {
        textFormatBuffer(path, "%sb%03d_%02d.bam", directory, 1, 1);
        stage->key0 = 1;
        stage->key1 = 1;
    }
    stage->scene.nodes[0] = asdMdlManagerCreateSecondList(path, options);
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
        const BattleStageAccessoryPart *part = &record->parts[index];
        if (part->name[0] != '0') {
            textFormatBuffer(path, "%s%s.bam", directory, part->name);
            stage->scene.nodes[index + 1] = asdMdlManagerCreateSecondList(path, options);
            stage->scene.offsets[index + 1].x = (f32)part->position[0];
            stage->scene.offsets[index + 1].y = (f32)part->position[1];
            stage->scene.offsets[index + 1].z = (f32)part->position[2];
        }
    }
}
}
