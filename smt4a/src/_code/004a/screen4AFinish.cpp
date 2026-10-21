#include "shard/Shard004A.h"

extern "C" {

extern s32 FUN_00224880(u32 job);
extern void FUN_003c5fc4(s32 a);
extern void FUN_003343f0(s32 a);
extern u16 buttonHelpGetValue(void);
extern void sysPlaySe(u32 id);

/* When the job at +0x85C reports 2: leaves the screen (state 2) and plays a sound. */
void screen4AFinish(Screen4A *obj)
{
    if (FUN_00224880(obj->job) == 2) {
        FUN_003c5fc4(0);
        FUN_003343f0(0);
        obj->unk18 = 0;
        obj->state = 2;
        obj->unkA870 = 0;
        sysPlaySe(buttonHelpGetValue());
    }
}

} /* extern "C" */
