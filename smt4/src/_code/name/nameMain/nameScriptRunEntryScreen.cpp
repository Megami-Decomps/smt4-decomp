#include "name/nameMain.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrCommMessageSetMode(s32 mode);
void FUN_0033f7f4(void);
void nameMainCreateJobs(u32 *mode, u32 size);
void *jobFind(u32 task);
void asdMemFree(void *memory);
const char *gameDataGetPlayerName(void);
const char *gameDataGetSecondName(void);
void textEncodeFontSlot(s32 slot, const char *text);
void buttonHelpSetPreset(s32 preset);
extern NameGlobals g_name;

/* Runs the name-entry screen, waits for its job, and copies the result into the script text slot. */
s32 nameScriptRunEntryScreen(void)
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
            FUN_0033f7f4();
            break;
        }
        nameMainCreateJobs(&mode, sizeof(mode));
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
        textEncodeFontSlot(51, gameDataGetPlayerName());
        break;
    case 2:
        textEncodeFontSlot(51, gameDataGetSecondName());
        break;
    }
    g_name.status.active = 0;
    scrCommMessageSetMode(-1);
    if (g_name.status.restoreHelp != 0) {
        g_name.status.restoreHelp = 0;
        buttonHelpSetPreset(144);
    }
    return 1;
}
}
