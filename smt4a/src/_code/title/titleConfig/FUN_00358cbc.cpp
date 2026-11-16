#include "gamedata/GameDataAccess.h"

struct TitleConfigState {
    u8 options[4];
    u8 dirty;
};

// These persisted settings lie beyond the shared save-data prefix.
struct SavedTitleConfigA {
    u8 unk00000[0x27e90];
    u8 options[4];
    u8 initialized;
};

extern "C" {
extern TitleConfigState g_titleConfigValues;

// Exchange the four title options with saved data, preferring unsaved local changes.
void FUN_00358cbc(void)
{
    SavedTitleConfigA *save = reinterpret_cast<SavedTitleConfigA *>(gameDataBlocksGetSaveData());
    if (save) {
        if (g_titleConfigValues.dirty) {
            save->options[0] = g_titleConfigValues.options[0];
            save->options[1] = g_titleConfigValues.options[1];
            save->options[2] = g_titleConfigValues.options[2];
            save->options[3] = g_titleConfigValues.options[3];
            save->initialized = 1;
            g_titleConfigValues.dirty = 0;
        } else if (save->initialized) {
            g_titleConfigValues.options[0] = save->options[0];
            g_titleConfigValues.options[1] = save->options[1];
            g_titleConfigValues.options[2] = save->options[2];
            g_titleConfigValues.options[3] = save->options[3];
        } else {
            save->options[0] = g_titleConfigValues.options[0];
            save->options[1] = g_titleConfigValues.options[1];
            save->options[2] = g_titleConfigValues.options[2];
            save->options[3] = g_titleConfigValues.options[3];
            save->initialized = 1;
        }
    }
}
}
