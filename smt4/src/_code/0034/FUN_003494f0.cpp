#include "common.h"

/* unit-local: the 16-byte element the sound system's initializer constructs two of with this
 * function (__aeabi_vec_ctor_nocookie_nodtor, size 0x10; FUN_003f1cb8). The array sits at a
 * 4-aligned, not 8-aligned, address inside g_asdSound (about 0x4e25dc), so the leading 64-bit value
 * is __packed: retail clears it with two word stores of one zero register. */
struct PairState {
    /* 0x00 */ __packed u64 value;
    /* 0x08 */ u8 unk08[8];
};

/* Constructs an element: clears its 64-bit value. */
extern "C" void FUN_003494f0(PairState *state)
{
    state->value = 0;
}
