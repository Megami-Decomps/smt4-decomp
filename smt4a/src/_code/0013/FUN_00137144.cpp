/* NON_MATCHING: identical except the register pair (r2/r3) armcc picks for the unrolled layer-13 loop over the line windows. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

/* One message window's work area. */
struct MessageWindowWork {
    /* 0x0000 */ u32 head;
    /* 0x0004 */ u32 handle;      /* the window's draw object */
    /* 0x0008 */ u8 unk0008;
    /* 0x0009 */ u8 layer;
    /* 0x000A */ u8 unk000A[0x19BA];
    /* 0x19C4 */ u8 hidden;
};

/* The message system: the main window and two more, plus a table of twelve line windows. */
struct MessageSystem {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MessageWindowWork *main;
    /* 0x08 */ MessageWindowWork *second;
    /* 0x0C */ MessageWindowWork *third;
};

extern "C" {
extern MessageSystem g_messageMain;
extern MessageWindowWork *DAT_005e2010[12];

void asdTMTexTableLoadTmx(s32 table, s32 arg);
void asdTMTexTableLoadSprites(s32 table);
void FUN_0014afd0(s32 kind, s32 index);
MessageWindowWork *FUN_00145280(void);
void FUN_001527d8(u32 handle, s32 value);
void infoWindowInitialize(void);
void FUN_0013f578(void);
void FUN_001409e4(void);
s32 FUN_0013f7c4(u32 handle);
void FUN_00144efc(void (*callback)(void));
void FUN_001445a0(void (*callback)(void));
void FUN_001456fc(void);
void FUN_00145534(void);
void asdTextSetDefaultValue(s32 (*callback)(void));
s32 msgIsSkipInputActive(void);
void objFlagsSetBits(u32 handle, u32 bits);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);

/* Starts the message system: loads its textures, creates the main, second and third windows and
 * twelve line windows, assigns their layers, starts the draw task and installs the message callbacks. */
void FUN_00137144(void)
{
    asdTMTexTableLoadTmx(3, 0);
    asdTMTexTableLoadSprites(8);
    for (s32 i = 0; i < 3; i++)
        FUN_0014afd0(8, i);
    g_messageMain.main = FUN_00145280();
    g_messageMain.second = FUN_00145280();
    g_messageMain.third = FUN_00145280();
    for (s32 i = 0; i < 12; i++)
        DAT_005e2010[i] = FUN_00145280();
    g_messageMain.main->layer = 1;
    g_messageMain.second->layer = 6;
    g_messageMain.third->layer = 12;
    FUN_001527d8(g_messageMain.third->handle, 0xFF);
    for (s32 i = 0; i < 12; i++)
        DAT_005e2010[i]->layer = 13;
    infoWindowInitialize();
    FUN_0013f578();
    FUN_001409e4();
    taskCreateDraw((const s8 *)"MESS_D", 239, 0, 0, FUN_0013f7c4, NULL, (u32)g_messageMain.main, (void *)g_messageMain.main->head);
    MessageWindowWork *main = g_messageMain.main;
    main->hidden = 1;
    g_messageMain.second->hidden = 0;
    g_messageMain.third->hidden = 0;
    for (s32 i = 0; i < 12; i++)
        DAT_005e2010[i]->hidden = 0;
    objFlagsSetBits(main->handle, 0x100);
    objFlagsSetBits(g_messageMain.second->handle, 0x200);
    objFlagsSetBits(g_messageMain.third->handle, 0x100);
    for (s32 i = 0; i < 12; i++)
        objFlagsSetBits(DAT_005e2010[i]->handle, 0x100);
    FUN_00144efc(FUN_001456fc);
    FUN_001445a0(FUN_00145534);
    asdTextSetDefaultValue(msgIsSkipInputActive);
}

} /* extern "C" */
