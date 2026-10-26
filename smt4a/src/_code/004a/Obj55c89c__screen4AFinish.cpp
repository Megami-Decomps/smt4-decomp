#include "shard/Shard004A.h"
#include "classes/Obj55c89c.h"

extern "C" {

extern s32 scrRunOpcodesStub(u32 job);
extern void messageMainSetTargetFlags(s32 a);
extern u16 buttonHelpGetValue(void);
extern void sysPlaySe(u32 id);

/* When the job at +0x85C reports 2: leaves the screen (state 2) and plays a sound. */
}

void Obj55c89c::screen4AFinish()
{
    Screen4A * obj = reinterpret_cast<Screen4A *>(this);
    if (scrRunOpcodesStub(obj->job) == 2) {
        messageMainSetTargetFlags(0);
        FUN_003343f0(0);
        obj->unk18 = 0;
        obj->state = 2;
        obj->unkA870 = 0;
        sysPlaySe(buttonHelpGetValue());
    }
}
