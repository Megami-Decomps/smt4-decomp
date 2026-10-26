#pragma once
#include "common.h"

/* Functions in the 0x002d0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct ModelOwner;
extern "C" {

void animOwnerSetScale(ModelOwner *owner, f32 scale);

} /* extern "C" */
