#include "common.h"

/* Compares the low-byte keys of two word-sized records. */
extern "C" s32 tableCompareWordByteKeys(const u32 *left, const u32 *right)
{
    return (*left & 0xff) - (*right & 0xff);
}
