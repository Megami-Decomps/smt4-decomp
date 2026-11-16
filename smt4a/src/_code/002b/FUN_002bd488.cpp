#include "common.h"

extern "C" {
void efctSetSpeed(f32); void gxResetColorQuadToWhite();
s32 FUN_002bd488() { efctSetSpeed(1.0f); gxResetColorQuadToWhite(); efctSetSpeed(1.0f); gxResetColorQuadToWhite(); return 0; }
}
