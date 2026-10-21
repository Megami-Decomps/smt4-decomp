/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
extern "C" {
struct Result { u8 unk00[0x14]; u8 value; };
void FUN_002ff588(Result **result, void *object, u32 **value);
/* Resolves a referenced record and returns its value member. */
void *FUN_002f1468(void *object, u32 *reference) {
    u32 *value[2] = {(u32 *)*reference, NULL};
    Result *result;
    FUN_002ff588(&result, object, value);
    return &result->value;
}
}
