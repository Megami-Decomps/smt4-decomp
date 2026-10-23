#include "ui/MessageMain.h"
#include "sys/Task.h"

// The panel's display-enable byte is inside its existing opaque widget storage.
struct MessageDisplayEnableView {
    u8 unk000[0xA10];
    u8 enabled;
};
typedef char MessageDisplayEnableOffset[offsetof(MessageDisplayEnableView, enabled) == 0xA10 ? 1 : -1];

extern "C" {
extern MessageGlobals g_messageMain;
void asdTMTexTableLoadTmx(u32 table, u32 variant);
void asdTMTexTableLoadSprites(u32 table);
void FUN_002c58c8(u32 table, s32 index);
void *FUN_002c4a34(void);
void infoWindowCreate(void);
void FUN_0010a7bc(void);
void FUN_0010b3c0(void);
void FUN_0010a9c8(void *work);
Task *taskCreateDraw(const char *name, u16 priority, u32 workSize, TaskFunc update, TaskFunc draw, TaskFunc destroy, void *work, u32 value);
void objFlagsSetBits(u32 object, u32 bits);
void FUN_0010ec70(void (*callback)(void));
void FUN_0010e5e0(void (*callback)(void));
void FUN_0010efd8(void);
void FUN_0010edf8(void);
void FUN_0010f084(void);
void asdTextSetDefaultStyle(u32 style);

// Load message graphics, create the three message panels, and install their draw callbacks.
void messageInitializeDisplay(void)
{
    asdTMTexTableLoadTmx(5, 0);
    asdTMTexTableLoadSprites(14);
    FUN_002c58c8(5, 0);
    for (s32 index = 0; index < 3; ++index)
        FUN_002c58c8(14, index);
    g_messageMain.state = (MessageWork *)FUN_002c4a34();
    g_messageMain.banner = (MessagePanel *)FUN_002c4a34();
    g_messageMain.unk0C = (MessagePanel *)FUN_002c4a34();
    g_messageMain.state->mode = 1;
    g_messageMain.banner->mode = 6;
    g_messageMain.unk0C->mode = 12;
    infoWindowCreate();
    FUN_0010a7bc();
    FUN_0010b3c0();
    taskCreateDraw("MESS_D", 234, 0, 0, FUN_0010a9c8, 0, g_messageMain.state, *(u32 *)g_messageMain.state->unk000);
    MessageWork *state = g_messageMain.state;
    state->unkA10 = 1;
    ((MessageDisplayEnableView *)g_messageMain.banner)->enabled = 0;
    ((MessageDisplayEnableView *)g_messageMain.unk0C)->enabled = 0;
    objFlagsSetBits(state->box, 0x100);
    objFlagsSetBits(g_messageMain.banner->box, 0x200);
    objFlagsSetBits(g_messageMain.unk0C->box, 0x100);
    FUN_0010ec70(FUN_0010efd8);
    FUN_0010e5e0(FUN_0010edf8);
    asdTextSetDefaultStyle((u32)FUN_0010f084);
}
}
