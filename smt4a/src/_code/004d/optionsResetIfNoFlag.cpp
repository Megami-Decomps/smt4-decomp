#include "shard/Shard004D.h"

extern "C" {

extern OptionsBlock4D *gameGetOptions(void);
extern void sysMemClear(OptionsBlock4D *ptr, u32 size);

void optionsResetIfNoFlag(void)
{
    OptionsBlock4D *options = gameGetOptions();

    if ((options->flags & 1) == 0) {
        if (options->unk62 == 0x4B1) {
            sysMemClear(options, 300);
        }
        options->unk132 = 0;
        options->unk134 = 0;
        options->unk136 = 0;
    }
}

} /* extern "C" */
