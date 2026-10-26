#include "common.h"
extern "C" {
u32 serviceQuerySignedByteChecked(u32 value);
/* Toggles the implementation's boolean result. */
u32 FUN_00351b28(u32 value) { return serviceQuerySignedByteChecked(value) ^ 1; }
}
