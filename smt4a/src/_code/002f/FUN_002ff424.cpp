/* NON_MATCHING: compiler reverses the final equality branch and return-block ordering. */
#include "common.h"
struct Pair { u32 first, second; };
/* Tests whether both words of the pair are equal. */
extern "C" s32 FUN_002ff424(const Pair *left, const Pair *right) {
    if (((left->first ^ right->first) | (left->second ^ right->second)) == 0) return 1;
    return 0;
}
