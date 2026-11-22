#pragma once
#include "common.h"

struct TexFile;

extern "C" {

/* Loads table entry `idx`'s sprite file (after its TMX file); returns the TMX file, NULL when it is missing. */
struct TexFile *asdTMTexTableLoadSprites(s32 idx);

} /* extern "C" */
