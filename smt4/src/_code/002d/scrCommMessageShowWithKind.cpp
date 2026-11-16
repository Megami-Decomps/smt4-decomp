/* Script body: shows a message for the script argument and scrGetCommandFrame's result, with the message kind the stub in front derives from the active quest entry (passed in r0). */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 scrGetCommandOwner(void);
u32 scrGetCommandFrame(void);
void messageWindowShowOrPoll(u32 unit, u32 arg, u32 value, u32 kind, s32 a, s32 b);

void scrCommMessageShowWithKind(u32 kind)
{
    u32 unit = scrGetCommandOwner();
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    messageWindowShowOrPoll(unit, arg, value, kind, 0, 0);
}

}
