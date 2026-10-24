/* Destroys every model manager held by the six model banks (each bank's models first, then the bank's own manager). */
#include "common.h"

extern "C" {
struct ModelManager;

struct ModelBankSet {
    /* 0x000 */ u8 unk000[0x26C];
    /* 0x26C */ ModelManager *bankManagers[6];
    /* 0x284 */ ModelManager *models[6][64];
};

extern ModelBankSet DAT_004bce8c;
void asdMdlManagerDestroy(ModelManager *manager);

void asdMdlBanksDestroyAll(void)
{
    for (s32 bank = 0; bank < 6; bank++) {
        for (s32 i = 1; i < 64; i++) {
            if (DAT_004bce8c.models[bank][i] != NULL) {
                asdMdlManagerDestroy(DAT_004bce8c.models[bank][i]);
                DAT_004bce8c.models[bank][i] = NULL;
            }
        }
        if (DAT_004bce8c.bankManagers[bank] != NULL) {
            asdMdlManagerDestroy(DAT_004bce8c.bankManagers[bank]);
            DAT_004bce8c.bankManagers[bank] = NULL;
            DAT_004bce8c.models[bank][0] = NULL;
        }
    }
}
}
