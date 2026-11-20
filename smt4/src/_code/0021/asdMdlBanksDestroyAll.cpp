/* Destroys every model manager held by the six model banks (each bank's models first, then the bank's own manager). */
#include "common.h"

extern "C" {
struct ModelManager;

struct ModelBankSet {
    /* 0x000 */ u8 unk000[0x26C];
    /* 0x26C */ ModelManager *bankManagers[6];
    /* 0x284 */ ModelManager *models[6][64];
};

extern ModelBankSet g_asdMdlBankSet;
void asdMdlManagerDestroy(ModelManager *manager);

void asdMdlBanksDestroyAll(void)
{
    for (s32 bank = 0; bank < 6; bank++) {
        for (s32 i = 1; i < 64; i++) {
            if (g_asdMdlBankSet.models[bank][i] != NULL) {
                asdMdlManagerDestroy(g_asdMdlBankSet.models[bank][i]);
                g_asdMdlBankSet.models[bank][i] = NULL;
            }
        }
        if (g_asdMdlBankSet.bankManagers[bank] != NULL) {
            asdMdlManagerDestroy(g_asdMdlBankSet.bankManagers[bank]);
            g_asdMdlBankSet.bankManagers[bank] = NULL;
            g_asdMdlBankSet.models[bank][0] = NULL;
        }
    }
}
}
