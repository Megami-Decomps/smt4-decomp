#include "shard/Shard004D.h"

extern "C" {

extern OptionsBlock4D *gameGetOptions(void);

void optionsClearFlag1(void)
{
    OptionsBlock4D *options = gameGetOptions();
    OptionsBlock4D *again;

    if ((options->flags & 1) != 0) {
        again = gameGetOptions();
        if ((again->flags & 1) != 0) {
            again->unk62 = 0;
        }
    }
    options->flags = options->flags & 0xFFFE;
    options->unk62 = 0;
    options->unk12C = 0;
}

} /* extern "C" */
