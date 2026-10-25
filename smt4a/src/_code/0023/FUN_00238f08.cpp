/* NON_MATCHING: owner and kind swap saved registers and prologue moves; context, template-data and output-slot pointer contracts are recovered. */
#include "common.h"

extern "C" {

typedef struct TaskWork TaskWork;

/* Work block of the task FUN_00238f08 starts (0x304 bytes). */
typedef struct LayoutTaskWork {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ f32 unk00C[3];
    /* 0x018 */ f32 unk018[3];
    /* 0x024 */ u8 unk024[4];
    /* 0x028 */ f32 unk028[2];
    /* 0x030 */ f32 unk030[2];
    /* 0x038 */ u8 params[0x134];
    /* 0x16C */ u8 layout[0xB0];
    /* 0x21C */ void *context;
    /* 0x220 */ const void *templateData;
    /* 0x224 */ u32 owner;
    /* 0x228 */ u32 *ownerSlot;
    /* 0x22C */ u8 kind;
    /* 0x22D */ u8 unk22D[3];
    /* 0x230 */ s32 unk230;
    /* 0x234 */ s32 unk234;
    /* 0x238 */ u8 unk238[0xC8];
    /* 0x300 */ u16 frame;
    /* 0x302 */ u16 startFrame;
} LayoutTaskWork;

void FUN_00213330(void *work);
LayoutTaskWork *taskCreate(void (*update)(void *), u32 a, u32 b, u32 c, u32 d, u32 size, u32 list, u32 e, u32 f);
void sysMemClear(void *memory, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_0034a16c(void *layout, f32 *a, f32 *b, f32 *c, f32 *d);

/* Starts the layout task with copies of its parameter and layout blocks. */
LayoutTaskWork *FUN_00238f08(u32 owner, const void *params, const void *layout, void *context, u32 *ownerSlot,
                            u8 kind, u16 frame, const void *templateData)
{
    LayoutTaskWork *work = taskCreate(FUN_00213330, 0, 0, 0, 0, sizeof(LayoutTaskWork), 3, 0, 0);
    if (work != NULL) {
        sysMemClear(work, sizeof(LayoutTaskWork));
        __aeabi_memcpy4(work->params, params, sizeof(work->params));
        __aeabi_memcpy4(work->layout, layout, sizeof(work->layout));
        work->context = context;
        work->templateData = templateData;
        work->owner = owner;
        work->kind = kind;
        work->unk234 = -1;
        work->unk230 = -1;
        FUN_0034a16c(work->layout, work->unk028, work->unk030, work->unk00C, work->unk018);
        work->ownerSlot = ownerSlot;
        work->startFrame = frame;
        work->frame = frame;
    }
    return work;
}

} /* extern "C" */
