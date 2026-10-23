#include "shard/W5_W5Match6_CallbackController.h"

namespace {
// The canonical controller work stops before the how-to screen's trailing fields.
struct HowToWorkView {
    u32 process; // 0x000
    u8 unk004[0x468];
    u32 savedButtonHelp; // 0x46C
    s32 mode; // 0x470
    u8 alternate; // 0x474
    u8 unk475[3];
};
typedef char HowToWorkViewLayoutCheck[
    sizeof(HowToWorkView) == 0x478 && offsetof(HowToWorkView, savedButtonHelp) == 0x46C &&
    offsetof(HowToWorkView, mode) == 0x470 && offsetof(HowToWorkView, alternate) == 0x474 ? 1 : -1];
}

extern "C" {
extern const char DAT_0052cf40[];
extern const char DAT_0052cf34[];
extern const char DAT_0052cf28[];
extern const char DAT_0052cf1c[];
void *asdOperatorNew(u32 size);
s32 FUN_002840fc(void *work);
void FUN_002c2bac(void *work);
void FUN_002c2b88(void *work);
u32 asdProcessCreateSimple(const char *name, s32 group, s32 priority, u32 size,
                           s32 (*update)(void *), void *work, void (*destroy)(void *));
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 size,
                   void (*draw)(void *), void *work, void (*destroy)(void *), u32 process);
void FUN_0049d3f0(HowToWorkView *work);
u32 ifTouchGetButtonHelpValue(void);
s32 campIsState85(void);
void FUN_0049d140(HowToWorkView *work, s32 state, s32 parameter);

// Create the how-to update process and the three screen-specific draw tasks.
void FUN_00348d7c(s32 mode)
{
    HowToWorkView *work = static_cast<HowToWorkView *>(asdOperatorNew(sizeof(HowToWorkView)));
    g_callbackController.work = work;
    work->process = asdProcessCreateSimple(DAT_0052cf40, 4, 0, 0, FUN_002840fc, NULL, NULL);
    taskCreateDraw(DAT_0052cf34, 0x81, 0, 0, FUN_002c2bac, NULL, NULL, work->process);
    taskCreateDraw(DAT_0052cf28, 0xDD, 0, 0, FUN_002c2bac, NULL, NULL, work->process);
    taskCreateDraw(DAT_0052cf1c, 0xEB, 0, 0, FUN_002c2b88, NULL, NULL, work->process);
    FUN_0049d3f0(work);
    work->savedButtonHelp = ifTouchGetButtonHelpValue();
    work->mode = mode;
    work->alternate = campIsState85() != 0 || mode == 3;
    FUN_0049d140(work, 7, 0);
}
}
