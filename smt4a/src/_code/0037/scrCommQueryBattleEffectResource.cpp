#include "common.h"
#include <stdio.h>

extern "C" {

u32 scrGetArg(u32 index);
int scrSetResult(u32 value);
s32 eventIsSkipping(void);
u32 keyedRecordLoadVerFile(const char *path);

/* Script command: sets the result to keyedRecordLoadVerFile of the battle effect file
 * battle/effect/EV_<argument 0>.eft, or to 0 while an event is being skipped. */
u32 scrCommQueryBattleEffectResource(void)
{
    char path[68];
    u32 id = scrGetArg(0);
    u32 result = 0;

    if (eventIsSkipping() == 0) {
        sprintf(path, "battle/effect/EV_%03d.eft", id);
        result = keyedRecordLoadVerFile(path);
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
