/* NON_MATCHING: only zero/one saved-register allocation differs (r6/r7 swapped); canonical weak debug trace now reproduces the retail allocation preamble. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct EventBattleTextureWork {
    u32 id;
    s32 state;
    f32 scale;
    f32 opacity;
    f32 opacityStep;
    u8 stopWhenTransparent;
    u8 unk15;
    u8 enabled;
    u8 unk17;
    u8 unk18[0x14];
    f32 position[2];
    u32 resource;
    s32 textureId;
    s32 direction;
    f32 animationTime;
    u8 animated;
    u8 unk45[3];
};
struct EventBattleTextureRecord {
    u8 unk00[0x88];
    s16 textureId;
};

extern "C" {
void *asdMemAlloc(s32 pool, s32 alignment, s32 flags, u32 size, s32 clear);
void memClear(void *memory, u32 size);
EventBattleTextureRecord *dataTable00FindById(u16 id);
s32 FUN_002c1d5c(void);
u32 FUN_00294090(s32 textureId, s32 flags);
u32 FUN_001e00c0(void *job);
u32 FUN_001e023c(void *job);
void jobWorkRelease(void *job);
void *asdProcessCreateSimple(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*step)(void *), void (*destroy)(void *), void *work);
void *taskCreateDraw(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*draw)(void *), void (*destroy)(void *), void *work, void *process);
extern const char k_eventBattleTextureProcessName[];
extern const char k_eventBattleTextureDrawName[];

void *eventCreateBattleTexture(u32 id, f32 x, f32 y)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\3dEvent\\3dEventTex.cpp", 0x161);
    EventBattleTextureWork *work = static_cast<EventBattleTextureWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(EventBattleTextureWork), 1));
    memClear(work, sizeof(EventBattleTextureWork));
    work->scale = 1.0f;
    work->opacity = 0.0f;
    work->opacityStep = 0.25f;
    work->stopWhenTransparent = 0;
    work->unk17 = 0;
    work->textureId = dataTable00FindById(id)->textureId;
    work->animated = 1;
    if (FUN_002c1d5c()) {
        work->state = 1;
    } else {
        work->resource = FUN_00294090(work->textureId, 1);
        work->state = 2;
    }
    work->id = static_cast<u16>(-id);
    if (x <= -4.0f) {
        work->direction = 16;
    } else if (x <= -3.0f) {
        work->direction = 3;
    } else if (x >= 3.0f) {
        work->direction = 17;
    } else if (x >= 1.5f) {
        work->direction = 4;
    } else if (x < 0.0f) {
        work->direction = 18;
    } else {
        work->direction = 5;
    }
    work->position[0] = x;
    work->position[1] = y;
    work->enabled = 1;
    work->unk15 = 0;
    void *process = asdProcessCreateSimple(k_eventBattleTextureProcessName, 2, 0, 0, FUN_001e00c0, jobWorkRelease, work);
    taskCreateDraw(k_eventBattleTextureDrawName, 0x6f, 0, 0, FUN_001e023c, 0, work, process);
    return process;
}
}
