/* NON_MATCHING: allocation publication order recovered; handle-registry load and free-on-end store scheduling still differ. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/GameGlobals.h"
#include "AsdSDK/AsdMemAlloc.h"

/* The part of g_gameState the map start-up clears. */
struct MapGameState {
    /* 0x000 */ u8 unk000[0x21];
    /* 0x021 */ u8 unk21;
    /* 0x022 */ u8 unk22[0x23D];
    /* 0x25F */ u8 unk25F;
};

/* The map mode's block in Apocalypse (0xD4 bytes, only the fields set at start-up are named). */
struct MapMainBlockA {
    /* 0x00 */ u32 job;              /* the map mode's process */
    /* 0x04 */ u32 drawJob;          /* its draw task */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 freeOnEnd;
    /* 0x0D */ u8 flag0D;
    /* 0x0E */ u8 flag0E;
    /* 0x0F */ u8 flag0F;
    /* 0x10 */ u8 flag10;
    /* 0x11 */ u8 flag11;
    /* 0x12 */ u8 flag12;
    /* 0x13 */ u8 flag13;
    /* 0x14 */ u8 flag14;
    /* 0x15 */ u8 flag15;
    /* 0x16 */ u8 flag16;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u32 counter18;
    /* 0x1C */ u8 flag1C;
    /* 0x1D */ u8 flag1D;
    /* 0x1E */ u8 flag1E;
    /* 0x1F */ u8 flag1F;
    /* 0x20 */ u8 flag20;
    /* 0x21 */ u8 flag21;
    /* 0x22 */ u8 flag22;
    /* 0x23 */ u8 flag23;
    /* 0x24 */ u8 flag24;
    /* 0x25 */ u8 flag25;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ u32 counter28;
    /* 0x2C */ u32 counter2C;
    /* 0x30 */ u32 counter30;
    /* 0x34 */ u32 enabled;
    /* 0x38 */ u32 counter38;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ u8 flag40;
    /* 0x41 */ u8 flag41;
    /* 0x42 */ u8 unk42[2];
    /* 0x44 */ u32 counter44;
    /* 0x48 */ u8 unk48[2];
    /* 0x4A */ u8 flag4A;
    /* 0x4B */ u8 flag4B;
    /* 0x4C */ u8 flag4C;
    /* 0x4D */ u8 flag4D;
    /* 0x4E */ u8 flag4E;
    /* 0x4F */ u8 flag4F;
    /* 0x50 */ u8 unk50[0x5C];
    /* 0xAC */ u32 messageId;
    /* 0xB0 */ u32 messageState;
    /* 0xB4 */ u8 unkB4[4];
    /* 0xB8 */ u32 counterB8;
    /* 0xBC */ u8 flagBC;
    /* 0xBD */ u8 flagBD;
    /* 0xBE */ u8 flagBE;
    /* 0xBF */ u8 flagBF;
    /* 0xC0 */ u8 unkC0[0xC];
    /* 0xCC */ u32 counterCC;
    /* 0xD0 */ u32 handleRegistry;
};

extern "C" {
extern MapMainBlockA *g_mapMain;
extern u32 g_handleRegistry;
extern MapGameState g_gameState;

u8 *gameFlagsGetBlock(void);
void FUN_002c23cc(s32 mode);
void mapEplAlloc(void);
void mapEplSlotsInit(void);
void FUN_002496b8(void);
void FUN_002442ac(void);
void FUN_0020ef94(void);
void mapDepartResetWork(void);
void mapObjectResetSlots(void);
void mapGimmickResetControllers(void);
void mapMainRequest(u32 handle);
s32 FUN_0024f4ac(u32 handle);
void noopCallback(u32 handle);
void FUN_0029ee68(u32 handle);
void FUN_002bd170(u32 handle);
void FUN_00358550(u32 handle);
void FUN_00358734(u32 handle);
u32 taskCreateDraw(const char *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate,
                   AsdProcFunc onEnd, u32 work, void *owner);

/* Creates the map mode: allocates and clears its block, resets the map subsystems and starts the
 * map process and its four draw tasks. */
void FUN_00246720(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapMain.cpp", 543);
    g_mapMain = (MapMainBlockA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MapMainBlockA), 1);
    MapMainBlockA *map = g_mapMain;
    u8 *flagsBlock = gameFlagsGetBlock();
    FUN_002c23cc(1);
    map->flag0D = 0;
    map->flag0E = 0;
    map->flag0F = 0;
    map->flag10 = 0;
    map->flag11 = 0;
    map->flag12 = 0;
    map->flag13 = 0;
    map->flag14 = 0;
    map->flag15 = 0;
    map->flag16 = 0;
    map->counter18 = 0;
    map->flag1C = 0;
    map->flag1D = 0;
    map->flag1E = 0;
    map->flag1F = 0;
    map->flag20 = 0;
    map->flag21 = 0;
    map->flag22 = 0;
    map->flag23 = 0;
    map->flag24 = 0;
    map->flag25 = 0;
    map->flag41 = 0;
    map->counter44 = 0;
    map->counter28 = 0;
    map->counter2C = 0;
    map->counter30 = 1;
    map->counter38 = 0;
    map->enabled = 1;
    map->flag40 = 0;
    map->flag4E = 1;
    map->flag4F = 0;
    map->flag4A = 0;
    map->flag4B = 0;
    map->flag4C = 0;
    map->flag4D = 0;
    mapEplAlloc();
    mapEplSlotsInit();
    FUN_002496b8();
    FUN_002442ac();
    FUN_0020ef94();
    mapDepartResetWork();
    mapObjectResetSlots();
    mapGimmickResetControllers();
    map->messageId = 0x1C2;
    map->messageState = 0;
    map->counterB8 = 0;
    map->flagBC = 0;
    map->flagBD = 0;
    map->flagBE = 0;
    map->flagBF = 0;
    g_gameState.unk25F = 0;
    g_gameState.unk21 = 0;
    flagsBlock[0x7C4] = 0;
    map->counterCC = 0;
    map->handleRegistry = g_handleRegistry;
    map->freeOnEnd = 0;
    map->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("MAP C"), 4, 0, 0, (AsdProcUpdateFunc)FUN_0024f4ac, mapMainRequest, 0);
    map->drawJob = taskCreateDraw("MAP U", 113, 0, 0, (AsdProcUpdateFunc)FUN_0029ee68, noopCallback, 0, (void *)map->job);
    taskCreateDraw("MAP EL", 119, 0, 0, (AsdProcUpdateFunc)FUN_00358550, NULL, 0, (void *)map->job);
    taskCreateDraw("MAP ER", 211, 0, 0, (AsdProcUpdateFunc)FUN_00358734, NULL, 0, (void *)map->job);
    taskCreateDraw("MAP EXT", 104, 0, 0, (AsdProcUpdateFunc)FUN_002bd170, noopCallback, 0, (void *)map->job);
}

} /* extern "C" */
