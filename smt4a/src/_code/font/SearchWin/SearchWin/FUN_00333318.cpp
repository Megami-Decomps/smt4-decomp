/* NON_MATCHING: parameter size argument registers and resource-pool relocation base differ. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "font/SearchWin/SearchWin.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern SearchWinWork *DAT_0057f584;
extern const char DAT_0052fd6c[];
extern const char DAT_0052fdd8[];
extern const char DAT_0052fdc0[];
extern const char DAT_0052fda8[];
struct SearchWindowResources {
    u8 first[0x24];
    u8 second[0x24];
    u8 fifth[0x70];
};
extern const SearchWindowResources DAT_0052fcb4;
u32 FUN_0023a9a0(void *work);
u32 FUN_0023a5f8(void *work);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
void sysMemClear(void *memory, u32 bytes);
u32 taskCreateDraw(const char *name, u32 priority, u32 flags, void *work,
    u32 (*callback)(void *), u32 argument, u32 target, u32 parent);
void paramsClearPacket(void *packet);

void FUN_0014e188(UiAnimatedSprite *sprite, u32 kind, u32 priority, void *packet, f32 scale, u32 enabled);
void uiSpriteSelectAnim(UiAnimatedSprite *sprite, s32 animation);

// Create the search window's update task, stereo draw tasks and animated sprite.
void FUN_00333318(void)
{
    // The packet and sprite are inside byte-aligned shared padding; keep this aligned view local.
    struct SearchWindowRenderView {
        u8 unk00[0x18];
        u32 packet[8];
        UiAnimatedSprite sprite;
    };
    if (DAT_0057f584 == NULL) {
        asdDebugTrace(DAT_0052fd6c, 135);
        DAT_0057f584 = static_cast<SearchWinWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(SearchWinWork), 1));
    }
    SearchWinWork *window = DAT_0057f584;
    sysMemClear(window, sizeof(*window));
    window->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_0052fdd8), 3, 0, NULL, reinterpret_cast<AsdProcUpdateFunc>(FUN_0023a9a0), 0, 0);
    taskCreateDraw(DAT_0052fdc0, 0x86, 0, NULL, FUN_0023a5f8, 0, 0, window->job);
    taskCreateDraw(DAT_0052fda8, 0xE2, 0, NULL, FUN_0023a5f8, 0, 0, window->job);
    SearchWindowRenderView *render = reinterpret_cast<SearchWindowRenderView *>(window);
    paramsClearPacket(render->packet);
    paramsInit(reinterpret_cast<UiResourceParameters *>(render->packet), DAT_0052fcb4.first, sizeof(DAT_0052fcb4.first),
        DAT_0052fcb4.second, sizeof(DAT_0052fcb4.second),
        NULL, 0, NULL, 0, DAT_0052fcb4.fifth, sizeof(DAT_0052fcb4.fifth));
    FUN_0014e188(&render->sprite, 8, 0x87, render->packet, 1.0f, 1);
    uiSpriteSelectAnim(&render->sprite, 0);
}
}
