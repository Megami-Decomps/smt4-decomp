#include "shard/Shard004D.h"

extern "C" {

extern OptionsBlock4D *gameGetOptions(void);

void optionsResetIfFlagSet(void)
{
    OptionsBlock4D *options = gameGetOptions();

    if ((options->flags & 1) != 0) {
        options->unk62 = 0;
    }
}

} /* extern "C" */
