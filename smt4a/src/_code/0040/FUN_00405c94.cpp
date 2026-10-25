/* NON_MATCHING: recovered contiguous template block; stack-store grouping and base subtraction order still differ. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/HunterDatabaseWork.h"
#include <stddef.h>

struct HunterDatabaseTemplate {
    u8 first[0x6C];
    u8 second[0x48];
    u8 commands[0xE0];
};

extern "C" {
void paramsClearPacket(void *);

void FUN_0014e188(UiSpriteState *, u32, u32, void *, u32, f32);
void uiSpriteSetKeyframe(UiSpriteState *, u32, u32);
void uiSpriteSetImageKeyframe(UiSpriteState *, u32, u32);
void uiSpriteSelectAnim(UiSpriteState *, s32);
extern u8 DAT_0052d000[];

// Configure the hunter database's five widgets from its shared parameter packet.
void FUN_00405c94(HunterDatabaseWork *work)
{
    paramsClearPacket(work->setup.parameters);
    const HunterDatabaseTemplate *resources = reinterpret_cast<const HunterDatabaseTemplate *>(
        DAT_0052d000 - offsetof(HunterDatabaseTemplate, commands));
    paramsInit(reinterpret_cast<UiResourceParameters *>(work->setup.parameters), resources->first, sizeof(resources->first),
               resources->second, sizeof(resources->second), 0, 0, 0, 0,
               resources->commands, sizeof(resources->commands));
    FUN_0014e188(&work->setup.widgets[0], 0x32, 0, work->setup.parameters, 0xc9, 1.0f);
    uiSpriteSetKeyframe(&work->setup.widgets[0], 1, 0);
    uiSpriteSetImageKeyframe(&work->setup.widgets[0], 0, 0);
    FUN_0014e188(&work->setup.widgets[1], 0x32, 0, work->setup.parameters, 0xc9, 1.0f);
    uiSpriteSetKeyframe(&work->setup.widgets[1], 1, 0);
    uiSpriteSetImageKeyframe(&work->setup.widgets[1], 0, 0);
    FUN_0014e188(&work->setup.widgets[2], 0x32, 0, work->setup.parameters, 0xc9, 1.0f);
    FUN_0014e188(&work->setup.widgets[3], 0x32, 0, work->setup.parameters, 0xc9, 1.0f);
    uiSpriteSelectAnim(&work->setup.widgets[3], 0);
    FUN_0014e188(&work->setup.widgets[4], 0x32, 0, work->setup.parameters, 0xc9, 1.0f);
    uiSpriteSelectAnim(&work->setup.widgets[4], 1);
}
}
