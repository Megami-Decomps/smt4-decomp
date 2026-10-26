#pragma once
#include "common.h"

/* Functions in the 0x00140000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct WaveArchiveView;
extern "C" {

bool asdWaveArchiveHasExpectedBlock(const WaveArchiveView *archive);

void effectSubmitPackageRequest(u32 package, u32 name, u32 first, u32 second, u32 param);

} /* extern "C" */
