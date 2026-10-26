/* NON_MATCHING: transition-case block placement, job/coordinate register allocation and pair-copy store splitting differ; alternate optimization may explain these differences. */
#include "shard/S1Mover.h"
#include "addon/aocMain.h"
#include "shard/JobWork.h"

struct BustupOffset {
    f32 x;
    f32 y;
};

struct BustupPlacementWork {
    u8 unk00[8];
    s32 slot;
    u8 unk0c[4];
    u32 textureTable;
    u8 unk14[0x10];
    s32 operation;
    f32 progress;
    u8 unk2c[4];
    u8 hidden;
    u8 unk31[3];
    Vec3f basePosition;
    Vec3f position;
    Vec3f startPosition;
    u8 unk58[0x20];
    s32 state;
    u8 unk7c[4];
    s32 textureActive;
    s32 textureIndex;
    u8 unk88[8];
    BustupOffset current;
    BustupOffset destination;
    BustupOffset previous;
};

struct AocSlot;
extern "C" {
extern AocSystemA* g_aocSystem;
s32 gameFlagIsSet(u32 flag);
void asdTMTexTableReleaseNode(u32 table, s32 node);
void FUN_001b2d54(AocSystemA* system, u32 table, s32 node);
void aocSlotRelease(AocSlot* slot);
s32 bustupCutAnimAssignSlot(u32 job, s32 slot);
void bustupSpriteStartTransition(BustupPlacementWork* work, s32 operation, s32 duration);
u32 FUN_001ad1ac(Vec3f* position, s32 slot);

void bustupCutAnimSetPlacement(u32 job, s32 slot, s32 snap, s32 x, s32 y)
{
    if (gameFlagIsSet(0x522) && job == 0) {
        return;
    }

    BustupPlacementWork* work = (BustupPlacementWork*)jobGetWork(job);
    if (work->textureIndex != -1 && work->textureActive != 0) {
        asdTMTexTableReleaseNode(work->textureTable, work->textureIndex);
        FUN_001b2d54(g_aocSystem, work->textureTable, work->textureIndex);
        work->textureIndex = -1;
        work->textureActive = 0;
    }
    work->hidden = 1;
    aocSlotRelease((AocSlot*)work);
    work->slot = slot;
    work->previous = work->current;
    work->destination.x = (f32)x * 50.0f * 0.001953125f;
    work->destination.y = (f32)y * -50.0f * 0.001953125f;

    const s32 result = bustupCutAnimAssignSlot(job, slot);
    if (result != 0) {
        if (result == 1) {
            bustupSpriteStartTransition(work, 2, 0);
            work->state = 2;
            return;
        }
        if (result == 2) {
            if (snap != 0) {
                bustupSpriteStartTransition(work, 6, 0);
            } else {
                bustupSpriteStartTransition(work, 7, 0);
            }
            work->state = 2;
            work->previous = work->destination;
            work->current = work->destination;
            return;
        }
        if (result == 3) {
            bustupSpriteStartTransition(work, 5, 0);
            BustupPlacementWork* active = (BustupPlacementWork*)jobGetWork(job);
            active->state = 1;
            active->startPosition = active->basePosition;
            FUN_001ad1ac(&work->position, work->slot);
            return;
        }
    } else {
        work->operation = 0;
        if (work->state != 0) {
            work->state = 1;
        } else {
            work->hidden = 0;
            work->progress = 0.0f;
            work->current = work->destination;
            work->previous = work->destination;
        }
    }
}
}
