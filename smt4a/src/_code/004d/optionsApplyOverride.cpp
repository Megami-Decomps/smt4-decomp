#include "shard/Shard004D.h"

struct DemonRecord;

extern "C" {

extern OptionsBlock4D *gameGetOptions(void);
extern void FUN_002305d0(DemonRecord *record, u32 slot, u32 id, s32 kind);

void optionsApplyOverride(u32 value)
{
    OptionsBlock4D *options = gameGetOptions();

    if ((options->flags & 1) != 0) {
        FUN_002305d0(reinterpret_cast<DemonRecord *>(options), 0xFFFFFFFF, value, 3);
        options->unk12C = 0;
    }
}

} /* extern "C" */
