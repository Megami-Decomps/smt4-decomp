#include "shard/Shard0036.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 scrGetCommandFrame(void);
extern u16 dataTable0aSub0GetValueById(u32 id);
extern void saveSlotFindById(u32 id);
extern void campArousalSkillStart(s32 id, u16 value);
extern u32 FUN_003c5fdc(void);

/* Script command: starts the action for the id in argument 0 on the first call, then waits on FUN_003c5fdc. */
u32 scrCommStartActionWait(void)
{
    u32 id;
    u16 value;

    if (scrGetCommandFrame() == 0) {
        id = scrGetArg(0);
        value = dataTable0aSub0GetValueById(id & 0xFFFF);
        if (value == 0) {
            return 1;
        }
        saveSlotFindById(id & 0xFFFF);
        campArousalSkillStart(id, value);
    }
    if (FUN_003c5fdc() != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
