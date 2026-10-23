/* NON_MATCHING: global pointer uses r5 instead of r4; draw-task result store omits retail's r0-to-r1 move. */
#include "result/ResultInput.h"
#include "AsdSDK/AsdDebug.h"

/* Local view: process handles and result kind lie beyond ResultInputWork's recovered end. */
struct ResultProcessWorkIV {
    ResultInputWork input;
    u8 unk3530[0x30];
    u8 kind;
    u8 unk3561[0xD644 - 0x3561];
    u32 calculate;
    u32 unkD648;
    u32 drawDown;
    u8 unkD650[8];
};
typedef char ResultProcessWorkIVOffsetsCheck[
    offsetof(ResultProcessWorkIV, kind) == 0x3560 &&
    offsetof(ResultProcessWorkIV, calculate) == 0xD644 &&
    offsetof(ResultProcessWorkIV, drawDown) == 0xD64C && sizeof(ResultProcessWorkIV) == 0xD658 ? 1 : -1];

extern "C" {
extern ResultProcessWorkIV *g_result;
extern const char DAT_00405dfc[];
extern const char DAT_00405df0[];
extern const char DAT_00405ddc[];
extern const char DAT_00405dc8[];
extern const char DAT_00405db8[];
void FUN_002898e4(void);
void *asdMemAlloc(u32 heap, u32 alignment, u32 options, u32 size, u32 clear);
u32 FUN_0018c0ec(u32 process);
u32 scrResultDestroy(u32 process);
u32 FUN_001a16c0(u32 process);
u32 FUN_001c8974(u32 process);
u32 asdProcessCreateSimple(const char *name, u32 priority, u32 flags, u32 options,
                           u32 (*update)(u32), u32 (*destroy)(u32), void *work);
u32 taskCreateDraw(const char *name, u32 priority, u32 flags, u32 options,
                   u32 (*draw)(u32), u32 (*destroy)(u32), void *work, u32 parent);
void FUN_003b7b58(ResultProcessWorkIV *work);
void FUN_00296774(ResultProcessWorkIV *work, s32 state);

// Create the result calculation process, stereo upper-screen tasks, and lower-screen task once.
void resultCreate(u8 kind)
{
    if (!g_result) {
        FUN_002898e4();
        asdDebugTrace(DAT_00405dfc, 4708);
        ResultProcessWorkIV *work = (ResultProcessWorkIV *)asdMemAlloc(0x100, 0x100, 0, sizeof(*work), 1);
        g_result = work;
        work->calculate = asdProcessCreateSimple(DAT_00405df0, 2, 0, 0,
                                                FUN_0018c0ec, scrResultDestroy, NULL);
        taskCreateDraw(DAT_00405ddc, 0x80, 0, 0, FUN_001a16c0, NULL, NULL, work->calculate);
        taskCreateDraw(DAT_00405dc8, 0xDE, 0, 0, FUN_001a16c0, NULL, NULL, work->calculate);
        work->drawDown = taskCreateDraw(DAT_00405db8, 0xE6, 0, 0, FUN_001c8974, NULL, NULL, work->calculate);
        FUN_003b7b58(work);
        work->kind = kind;
        FUN_00296774(work, 1);
    }
}
}
