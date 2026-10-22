#include "title/titleConfig.h"

// These persisted settings lie beyond the shared save-data prefix.
struct SavedTitleConfig {
    u8 unk00000[0x24b7c];
    u8 music, sound, voice, auxiliary, initialized;
};
extern "C" {
extern TitleConfigValues g_titleConfigValues;
SavedTitleConfig *gameDataBlocksGetSaveData();

// Push edited settings into save data, otherwise load saved values or initialize defaults.
void titleSynchronizeSavedConfig()
{
    SavedTitleConfig *save = gameDataBlocksGetSaveData();
    if (save) {
        if (g_titleConfigValues.changed) {
            save->music = g_titleConfigValues.music;
            save->sound = g_titleConfigValues.sound;
            save->voice = g_titleConfigValues.voice;
            save->auxiliary = g_titleConfigValues.auxiliary;
            save->initialized = 1;
            g_titleConfigValues.changed = 0;
        } else if (save->initialized) {
            g_titleConfigValues.music = save->music;
            g_titleConfigValues.sound = save->sound;
            g_titleConfigValues.voice = save->voice;
            g_titleConfigValues.auxiliary = save->auxiliary;
        } else {
            save->music = g_titleConfigValues.music;
            save->sound = g_titleConfigValues.sound;
            save->voice = g_titleConfigValues.voice;
            save->auxiliary = g_titleConfigValues.auxiliary;
            save->initialized = 1;
        }
    }
}
}
