#include "common.h"
extern "C" {
struct Effect {
    u8 pad[8];
    u32 state;
    u32 progress;
    f32 scale;
    u8 request;
};
extern struct {
    u32 reserved;
    void *first;
    Effect *second;
}
g_eventEffect;
void eventEffectStartSecondary() {
    Effect *effect=g_eventEffect.second;
    if(effect) {
        effect->progress=0;
        effect->state=4;
        effect->scale=0.5f;
        effect->request=0;
    }
}
}
