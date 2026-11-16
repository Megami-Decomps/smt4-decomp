#pragma once
#include "common.h"

extern "C" {

u8 charCodeIsPrivateUseGlyph(int code);

void refCountIncrement(int *counter);

} /* extern "C" */
