#include "shard/Shard004D.h"

extern "C" {

extern OptionsBlock4D *gameGetOptions(void);
extern s32 FUN_002305d0(OptionsBlock4D *options, u32 a, u32 b, s32 c);

void optionsApplyOverride(u32 value)
{
    OptionsBlock4D *options = gameGetOptions();

    if ((options->flags & 1) != 0) {
        FUN_002305d0(options, 0xFFFFFFFF, value, 3);
        options->unk12C = 0;
    }
}

} /* extern "C" */
