#pragma once
#include "common.h"
#include "map/MapVector.h"

/* Functions in the 0x002b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void buttonHelpSetPanelState(u8 value);
/* Spawns a kind-ten effect at `position` (taken by value: callers pass the vector, s0-s2). */
void effectSpawnKindTen(MapVector position);

} /* extern "C" */
