#include "common.h"

extern "C" {
void efctSetSpeed(f32); void FUN_00183bb0();
s32 FUN_002bd488() { efctSetSpeed(1.0f); FUN_00183bb0(); efctSetSpeed(1.0f); FUN_00183bb0(); return 0; }
}
