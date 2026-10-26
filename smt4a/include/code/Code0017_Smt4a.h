#pragma once
#include "common.h"

/* Functions in the 0x00170000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct LightRenderOwner;
struct LightRenderParameters;
extern "C" {

void gfxFlushLightRenderCommands(LightRenderOwner* owner, LightRenderParameters* argument);

} /* extern "C" */
