#include "ui/MessageMain.h"

extern "C" {

u32 messageMainGetChoiceResult(void)
{
    return g_messageMain.banner->choiceResult;
}

} /* extern "C" */
