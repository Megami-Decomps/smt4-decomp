/* NON_MATCHING: flag disjunctions fold into two aggregate-mask tests and state-store registers/branch layout differ; -O2 candidate. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match6_ContentTransition.h"

struct ContentTransitionUpdate {
    ContentTransition scene;
    u8 unk048[0x10];
    u8 input[0x44]; // 0x58
    u8 tokens[0xcc4]; // 0x9c
    u32 savedToken; // 0xd60
    u8 unkd64[0xf4];
    u8 processActive; // 0xe58
    u8 unke59[3];
    u32 process; // 0xe5c
};
struct ContentTransitionRequests {
    u8 unk00[0x78];
    u16 state12, state13;
};
extern "C" {
extern ContentTransitionRequests DAT_0049fa1c;
extern AocSystem *g_aocSystem;
u32 FUN_002764a8(AocSystem *);
void slotSetRequest(s32, s32, u32);
void messageMainFinishWindow();
u32 FUN_0022b8c0(void *);
void FUN_003b875c(ContentTransition *);
void FUN_0022b778(ContentTransition *);
void FUN_0022b83c(ContentTransition *, void *);
void FUN_00341a3c(u32);

void updateContentTransitionDispatch(ContentTransition *scene)
{
    ContentTransitionUpdate *update = (ContentTransitionUpdate *)scene;
    if (DAT_0049fa1c.state13) {
        scene->state = 13;
        scene->phase = 0;
        DAT_0049fa1c.state13 = 0;
    } else if (DAT_0049fa1c.state12) {
        scene->state = 12;
        scene->phase = 0;
        DAT_0049fa1c.state12 = 0;
    } else if (FUN_002764a8(g_aocSystem)) {
        scene->state = 14;
        scene->phase = 0;
    } else {
        u32 flags = scene->flags;
        if (flags & 0x400000) {
            slotSetRequest(0, 30, 0xff);
            scene->phase = 0;
            scene->state = 16;
        } else if ((flags & 0x10) || (flags & 0x200000) ||
                   (flags & 0x40000) || (flags & 0x800000) ||
                   (flags & 0x4000000) || (flags & 0x1000000) ||
                   (flags & 0x2000000) || (flags & 0x8000000) || (flags & 0x20000000)) {
            if (!(flags & 0x100))
                slotSetRequest(0, 10, 0xff);
            flags = scene->flags;
            if (((flags & 0x800000) || (flags & 0x1000000) ||
                 (flags & 0x2000000) || (flags & 0x8000000) ||
                 (flags & 0x100000) || (flags & 0x80000) ||
                 (flags & 0x200000) || (flags & 0x40000) ||
                 (flags & 0x4000000) || (flags & 0x20000000)) && !(flags & 0x100))
                slotSetRequest(1, 10, 0xff);
            scene->phase = 0;
            scene->state = 16;
        } else if (flags & 0x2000) {
            if (flags & 0x40) {
                scene->flags = flags & ~0x40U;
                messageMainFinishWindow();
            }
            scene->state = 6;
            scene->phase = 0;
            update->savedToken = FUN_0022b8c0(update->tokens);
            scene->flags &= ~0x2000U;
        } else {
            FUN_003b875c(scene);
        }
    }
    FUN_0022b778(scene);
    FUN_0022b83c(scene, update->input);
    if (update->processActive)
        FUN_00341a3c(update->process);
}
}
