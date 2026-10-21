#include "shard/Shard0031.h"

extern "C" {

extern s32 scrRunOpcodesStub(u32 job);
extern u8 *dataTable15Sub0FindEntry(u32 index);
extern void FUN_0019de98(u8 *obj, u32 color);
extern void sysPlaySe(u32 id);
extern void FUN_002277d8(void);

/* Waits for the job to finish; then flags the scene, plays a sound and moves to state 3. */
u32 jobSceneWaitStep(JobScene *scene)
{
    u32 next = 0;

    if (scrRunOpcodesStub(scene->job) == 2) {
        scene->unk144 = 1;
        u8 *obj = dataTable15Sub0FindEntry(0x34);
        FUN_0019de98(obj, 0xF4F4F4FF);
        sysPlaySe(0x10D);
        FUN_002277d8();
        next = 3;
    }
    return next;
}

} /* extern "C" */
