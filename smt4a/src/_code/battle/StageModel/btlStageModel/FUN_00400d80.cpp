/* NON_MATCHING: readable rewrite from retail disassembly compiles (230 vs 306 rows); the compiler unrolls the stage-row search by two while retail keeps a straight loop, and retail zero-fills the name buffer with 16 word stores */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "code/Code001c.h"

// One BAM entry of a stage row: name, and three u16 position components stored as floats.
struct StageBam {
    u8 unk00[4];
    char name[0x1e];            // 0x04
    u16 x;                      // 0x22
    u16 y;                      // 0x24
    u16 z;                      // 0x26
};

// Stage table row (0x50 bytes): stage/sub-stage ids, two BAM entries and a redirect.
struct StageRow {
    u16 stage;                  // 0x00
    u16 substage;               // 0x02
    StageBam bams[2];           // 0x04 (0x24 bytes each)
    u16 redirectStage;          // 0x4c
    u16 redirectSub;            // 0x4e
};

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
    u32* flags;                 // 0x04
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
void textFormatBuffer(char* out, const char* format, ...);
s32 FUN_00240c34(const char* name);
void resourceOwnerLoadNamed(ResourceOwner* owner, const char* name);
s32 FUN_0040af60(ResourceOwner* owner);
void FUN_0040ae70(ResourceOwner* owner, s32 arg);
void FUN_0040afe0(ResourceOwner* owner, s32 a, s32 b);
void* FUN_00178b04(u32 size, const char* file, u32 line);
void* modelListInit(void* memory);

// Finds the stage table row for the given ids.
static inline StageRow* findStageRow(BtlStageModel* model)
{
    u32 table = dataTableFileGetTable(g_engineOptionalWork, 0);
    StageRow* rows = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    for (u32 i = 0; i < count; i++) {
        if (rows[i].stage == model->stage && rows[i].substage == model->substage) return &rows[i];
    }
    return NULL;
}

// Loads the stage's map and BAM models (falling back to stage 1-1 when a file is missing) and
// records the BAM positions.
void FUN_00400d80(BtlStageModel* model, u32 stage, u32 substage)
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
    static_cast<void *>(btlGetMainState());
    ResourceOwner* owner = g_handleRegistry;
    textFormatBuffer(name, "%se%03d_%02d.bch", "battle/battle_map/", stage, substage);
    if (FUN_00240c34(name) == 0) {
        textFormatBuffer(name, "%se%03d_%02d.bch", "battle/battle_map/", 1, 1);
    }
    resourceOwnerLoadNamed(owner, name);
    if (FUN_0040af60(owner) != 0) {
        if (stage == 8 && (substage == 6 || substage == 7)) {
            FUN_0040afe0(owner, 3, 0);
        } else {
            FUN_0040ae70(owner, 0);
        }
        owner->state[0xc4] = 0;
        *owner->flags |= 2;
    }

    textFormatBuffer(name, "%sb%03d_%02d.bam", "battle/battle_map/", stage, substage);
    if (FUN_00240c34(name) == 0) {
        textFormatBuffer(name, "%sb%03d_%02d.bam", "battle/battle_map/", 1, 1);
        model->stage = 1;
        model->substage = 1;
    }
    void* memory = FUN_00178b04(0x20, DAT_00527348, 217);
    model->mapList = memory != NULL ? modelListInit(memory) : NULL;
    FUN_001cd3ec(model->mapList, name);

    row = findStageRow(model);
    if (row == NULL) return;
    for (s32 i = 0; i < 2; i++) {
        StageBam* bam = &row->bams[i];
        if (bam->name[0] == '0') continue;
        textFormatBuffer(name, "%s%s.bam", "battle/battle_map/", bam->name);
        void* bamMemory = FUN_00178b04(0x20, DAT_00527348, 246);
        model->bamList[i] = bamMemory != NULL ? modelListInit(bamMemory) : NULL;
        FUN_001cd3ec(model->bamList[i], name);
        model->bamPos[i][0] = (f32)bam->x;
        model->bamPos[i][1] = (f32)bam->y;
        model->bamPos[i][2] = (f32)bam->z;
    }
}

} /* extern "C" */
