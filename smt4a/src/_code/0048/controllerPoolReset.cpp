#include "shard/W6_W6Match2_WordBank.h"

// Clear the tracked words and status without changing the two reserved header words.
extern "C" void controllerPoolReset(WordBank* bank)
{
    bank->state = 0;
    bank->unk0c = 0;
    bank->unk10 = 0;
    bank->unk14 = 0;
    bank->flags = 0;
    for (s32 index = 0; index < 32; ++index) {
        bank->words[index] = NULL;
    }
    bank->unk98 = 0;
    bank->unk9c = 0;
}
