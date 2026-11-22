#pragma once
#include "common.h"
#include "map/MapVector.h"

/* Functions in the 0x001f0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct SpritePool;
extern "C" {

void FUN_001f50ac(SpritePool *pool);
/* Spawns a kind-ten effect at `position` (taken by value: callers pass the vector, s0-s2). */
void effectSpawnKindTen(MapVector position);

} /* extern "C" */
