/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void buttonHelpSetEnabled(u32 a);
void messageMainSetEnabled(u32 a);
void gameDataRemoveHomeButtonHold(u32 a);
void gameDataFlagsClearAndRefresh(u32 a);

void FUN_002c5700(void)
{
    buttonHelpSetEnabled(0);
    messageMainSetEnabled(1);
    gameDataRemoveHomeButtonHold(4);
    gameDataFlagsClearAndRefresh(4);
}

}
