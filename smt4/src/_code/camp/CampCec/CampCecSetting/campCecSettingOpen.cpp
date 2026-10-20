/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the CEC settings screen: allocates its work area, creates its task and draw tasks and
 * sets up the menu entries. */
#include "common.h"
#include "camp/CampCec/CampCecSetting.h"

extern "C" {

typedef void (*VoidFunc)(void);

int FUN_00297468(VoidFunc fn, void **out, int arg);
int buttonHelpSetPreset(int id);
int memClear(void *ptr, int size);                  /* zero a block */
void *asdMemAlloc(int heap, int align, int arg2, int size, int arg4);
u32 taskCreateDraw(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
u32 asdProcessCreateSimple(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6);
void LAB_002000ac(void);
void LAB_002000c8(void);
void LAB_002f5d84(void);
void LAB_002f5d9c(void);
void LAB_002f5db8(void);
void LAB_002f5dd4(void);
void LAB_002f5dec(void);

extern CampCecSetting *g_campCecSetting;

void campCecSettingOpen(void)
{
    CampCecSetting *setting;

    if (g_campCecSetting == NULL) {
        g_campCecSetting = (CampCecSetting *)asdMemAlloc(0x100, 0x100, 0, 0x44, 1);
    }
    setting = g_campCecSetting;
    memClear(setting, 0x44);
    setting->task = asdProcessCreateSimple(LAB_002f5d84, 1, 0, 0, LAB_002000c8, 0, 0);
    taskCreateDraw(LAB_002f5d9c, 0x81, 0, 0, LAB_002000ac, 0, 0, setting->task);
    taskCreateDraw(LAB_002f5db8, 0xdf, 0, 0, LAB_002000ac, 0, 0, setting->task);
    FUN_00297468(LAB_002f5dd4, &setting->heapA, 0);
    FUN_00297468(LAB_002f5dec, &setting->heapB, 0);
    setting->unk38 = 0;
    setting->unk3C = 2;
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
    buttonHelpSetPreset(0xe2);
}

} /* extern "C" */
