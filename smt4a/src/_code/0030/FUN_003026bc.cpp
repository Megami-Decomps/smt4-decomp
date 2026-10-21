/* NON_MATCHING: compiler reverses temporary slot placement and uses sub/add sp instead of saved registers. */
#include "common.h"
extern "C" {
void streamReaderReadU64(void *reader, u64 *value);
void FUN_002f6ed2(void *output, const u64 *value);
/* Reads a 64-bit value and forwards it to the output adapter. */
void FUN_003026bc(void *reader, void *output) {
    u64 value;
    streamReaderReadU64(reader, &value);
    u64 converted = value;
    FUN_002f6ed2(output, &converted);
}
}
