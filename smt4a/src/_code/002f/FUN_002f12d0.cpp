/* NON_MATCHING: compiler uses a conditional literal selection with different store and pool ordering. */
#include "common.h"
extern "C" {
extern const char DAT_0053a604[];
struct Result { u32 code; const char *file; u32 line; };
/* Initializes an online result from the success flag. */
void FUN_002f12d0(Result *result, const u8 *success) {
    result->code = *success != 0 ? 0x00010001 : 0x80010001;
    result->line = 125;
    result->file = DAT_0053a604;
}
}
