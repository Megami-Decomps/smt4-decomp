/* NON_MATCHING: with an inline helper (evaluation left to right) the prefix and block loads match retail (separate ldr, count first); the last append then becomes a tail call (`b FUN_001a063c`) where retail ends with `bl; pop {r4, r5, r6, pc}`, and the block pair loads as ldrd. */
#include "common.h"

struct CommandWords {
    const u32* data;
    u32 wordCount;
};
struct CommandWordBlock {
    u8 unk00[0x2c];
    CommandWords words;
};
struct CommandWordSource {
    u8 unk00[8];
    CommandWords prefix;
    CommandWordBlock* blocks;
    u32 blockCount;
    CommandWords suffix;
};

extern "C" {
void FUN_001a063c(u32* destination, const u32* words, u32 bytes);
}

static __inline void appendWords(u32* destination, u32 wordCount, const u32* data)
{
    FUN_001a063c(destination, data, wordCount * sizeof(u32));
}

extern "C" void FUN_001942a8(const CommandWordSource* source, u32* destination)
{
    appendWords(destination, source->prefix.wordCount, source->prefix.data);
    const CommandWordBlock* begin = source->blocks;
    const CommandWordBlock* end = begin + source->blockCount;
    if (begin != end) {
        appendWords(destination, begin->words.wordCount, begin->words.data);
    }
    appendWords(destination, source->suffix.wordCount, source->suffix.data);
}
