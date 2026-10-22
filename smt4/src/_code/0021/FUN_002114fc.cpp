/* NON_MATCHING: state stores are reordered and the dialog-open path duplicates the shared return epilogue. */
#include "camp/CecMenu.h"

extern "C" {
s32 campCecSettingExists(void);
s32 campCecSettingIsDone(void);
void campCecSettingOpen(void);
void campCecSettingDestroy(void);
void buttonHelpSetPreset(s32 preset);
void FUN_0026b9bc(void);
void FUN_0028a924(s32 enabled, s32 mode, u32 mask);
void FUN_0028a368(s32 enabled);
u8 cecQueryOptionalProcess(void);

// Restore the network menu after its communication settings dialog closes.
u32 FUN_002114fc(CampCecMenu *menu)
{
    u32 result = 0;
    if (campCecSettingExists()) {
        if (campCecSettingIsDone()) {
            campCecSettingDestroy();
            buttonHelpSetPreset(3);
            menu->substate = 0;
            menu->state = 6;
            FUN_0026b9bc();
            FUN_0028a924(1, 0, ~0u);
            FUN_0028a368(1);
            menu->optionalProcessAvailable = cecQueryOptionalProcess();
            result = 2;
        }
        return result;
    }
    campCecSettingOpen();
    return result;
}
}
