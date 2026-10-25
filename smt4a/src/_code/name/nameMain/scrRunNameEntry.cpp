#include "name/nameMain.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern NameGlobals g_name;
u32 scrGetArg(u32 index);
void scrCommMessageSetMode(s32 mode);
void saveDataClearValues(void);
void FUN_00275748(u32 *mode, u32 size);
void *jobFind(u32 job);
void asdMemFree(void *memory);
const u16 *gameDataGetPlayerName(void);
const u16 *gameBlockGetArea221AA(void);
void sysPlaySe(u32 sound);

// Start name entry once, wait for completion and return its chosen name to the script.
u32 scrRunNameEntry(void)
{
    u32 mode = scrGetArg(0);
    if (mode == 3) {
        g_name.status.restoreHelp = 1;
        mode = 2;
    }
    scrCommMessageSetMode(1);
    if (g_name.status.active == 0) {
        switch (mode) {
        case 0:
        case 1:
            break;
        case 2:
            saveDataClearValues();
            break;
        }
        FUN_00275748(&mode, 4);
        g_name.status.active = 1;
    }
    NameWork *work = g_name.work;
    if (work != NULL) {
        if (jobFind(work->task) != NULL || work->done == 0) {
            return 0;
        }
        if (g_name.work != NULL) {
            asdMemFree(g_name.work);
            g_name.work = NULL;
        }
    }
    switch (mode) {
    case 1:
        FUN_003180c4(0x33, reinterpret_cast<const char *>(gameDataGetPlayerName()));
        break;
    case 2:
        FUN_003180c4(0x33, reinterpret_cast<const char *>(gameBlockGetArea221AA()));
        break;
    }
    g_name.status.active = 0;
    scrCommMessageSetMode(-1);
    if (g_name.status.restoreHelp != 0) {
        g_name.status.restoreHelp = 0;
        sysPlaySe(0x92);
    }
    return 1;
}
}
