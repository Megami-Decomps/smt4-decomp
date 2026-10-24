/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the CEC settings screen: allocates its work area, creates its task and draw tasks and
 * sets up the menu entries. */
#include "common.h"
#include "camp/CampCec/CampCecSetting.h"

extern "C" {

typedef void (*VoidFunc)(void);

int asdLoadFileAsyncSimple(VoidFunc fn, void **out, int arg);
int sysPlaySe(int id);
int sysMemClear(void *ptr, int size);                  /* zero a block */
void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
u32 asdProcessCreateSimple(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6);
void LAB_002c0480(void);
void LAB_002c049c(void);
void LAB_0037c598(void);
void LAB_0037c5b0(void);
void LAB_0037c5cc(void);
void LAB_0037c5e8(void);
void LAB_0037c600(void);

extern CampCecSetting *g_campCecSetting;

void campCecSettingOpen(void)
{
    CampCecSetting *setting;

    if (g_campCecSetting == NULL) {
        g_campCecSetting = (CampCecSetting *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x44, 1);
    }
    setting = g_campCecSetting;
    sysMemClear(setting, 0x44);
    setting->task = asdProcessCreateSimple(LAB_0037c598, 3, 0, 0, LAB_002c049c, 0, 0);
    taskCreateDraw(LAB_0037c5b0, 0x86, 0, 0, LAB_002c0480, 0, 0, setting->task);
    taskCreateDraw(LAB_0037c5cc, 0xe2, 0, 0, LAB_002c0480, 0, 0, setting->task);
    asdLoadFileAsyncSimple(LAB_0037c5e8, &setting->heapA, 0);
    asdLoadFileAsyncSimple(LAB_0037c600, &setting->heapB, 0);
    setting->stage = 0;
    setting->flags = 2;
    setting->items[2] = 2;
    setting->items[3] = 3;
    setting->items[4] = 4;
    setting->items[5] = 5;
    setting->items[6] = 6;
    setting->items[0] = 0;
    setting->items[1] = 1;
    setting->unk2C = 10;
    setting->unk30 = 7;
    setting->unk34 = 0xb;
    sysPlaySe(0xe4);
}

} /* extern "C" */
