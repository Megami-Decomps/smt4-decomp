#pragma once
#include "common.h"

/* CEC (StreetPass) service control. */
extern "C" {

u8 asdCecShutdown(void);

void cecSettingsSet(s32 mode, s32 level, s32 id, s32 extra);

} /* extern "C" */
