#pragma once
#include "common.h"

/* UiControl (declarations migrated from callers). */
struct HelpOwner;
extern "C" {

u8 ifTouchGetSelectionMode(void);

void buttonHelpSelectByProgress(HelpOwner *owner);

} /* extern "C" */
