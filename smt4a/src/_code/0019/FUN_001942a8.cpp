/* NON_MATCHING: O3 coalesces middle-block loads and tail-calls the final append; O2 fixes the loads but still tail-calls instead of retail BL/POP. */
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

void FUN_001942a8(const CommandWordSource* source, u32* destination)
{
    FUN_001a063c(destination, source->prefix.data, source->prefix.wordCount * sizeof(u32));
    const CommandWordBlock* begin = source->blocks;
    const CommandWordBlock* end = begin + source->blockCount;
    if (begin != end) {
        FUN_001a063c(destination, begin->words.data, begin->words.wordCount * sizeof(u32));
    }
    FUN_001a063c(destination, source->suffix.data, source->suffix.wordCount * sizeof(u32));
}
}
