/* NON_MATCHING: compiler combines the two destination stores into stm. */
#include "common.h"
struct Pair { u32 first, second; };
/* Copies the pair, preserving the first source word before writing. */
extern "C" void FUN_00303146(Pair *output, const Pair *source) {
    u32 first = source->first;
    output->second = source->second;
    output->first = first;
}
