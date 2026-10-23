/* NON_MATCHING: adjacent parameter table addresses load independently instead of retail's subtractions. */
#include "ui/HunterDatabaseWork.h"

extern "C" {
void paramsClearPacket(void *);
void paramsInit(void *, const void *, u32, const void *, u32, u32, u32, u32, u32, const void *, u32);
void FUN_0014e188(UiSpriteState *, u32, u32, void *, u32, f32);
void uiSpriteSetKeyframe(UiSpriteState *, u32, u32);
void uiSpriteSetImageKeyframe(UiSpriteState *, u32, u32);
void uiSpriteSelectAnim(UiSpriteState *, s32);
extern u8 DAT_0052cf4c[], DAT_0052cfb8[], DAT_0052d000[];

// Configure the hunter database's five widgets from its shared parameter packet.
void FUN_00405c94(HunterDatabaseWork *work)
{
    paramsClearPacket(work->setup.parameters);
    paramsInit(work->setup.parameters, DAT_0052cf4c, 0x6c, DAT_0052cfb8, 0x48,
               0, 0, 0, 0, DAT_0052d000, 0xe0);
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
