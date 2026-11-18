#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/HunterDatabaseWork.h"
#include "ui/UiSpriteState.h"

extern "C" {
void paramsClearPacket(void *); // declcheck: local (the shared declaration does not compile here or changes this unit)

static const u32 s_first[27] = {
    0x0000ffe2, 0x00000000, 0x00000005, 0x0000001e, 0x00000000, 0x00000005, 0x00000000, 0x0000ffe2, 0x00000003,
    0x00000000, 0x0000001e, 0x00000003, 0x0000fff2, 0x00000000, 0x00000005, 0x0000000e, 0x00000000, 0x00000005,
    0x00000000, 0x0000fff2, 0x00000003, 0x00000000, 0x0000000e, 0x00000003, 0x0000012c, 0x0000ffc4, 0x00010028,
};
static const u32 s_second[18] = {
    0x00000000, 0x3f800000, 0x00000005, 0x3f800000, 0x00000000, 0x00000003, 0x3f800000, 0x3f000000, 0x00000014,
    0x3f000000, 0x3f800000, 0x00000028, 0x00000000, 0x3f800000, 0x0000001e, 0x3f800000, 0x00000000, 0x0000001e,
};
static const u32 s_commands[56] = {
    0xfffffffd, 0x00000000, 0xfffffffd, 0x00000002, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd,
    0x00000000, 0xfffffffd, 0x00000003, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd, 0x00000000,
    0xfffffffd, 0xfffffffe, 0x00000000, 0xfffffffd, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff,
    0xffffffff, 0x00000000, 0xffffffff, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd, 0x00000004,
    0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd, 0x00000005, 0x00000000,
    0xfffffffd, 0x00000000, 0xfffffffd, 0x00000000, 0xfffffffd, 0xfffffffe, 0x00000000, 0xfffffffd,
    0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0x00000000,
};

// Configure the hunter database's five widgets from its shared parameter packet.
void hunterDatabaseSetupWidgets(HunterDatabaseWork *work)
{
    paramsClearPacket(work->setup.parameters);
    paramsInit(reinterpret_cast<UiResourceParameters *>(work->setup.parameters), s_first, sizeof(s_first),
               s_second, sizeof(s_second), 0, 0, 0, 0,
               s_commands, sizeof(s_commands));
    uiSpriteStateInitFromSource(&work->setup.widgets[0], 0x32, 0, (UiResourceParameters *)(work->setup.parameters), 0xc9, 1.0f);
    uiSpriteSetKeyframe(&work->setup.widgets[0], 1, 0);
    uiSpriteSetImageKeyframe(&work->setup.widgets[0], 0, 0);
    uiSpriteStateInitFromSource(&work->setup.widgets[1], 0x32, 0, (UiResourceParameters *)(work->setup.parameters), 0xc9, 1.0f);
    uiSpriteSetKeyframe(&work->setup.widgets[1], 1, 0);
    uiSpriteSetImageKeyframe(&work->setup.widgets[1], 0, 0);
    uiSpriteStateInitFromSource(&work->setup.widgets[2], 0x32, 0, (UiResourceParameters *)(work->setup.parameters), 0xc9, 1.0f);
    uiSpriteStateInitFromSource(&work->setup.widgets[3], 0x32, 0, (UiResourceParameters *)(work->setup.parameters), 0xc9, 1.0f);
    uiSpriteSelectAnim(&work->setup.widgets[3], 0);
    uiSpriteStateInitFromSource(&work->setup.widgets[4], 0x32, 0, (UiResourceParameters *)(work->setup.parameters), 0xc9, 1.0f);
    uiSpriteSelectAnim(&work->setup.widgets[4], 1);
}
}
