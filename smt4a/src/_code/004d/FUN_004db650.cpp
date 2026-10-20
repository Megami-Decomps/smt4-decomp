#include "common.h"

extern "C" {

typedef struct Record {
    u8 unk00[0x62];
    u16 value; /* 0x62 */
} Record;

extern void FUN_004db65c(int first, int second, int third);

/* Forwards to the function that follows it in the binary. */
void FUN_004db650(int first, Record *second, Record *third)
{
    FUN_004db65c(first, second->value, third->value);
}

} /* extern "C" */
