#include "shard/Shard0037.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);

/* Tests the owned-bit of `id` after folding variant ids onto their base id. */
u8 gameOwnedBitTest(s32 id)
{
    Flags0C0C *flags = FUN_00162e8c();
    s32 word;
    s32 bit;

    if (id == 0x17 || id == 0x18) {
        id = 0xE;
    } else if (id == 0x19 || id == 0x1A) {
        id = 0x12;
    } else if (id == 0x49 || id == 0x4D) {
        id = 0x41;
    } else if (id == 0x4A || id == 0x4E) {
        id = 0x42;
    } else if (id == 0x4B || id == 0x4F) {
        id = 0x43;
    } else if (id == 0x4C || id == 0x50) {
        id = 0x44;
    } else if (id == 0x94 || id == 0x9E) {
        id = 0x8D;
    } else if (id == 0x95 || id == 0x9F) {
        id = 0x8E;
    } else if (id == 0x96 || id == 0xA0) {
        id = 0x91;
    } else if (id == 0xA6 || id == 0xA7) {
        id = 0xA4;
    }
    word = id / 32;
    bit = id % 32;
    return (flags->bits[word] & (1 << bit)) != 0;
}

} /* extern "C" */
