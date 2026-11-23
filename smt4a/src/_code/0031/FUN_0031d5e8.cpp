/* NON_MATCHING: retail moves the owner to r1 and loads the g_messageMain base before setting up the stacked arguments; the build sets the stack arguments first and reads the window through r2/ip. */
#include "ui/MessageMainA.h"
extern "C" {
u32 scrGetCommandOwner();
void FUN_00203da4(void *,u32,u32,u32,u32,u32,u32);
void FUN_0031d5e8(u32 value) {
    u32 current=scrGetCommandOwner();
    FUN_00203da4(g_messageMain.window,current,value,6,0x1A,1,0);
}
}
