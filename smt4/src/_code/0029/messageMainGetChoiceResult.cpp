#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u32 messageMainGetChoiceResult(void)
{
    return g_messageMain.banner->choiceResult;
}

} /* extern "C" */
