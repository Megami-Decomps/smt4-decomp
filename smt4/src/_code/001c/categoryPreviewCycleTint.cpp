#include "battle/ActorCardAnimations.h"
#include "gamedata/UnitStats.h"
#include "code/Code0026_Smt4.h"

extern "C" {
u16 *FUN_0029acb0();
u32 categoryGetColor(u32 category);
void FUN_00317e58(u32 color);
void FUN_0026a958(s32 enabled);
void FUN_0029d8f4(const StatBlock *record, s32 enabled, u8 mode);
void statusPanelSetOpen(s32 enabled);
}

static void categoryPreviewUpdate(const ActorCardAnimations *work, s32 index)
{
    StatBlock record;
    FUN_0026a858(work->targets[index].id, reinterpret_cast<Record *>(&record));
    record.hp = work->targets[index].hp;
    record.mp = work->targets[index].mp;
    record.ailments = work->targets[index].ailments;
    FUN_0029d8f4(&record, 1, 0);
    FUN_0026a958(1);
    statusPanelSetOpen(1);
}

extern "C" void categoryPreviewCycleTint(ActorCardAnimations *work)
{
    u16 *current = FUN_0029acb0();
    for (s32 index = 0; index < work->targetCount; ++index) {
        if (!work->targets[index].active)
            continue;
        if (work->targets[index].ailments != 0) {
            if ((s16)current[0] != work->targets[index].id)
                continue;
            s32 categoryCount = 0;
            for (s32 category = 1; category < 11; ++category) {
                if (!(work->targets[index].ailments & (1u << (s8)category)))
                    continue;
                if (work->categoryIndex == categoryCount) {
                    FUN_00317e58(categoryGetColor((s16)category));
                    FUN_0026a958(1);
                    if (work->targets[index].ailments != current[10])
                        categoryPreviewUpdate(work, index);
                }
                ++categoryCount;
            }
            if (work->targetTimer >= 24) {
                work->categoryIndex = (work->categoryIndex + 1) % categoryCount;
                work->targetTimer = 0;
            }
            if (work->targets[index].ailments != 0)
                continue;
        }
        FUN_00317e58(categoryGetColor(0));
        if (work->targets[index].ailments != current[10])
            categoryPreviewUpdate(work, index);
    }
}
