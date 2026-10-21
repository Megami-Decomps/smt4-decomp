#include "common.h"
extern "C" {
u32 FUN_0043a794(u32 value);
/* Toggles the implementation's boolean result. */
u32 FUN_00426124(u32 value) { return FUN_0043a794(value) ^ 1; }
}
