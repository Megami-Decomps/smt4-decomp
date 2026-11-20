/* NON_MATCHING: retail selects the code into r2 and loads the file pointer into r1 before storing the code; the build
 * selects into r1 and loads the file pointer after the code store. */
#include "common.h"
extern "C" {
extern const char DAT_0053a604[];
struct Result { u32 code; const char *file; u32 line; };
/* Initializes an online result from the success flag. */
void FUN_002f12d0(Result *result, const u8 *success) {
    if (*success != 0) {
        result->code = 0x00010001;
    } else {
        result->code = 0x80010001;
    }
    result->line = 125;
    result->file = DAT_0053a604;
}
}
