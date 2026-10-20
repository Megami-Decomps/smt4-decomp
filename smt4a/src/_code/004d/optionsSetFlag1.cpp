#include "shard/Shard004D.h"

extern "C" {

extern OptionsBlock4D *gameGetOptions(void);

void optionsSetFlag1(void)
{
    OptionsBlock4D *options = gameGetOptions();

    options->flags = options->flags | 1;
    options->unk62 = 0;
    options->unk12C = 0;
}

} /* extern "C" */
