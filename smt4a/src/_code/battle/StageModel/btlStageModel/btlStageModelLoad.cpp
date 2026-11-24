/* NON_MATCHING: 186 lines. With the 0x24-byte BAM entries (0x50-byte rows) and an entry pointer in the row search the loop is no longer unrolled; retail still recomputes the found row's address from the index (`adds`), converts all three BAM coordinates before storing them with vstmia (a vector copy), and allocates the zero register and the constant 1 the other way round. */
#include "battle/BtlMainAccess.h"
#include "battle/BattleStageAccessory.h"
#include "common.h"
#include <stdio.h>
#include "code/Code001c.h"

// Stage table row (0x50 bytes): stage/sub-stage ids, two BAM entries and a redirect.
struct StageRow {
    u16 stage;                  // 0x00
    u16 substage;               // 0x02
    BattleStageAccessoryPart bams[2]; // 0x04 (0x24 bytes each)
    u16 redirectStage;          // 0x4c
    u16 redirectSub;            // 0x4e
};
typedef char StageRowSizeCheck[sizeof(StageRow) == 0x50 ? 1 : -1];

// Stage model: ids, the model lists and the BAM positions.
struct BtlStageModel {
    u8 unk00[8];
    u32 stage;                  // 0x08
    u32 substage;               // 0x0c
    u8 unk10[0xc];
    void* mapList;              // 0x1c
    void* bamList[2];           // 0x20
    u8 unk28[0x34 - 0x28];
    f32 bamPos[2][3];           // 0x34
};

// Resource owner: only the pieces touched here.
struct ResourceOwner {
    u8 unk00[4];
    u32* flags;                 // 0x04: the flag bits are its second word
    u8 unk08[0xc];
    u8* state;                  // 0x14
};

extern "C" {

extern u32 g_engineOptionalWork;
extern ResourceOwner* g_handleRegistry;
extern const char DAT_00527348[];

u32 dataTableFileGetTable(u32 file, u32 index);
StageRow* dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);
s32 FUN_00240c34(const char* name);
void resourceOwnerLoadNamed(ResourceOwner* owner, const char* name);
s32 FUN_0040af60(ResourceOwner* owner);
void moriModelManagerEnsureScene(ResourceOwner* owner, s32 arg);
void moriModelManagerEnsureSceneWithLayer(ResourceOwner* owner, s32 a, s32 b);
void* asdMemoryAllocTraced(u32 size, const char* file, u32 line);
void* modelListInit(void* memory);

// Finds the stage table row for the given ids.
static __inline StageRow* findStageRow(BtlStageModel* model)
{
    u32 table = dataTableFileGetTable(g_engineOptionalWork, 0);
    StageRow* rows = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    for (u32 i = 0; i < count; i++) {
        StageRow* row = &rows[i];
        if (row->stage == model->stage && row->substage == model->substage) return row;
    }
    return NULL;
}

// Loads the stage's map and BAM models (falling back to stage 1-1 when a file is missing) and
// records the BAM positions.
void btlStageModelLoad(BtlStageModel* model, u32 stage, u32 substage)
{
    model->stage = stage;
    model->substage = substage;
    StageRow* row = findStageRow(model);
    if (row != NULL) {
        if (row->redirectStage != 0 && row->redirectSub != 0) {
            stage = row->redirectStage;
            substage = row->redirectSub;
        }
    }

    char name[64] = { 0 };
    btlGetMainState();
    ResourceOwner* owner = g_handleRegistry;
    sprintf(name, "%se%03d_%02d.bch", "battle/battle_map/", stage, substage);
    if (FUN_00240c34(name) == 0) {
        sprintf(name, "%se%03d_%02d.bch", "battle/battle_map/", 1, 1);
    }
    resourceOwnerLoadNamed(owner, name);
    if (FUN_0040af60(owner) != 0) {
        if (stage == 8 && (substage == 6 || substage == 7)) {
            moriModelManagerEnsureSceneWithLayer(owner, 3, 0);
        } else {
            moriModelManagerEnsureScene(owner, 0);
        }
        owner->state[0xc4] = 0;
        owner->flags[1] |= 2;
    }

    sprintf(name, "%sb%03d_%02d.bam", "battle/battle_map/", stage, substage);
    if (FUN_00240c34(name) == 0) {
        sprintf(name, "%sb%03d_%02d.bam", "battle/battle_map/", 1, 1);
        model->stage = 1;
        model->substage = 1;
    }
    void* memory = asdMemoryAllocTraced(0x20, DAT_00527348, 217);
    model->mapList = memory != NULL ? modelListInit(memory) : NULL;
    modelLoadFileAsyncByName(model->mapList, name);

    row = findStageRow(model);
    if (row == NULL) return;
    for (s32 i = 0; i < 2; i++) {
        BattleStageAccessoryPart *bam = &row->bams[i];
        if (bam->name[0] == '0') continue;
        sprintf(name, "%s%s.bam", "battle/battle_map/", bam->name);
        void* bamMemory = asdMemoryAllocTraced(0x20, DAT_00527348, 246);
        model->bamList[i] = bamMemory != NULL ? modelListInit(bamMemory) : NULL;
        modelLoadFileAsyncByName(model->bamList[i], name);
        model->bamPos[i][0] = (f32)bam->x;
        model->bamPos[i][1] = (f32)bam->y;
        model->bamPos[i][2] = (f32)bam->z;
    }
}

} /* extern "C" */
