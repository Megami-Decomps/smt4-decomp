#include "camp/CecMenu.h"
#include "camp/CampCec/CampCecSetting.h"
#include "code/Code0025_Smt4.h"

extern "C" {
void campCecSettingOpen(void);
void campCecSettingDestroy(void);
void buttonHelpSetPreset(s32 preset);
void FUN_0026b9bc(void);
void FUN_0028a924(s32 enabled, s32 mode, u32 mask);
void FUN_0028a368(s32 enabled);

// Restore the network menu after its communication settings dialog closes.
u32 FUN_002114fc(CampCecMenu *menu)
{
    u32 result = 0;
    if (!campCecSettingExists()) {
        campCecSettingOpen();
    } else if (campCecSettingIsDone()) {
        campCecSettingDestroy();
        buttonHelpSetPreset(3);
        menu->state = 6;
        menu->substate = 0;
        FUN_0026b9bc();
        FUN_0028a924(1, 0, ~0u);
        FUN_0028a368(1);
        menu->optionalProcessAvailable = cecQueryOptionalProcess();
        result = 2;
    }
    return result;
}
}
