/* NON_MATCHING: readable rewrite from retail disassembly compiles (253 vs 249 rows); retail keeps the handler table pointers in literal-pool loads and the file-line assertion strings inline, ordering of the stack argument struct differs */
#include "common.h"

typedef void (*CecHandler)(void);

// Allocation record kept for the receive list (24 bytes).
struct CecList {
    u32 unk00;
    u32 unk04;
    u32 begin;              // 0x08
    u32 size;               // 0x0c
    u8 flag;                // 0x10
    u8 pad11[7];
};

// State of the CEC receive screen (0x808 bytes).
struct CampCecRecv {
    /* 0x000 */ u32 process;
    /* 0x004 */ u32 unk004[2];
    /* 0x00c */ CecHandler handlers[9];     // 0x0c..0x2c
    /* 0x030 */ u32 unk030;
    /* 0x034 */ CecHandler finishHandler;   // 0x34
    /* 0x038 */ u8 unk038[0x350 - 0x38];
    /* 0x350 */ u32 scriptFile;             // 0x350 (848)
    /* 0x354 */ u32 messageFile;            // 0x354 (852)
    /* 0x358 */ u8 unk358[0x3a8 - 0x358];
    /* 0x3a8 */ u32 selection;              // 0x3a8 (936)
    /* 0x3ac */ s32 mode;                   // 0x3ac (940)
    /* 0x3b0 */ s32 unk3b0;                 // 0x3b0 (944)
    /* 0x3b4 */ s32 unk3b4;                 // 0x3b4 (948)
    /* 0x3b8 */ u8 unk3b8[0x3e0 - 0x3b8];
    /* 0x3e0 */ s32 restriction;            // 0x3e0 (992)
    /* 0x3e4 */ u8 unk3e4[4];
    /* 0x3e8 */ u8 unk3e8;                  // 0x3e8 (1000)
    /* 0x3e9 */ u8 unk3e9[0x7d4 - 0x3e9];
    /* 0x7d4 */ u8 unk7d4;                  // 0x7d4 (2004)
    /* 0x7d5 */ u8 fromMenu;                // 0x7d5 (2005)
    /* 0x7d6 */ u8 unk7d6[2];
    /* 0x7d8 */ u32 drawList;               // 0x7d8 (2008)
    /* 0x7dc */ u8 unk7dc[0x7f0 - 0x7dc];
    /* 0x7f0 */ u8 unk7f0;                  // 0x7f0 (2032)
    /* 0x7f1 */ u8 unk7f1[3];
    /* 0x7f4 */ u32 unk7f4;                 // 0x7f4 (2036)
    /* 0x7f8 */ CecList* list;              // 0x7f8 (2040)
    /* 0x7fc */ u32 result;                 // 0x7fc (2044)
    /* 0x800 */ u8 unk800[4];
    /* 0x804 */ void* buffer;               // 0x804 (2052)
};

