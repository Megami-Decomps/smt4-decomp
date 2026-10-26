/* Resets the six model banks: every bank manager and model manager slot becomes NULL (the models are destroyed elsewhere). */
#include "common.h"

struct ModelManager;

/* The six model banks: each bank's own manager followed by its 64 model managers. */
struct ModelBankSet {
    u8 unk000[0x26c];                    // 0x000
    ModelManager *bankManagers[6];       // 0x26c
    ModelManager *models[6][64];         // 0x284
};

extern "C" {
extern ModelBankSet DAT_004bce8c;

// Clears each bank's manager and its sixty-four model managers.
void asdMdlBanksReset()
{
    for (s32 bank = 0; bank < 6; ++bank) {
        DAT_004bce8c.bankManagers[bank] = NULL;
        for (s32 index = 0; index < 64; ++index) {
            DAT_004bce8c.models[bank][index] = NULL;
        }
    }
}
}
