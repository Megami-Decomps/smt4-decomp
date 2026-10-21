/* NON_MATCHING: retail emits 'ldr r1, [pc, #40]'; compiler emits 'ldr r1, [pc, #36]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Effect {
    u8 pad[8];
    u32 state;
    u32 progress;
    u32 value;
    f32 scale;
    u8 gap[4];
    u32 request;
};
extern struct {
    u32 reserved;
    Effect *first,*second;
}
g_eventEffect;
void FUN_0031caec(u32 request) {
    Effect *effect=g_eventEffect.first;
    if(effect) {
        effect->request=request;
        effect->progress=0;
        effect->state=4;
        effect->scale=1.0f;
    }
}
}
