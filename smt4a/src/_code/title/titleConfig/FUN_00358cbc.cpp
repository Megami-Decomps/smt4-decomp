/* NON_MATCHING: the save bytes are now indexed with literal offsets as in retail (one pool constant plus derived offsets); only register numbering and the else-arm scheduling differ. */
#include "shard/Shard0031.h"
#include "gamedata/GameDataAccess.h"

struct TitleConfigState {
    u8 options[4];
    u8 dirty;
};

extern "C" {
extern TitleConfigState DAT_00588fc0;

// Exchange the four title options with saved data, preferring unsaved local changes.
void FUN_00358cbc(void)
{
    GameDataBlock *save = reinterpret_cast<GameDataBlock *>(gameDataBlocksGetSaveData());
    if (save == NULL)
        return;
    // The option bytes at 0x27E90..0x27E93 and their flag at 0x27E94 lie in the save block's unnamed tail.
    u8 *bytes = reinterpret_cast<u8 *>(save);
    if (DAT_00588fc0.dirty != 0) {
        bytes[0x27E90] = DAT_00588fc0.options[0];
        bytes[0x27E91] = DAT_00588fc0.options[1];
        bytes[0x27E92] = DAT_00588fc0.options[2];
        bytes[0x27E93] = DAT_00588fc0.options[3];
        bytes[0x27E94] = 1;
        DAT_00588fc0.dirty = 0;
    } else if (bytes[0x27E94] != 0) {
        DAT_00588fc0.options[0] = bytes[0x27E90];
        DAT_00588fc0.options[1] = bytes[0x27E91];
        DAT_00588fc0.options[2] = bytes[0x27E92];
        DAT_00588fc0.options[3] = bytes[0x27E93];
    } else {
        bytes[0x27E90] = DAT_00588fc0.options[0];
        bytes[0x27E91] = DAT_00588fc0.options[1];
        bytes[0x27E92] = DAT_00588fc0.options[2];
        bytes[0x27E93] = DAT_00588fc0.options[3];
        bytes[0x27E94] = 1;
    }
}
}
