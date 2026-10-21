/* NON_MATCHING: compiler changes literal-pool order and schedules the error-code write before the line write. */
#include "common.h"
extern "C" {
extern const char DAT_0053a604[];
struct Result { u32 code; const char *file; u32 line; };
/* Initializes the default online-core error result. */
void FUN_002e9ff4(Result *result) {
    result->file = DAT_0053a604;
    result->line = 104;
    result->code = 0x80010001;
}
}
