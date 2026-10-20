#include "shard/Shard003A.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

/* Tests the owned-bit of `id` after folding variant ids onto their base id. */
u8 gameOwnedBitTest2(s32 id)
{
    Flags0C0C *flags = gameFlagsGetBlock();
    s32 word;
    s32 bit;

    if (id == 0x10 || id == 0x11) {
        id = 8;
    } else if (id == 0x12 || id == 0x13) {
        id = 0xC;
    } else if (id == 0x2F || id == 0x33) {
        id = 0x2B;
    } else if (id == 0x30 || id == 0x34) {
        id = 0x2C;
    } else if (id == 0x31 || id == 0x35) {
        id = 0x2D;
    } else if (id == 0x32 || id == 0x36) {
        id = 0x2E;
    } else if (id == 0x72 || id == 0x75) {
        id = 0x6B;
    } else if (id == 0x73 || id == 0x76) {
        id = 0x6C;
    } else if (id == 0x74 || id == 0x77) {
        id = 0x6F;
    } else if (id == 0x82 || id == 0x83) {
        id = 0x80;
    }
    word = id / 0x20;
    bit = id % 0x20;
    return (flags->bits2[word] & (1 << bit)) != 0;
}

} /* extern "C" */
