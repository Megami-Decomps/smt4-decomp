#include "classes/Obj532300.h"

void Obj532300::resetHandlers()
{
    for (s32 i = 0; i < 17; ++i) {
        handlers[i] = NULL;
    }
    handlers[0] = &Obj532300::FUN_0048e408;
    handlers[1] = &Obj532300::uiAdvanceConditionalScreenSprite;
    handlers[2] = &Obj532300::FUN_00487124;
    handlers[4] = &Obj532300::FUN_0048bd2c;
    handlers[5] = &Obj532300::FUN_0048b8a4;
    handlers[6] = &Obj532300::FUN_0048ce38;
    handlers[8] = &Obj532300::FUN_0048d1c8;
    handlers[9] = &Obj532300::FUN_0048d358;
    handlers[10] = &Obj532300::FUN_0048d11c;
    handlers[11] = &Obj532300::FUN_0048a4c0;
    handlers[13] = &Obj532300::selectionNotificationAdvanceEntryAnimations;
    handlers[14] = &Obj532300::FUN_00490898;
    handlers[15] = &Obj532300::FUN_0048bad0;
    handlers[16] = &Obj532300::FUN_0048c1c0;
}
