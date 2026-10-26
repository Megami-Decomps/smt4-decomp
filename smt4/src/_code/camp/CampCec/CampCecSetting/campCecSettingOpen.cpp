/* NON_MATCHING: callbacks, task names, source path trace now match retail; a single register differs (retail adds the item-pair base into r1, the build into r0). */
/* Opens the CEC settings screen: allocates its work area, creates its task and draw tasks and
 * sets up the menu entries. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/CampCec/CampCecSetting.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

typedef void (*VoidFunc)(void);

int buttonHelpSetPreset(int id);
int memClear(void *ptr, int size);                  /* zero a block */
u32 taskCreateDraw(const char *name, int priority, int arg2, int arg3, VoidFunc cb, int arg5, int arg6, u32 parent);
void FUN_002000c8(void);
void campCecSettingQueryZero(void);

extern CampCecSetting *g_campCecSetting;

void campCecSettingOpen(void)
{
    CampCecSetting *setting;

    if (g_campCecSetting == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CampCec\\CampCecSetting.cpp", 97);
        g_campCecSetting = (CampCecSetting *)asdMemAlloc(0x100, 0x100, 0, 0x44, 1);
    }
    setting = g_campCecSetting;
    memClear(setting, 0x44);
    setting->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("CampCecSetting Calc"), 1, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_002000c8), 0, 0);
    taskCreateDraw("CampCecSetting DrawUpLeft", 0x81, 0, 0, campCecSettingQueryZero, 0, 0, setting->task);
    taskCreateDraw("CampCecSetting DrawUpRight", 0xdf, 0, 0, campCecSettingQueryZero, 0, 0, setting->task);
    asdLoadFileAsyncSimple("camp/CecSetting_scr.bf", reinterpret_cast<u32 *>(&setting->heapA), 0);
    asdLoadFileAsyncSimple("camp/CecSetting_msg.mbm", reinterpret_cast<u32 *>(&setting->heapB), 0);
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
    buttonHelpSetPreset(0xe2);
}

} /* extern "C" */
