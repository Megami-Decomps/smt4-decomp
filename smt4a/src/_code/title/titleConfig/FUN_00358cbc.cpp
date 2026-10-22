/* NON_MATCHING: compiler hoists configuration pointers instead of retail's offset-literal accesses. */
#include "shard/Shard0031.h"

struct TitleConfigState {
    u8 options[4];
    u8 dirty;
};

extern "C" {
extern TitleConfigState DAT_00588fc0;
GameDataBlock *gameDataBlocksGetSaveData(void);

// Exchange the four title options with saved data, preferring unsaved local changes.
void FUN_00358cbc(void)
{
    GameDataBlock *save = gameDataBlocksGetSaveData();
    if (save == NULL)
        return;
    u8 *options = reinterpret_cast<u8 *>(&save->unk27E90);
    if (DAT_00588fc0.dirty != 0) {
        options[0] = DAT_00588fc0.options[0];
        options[1] = DAT_00588fc0.options[1];
        options[2] = DAT_00588fc0.options[2];
        options[3] = DAT_00588fc0.options[3];
        save->unk27E94[0] = 1;
        DAT_00588fc0.dirty = 0;
    } else if (save->unk27E94[0] != 0) {
        DAT_00588fc0.options[0] = options[0];
        DAT_00588fc0.options[1] = options[1];
        DAT_00588fc0.options[2] = options[2];
        DAT_00588fc0.options[3] = options[3];
    } else {
        options[0] = DAT_00588fc0.options[0];
        options[1] = DAT_00588fc0.options[1];
        options[2] = DAT_00588fc0.options[2];
        options[3] = DAT_00588fc0.options[3];
        save->unk27E94[0] = 1;
    }
}
}