extern "C" {

extern CampCecRecv* g_campCecRecv;

CampCecRecv* asdMemoryAllocTracked(u32 size, u32 alignment, u32 heap, u32 trackedSize, u32 flag);
void sysMemClear(void* data, u32 size);
u32 asdProcessCreateSimple(const char* name, s32 priority, s32 a, s32 b, void (*run)(void), s32 c, s32 d);
void taskCreateDraw(const char* name, s32 priority, s32 a, s32 b, void (*draw)(void), s32 c, s32 d, u32 parent);
void FUN_0035a840(void);
void FUN_003a5200(void);
void jobScene360WaitStep(void);
void FUN_0032e4a4(void);
void FUN_003193a8(void);
void FUN_0035a3f0(void);
void FUN_0035a7c4(void);
void dataSceneWaitStep(void);
void menuPollModeScript(void);
void FUN_0036d12c(void);
void stateMachineRun(void);
void FUN_0025d578(void);
void FUN_002a28c0(void);
void FUN_00514a64(void);
void FUN_00514b84(void);
void FUN_00514b14(void);
u8* FUN_0031cf00(void);
s32 nn_cfg_CTR_IsRestrictP2pCec(void);
s32 FUN_004310c0(void);
s32 cecQueryOptionalProcess(void);
s32 bitsAt60Test(u8* object, u32 bit);
void asdLoadFileAsyncSimple(const char* path, u32* out, s32 flag);
void sysPlaySe(s32 id);
void runWinOpen(void);
void runWinOpenState(void);
void gameDataAddHomeButtonHold(s32 value);
void gameDataBlocksAddFlags(u32 flags);
u32 campCecDrawListCreate(void);
void* memAlloc(u32 size, u32 alignment, u32 heap, u32 trackedSize, u32 usable, u32 flag);
void* asdOperatorNew(u32 size, u8* allocator);
void resultReportIfFailed(void* list, void* buffer, u32 size);
u32 FUN_002fb0d4(u32* result, void* handlers, void (*callback)(void), CampCecRecv** context, u32 end, u32 a, s32 b, s32 c);
void FUN_002e3140(void);

// Creates the CEC receive screen: allocates its state, starts the calc/draw tasks, works out
// whether the feature is available (restriction code in `restriction`) and either loads the
// script/message files for the error path or opens the receive window.
void FUN_00344348(u8 fromMenu)
{
    if (g_campCecRecv == NULL) {
        g_campCecRecv = asdMemoryAllocTracked(0x100, 0x100, 0, 0x808, 1);
    }
    CampCecRecv* recv = g_campCecRecv;
    sysMemClear(recv, 0x808);
    recv->process = asdProcessCreateSimple("CampCecRecv Calc", 3, 0, 0, stateMachineRun, 0, 0);
    taskCreateDraw("CampCecRecv Draw", 0x86, 0, 0, FUN_0025d578, 0, 0, recv->process);
    taskCreateDraw("CampCecRecv DrawR", 0xe2, 0, 0, FUN_0025d578, 0, 0, recv->process);
    recv->fromMenu = fromMenu;
    recv->unk3e8 = 0;
    recv->selection = -1;
    recv->mode = 0;
    recv->unk3b0 = -1;
    recv->unk3b4 = -1;
    recv->handlers[0] = FUN_0035a840;
    recv->handlers[1] = FUN_003a5200;
    recv->handlers[2] = jobScene360WaitStep;
    recv->handlers[3] = FUN_0032e4a4;
    recv->handlers[4] = FUN_003193a8;
    recv->handlers[5] = FUN_0035a3f0;
    recv->handlers[6] = FUN_0035a7c4;
    recv->handlers[7] = dataSceneWaitStep;
    recv->handlers[8] = menuPollModeScript;
    recv->finishHandler = FUN_0036d12c;

    u8* network = FUN_0031cf00();
    recv->restriction = 0;
    if (nn_cfg_CTR_IsRestrictP2pCec() != 0) {
        recv->restriction = 1;
    } else if (FUN_004310c0() == 0) {
        recv->restriction = 2;
    } else if (cecQueryOptionalProcess() == 0 && recv->fromMenu == 0) {
        recv->restriction = 6;
    } else if (network != NULL) {
        if (bitsAt60Test(network, 1) != 0) {
            recv->restriction = 3;
        } else if (bitsAt60Test(network, 10) != 0) {
            recv->restriction = 4;
        }
    }

    recv->unk7d4 = 0;
    if (recv->restriction != 0) {
        asdLoadFileAsyncSimple("camp/CecMain_scr.bf", &recv->scriptFile, 0);
        asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", &recv->messageFile, 0);
        recv->mode = 8;
        return;
    }

    sysPlaySe(3);
    sysPlaySe(0xbb);
    runWinOpen();
    runWinOpenState();
    gameDataAddHomeButtonHold(2);
    gameDataBlocksAddFlags(2);
    recv->drawList = campCecDrawListCreate();
    recv->unk7f0 = 0;
    recv->unk7f4 = 0;
    recv->buffer = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    CecList* list = static_cast<CecList*>(asdOperatorNew(0x18, network));
    if (list != NULL) {
        list->unk00 = 0;
        list->unk04 = 0;
        list->begin = 0;
        list->size = 0;
        list->flag = 0;
    }
    recv->list = list;
    resultReportIfFailed(list, recv->buffer, 0x1000);
    struct {
        u32 count;
        void (*first)(void);
        void (*second)(void);
        void (*third)(void);
    } handlers = { 4, FUN_00514a64, FUN_00514b84, FUN_00514b14 };
    u32 result = FUN_002fb0d4(&recv->result, &handlers, FUN_002a28c0, &recv, recv->list->size + recv->list->begin, 0x11, -2, 0);
    if ((result & 0x7e00000) != 0x600000 && (s32)result < 0) {
        FUN_002e3140();
    }
}

} /* extern "C" */
