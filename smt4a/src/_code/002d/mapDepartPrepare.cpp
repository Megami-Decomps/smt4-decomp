/* NON_MATCHING: retail emits 'str r1, [r0, #40]'; compiler emits 'str r1, [r0, #48]' at the first differing instruction. */
#include "common.h"
extern "C" {
extern struct {
    u8 pad[0x2C4];
    u32 mode;
}
g_gameState;
extern struct {
    u8 pad[0x18];
    s16 state;
    u8 gap[10];
    u32 first,second,third,fourth;
} *g_mapDepartWork;
void mapDepartPrepare() {
    if(g_gameState.mode==1) {
        g_mapDepartWork->state=1;
        g_mapDepartWork->first=g_mapDepartWork->second=g_mapDepartWork->third=g_mapDepartWork->fourth=0;
    } else g_mapDepartWork->state=0;
}
}
