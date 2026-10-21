#include "common.h"

struct OptionalWord {
    u32 unk00;       // 0x00
    const u32* value; // 0x04
    u32 unk08;       // 0x08
    u8 present;      // 0x0c
};

extern "C" u32 optionalWordGetValue(const OptionalWord* word)
{
    if (!word->present) {
        return 0;
    }
    return *word->value;
}
