/* NON_MATCHING: initial global/callback load scheduling and selection sentinel register differ. */
#include "camp/CampTalkWork.h"

extern "C" {
extern CampTalkWork *g_callbackWork;
extern const char DAT_0052c7ac[];
extern const char DAT_0052c794[];
extern const char DAT_0052c780[];
void *asdOperatorNew(u32);
u32 callbackWorkForward(void);
void FUN_0032fab8(void);
void FUN_0032fab0(void);
u32 asdProcessCreateSimple(const char *, s32, s32, s32, u32 (*)(void), void (*)(void), void *);
void taskCreateDraw(const char *, s32, s32, s32, void (*)(void), s32, void *, u32);
void loadSlotRequestAsync(u32, s32);
void asdLoadFileAsyncSimple(const char *, void **, s32);

/* Create the camp talk process, draw passes, and asynchronous result/level-up scripts. */
void FUN_00319b10(void)
{
    CampTalkWork *work = (CampTalkWork *)asdOperatorNew(sizeof(CampTalkWork));
    g_callbackWork = work;
    work->job = asdProcessCreateSimple("CAMPTALK PROC", 4, 0, 0, callbackWorkForward, NULL, NULL);
    taskCreateDraw("CAMPTALK UL", 0x81, 0, 0, FUN_0032fab8, 0, NULL, work->job);
    taskCreateDraw("CAMPTALK UR", 0xDD, 0, 0, FUN_0032fab8, 0, NULL, work->job);
    taskCreateDraw("CAMPTALK DD", 0xEB, 0, 0, FUN_0032fab0, 0, NULL, work->job);
    work->firstSelection = -1;
    work->secondSelection = -1;
    loadSlotRequestAsync(0x14, 0);
    loadSlotRequestAsync(0x25, 0);
    loadSlotRequestAsync(0x3E, 0);
    work->resultScript = NULL;
    work->resultMessages = NULL;
    work->levelUpScript = NULL;
    work->levelUpProcess = 0;
    work->scriptProcess = 0;
    asdLoadFileAsyncSimple(DAT_0052c7ac, &work->resultScript, 0);
    asdLoadFileAsyncSimple(DAT_0052c794, &work->resultMessages, 0);
    asdLoadFileAsyncSimple(DAT_0052c780, &work->levelUpScript, 0);
    work->state = 0;
    work->enabled = 1;
}
}
