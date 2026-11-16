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
extern TitleConfigState DAT_00588fc0;

// Exchange the four title options with saved data, preferring unsaved local changes.
void FUN_00358cbc(void)
{
    SavedTitleConfigA *save = reinterpret_cast<SavedTitleConfigA *>(gameDataBlocksGetSaveData());
    if (save) {
        if (DAT_00588fc0.dirty) {
            save->options[0] = DAT_00588fc0.options[0];
            save->options[1] = DAT_00588fc0.options[1];
            save->options[2] = DAT_00588fc0.options[2];
            save->options[3] = DAT_00588fc0.options[3];
            save->initialized = 1;
            DAT_00588fc0.dirty = 0;
        } else if (save->initialized) {
            DAT_00588fc0.options[0] = save->options[0];
            DAT_00588fc0.options[1] = save->options[1];
            DAT_00588fc0.options[2] = save->options[2];
            DAT_00588fc0.options[3] = save->options[3];
        } else {
            save->options[0] = DAT_00588fc0.options[0];
            save->options[1] = DAT_00588fc0.options[1];
            save->options[2] = DAT_00588fc0.options[2];
            save->options[3] = DAT_00588fc0.options[3];
            save->initialized = 1;
        }
    }
}
}
