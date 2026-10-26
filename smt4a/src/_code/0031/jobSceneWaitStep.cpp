#include "shard/Shard0031.h"

extern "C" {

extern s32 scrRunOpcodesStub(u32 job);
extern u8 *dataTable15Sub0FindEntry(u32 index);
extern void buttonHelpSetText(u8 *obj, u32 color);
extern void sysPlaySe(u32 id);
extern void campResetScreen(void);

/* Waits for the job to finish; then flags the scene, plays a sound and moves to state 3. */
u32 jobSceneWaitStep(JobScene *scene)
{
    u32 next = 0;

    if (scrRunOpcodesStub(scene->job) == 2) {
        scene->unk144 = 1;
        u8 *obj = dataTable15Sub0FindEntry(0x34);
        buttonHelpSetText(obj, 0xF4F4F4FF);
        sysPlaySe(0x10D);
        campResetScreen();
        next = 3;
    }
    return next;
}

} /* extern "C" */
