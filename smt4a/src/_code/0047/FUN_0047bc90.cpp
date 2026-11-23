#include "classes/AocMenu.h"

/* Copies the new request, moves the menu to step 19 and drops the old window. */
extern "C" void FUN_0047bc90(AocMenu *menu, const RequestParameters *request)
{
    menu->secondRequest = *request;
    aocMenuChangeStep(menu, 0x13);
}
