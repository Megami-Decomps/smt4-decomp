/* NON_MATCHING: only the initial constant-table load, stack adjustment and level-register move are scheduled differently; 84 built and retail rows. */
#include "shard/Shard0035.h"
#include <string.h>
#include "shard/gameDataGetTableValue.h"

extern "C" {
extern const char *const DAT_005321e8[10];
Entry30 *dataTable4CGetEntry(u32 index);
void textFormatBuffer(char *output, const char *format, ...);

void FUN_0032725c(u32 index, char *output, s32 level)
{
    const char *names[10];
    memcpy(names, DAT_005321e8, sizeof(names));
    Entry30 *entry = dataTable4CGetEntry(index);
    // CP932: [Twisted Tokyo], an optional level, floor, and category.
    if (level == -1) {
        if (gameDataGetTableValue()) {
            textFormatBuffer(output,
                "\x81\x6D\x82\x73\x82\x97\x82\x89\x82\x93\x82\x94\x82\x85\x82\x84\x81\x40"
                "\x82\x73\x82\x8F\x82\x8B\x82\x99\x82\x8F\x81\x6E\x81\x40%d\x81\x40\x82\x61%d\x81\x40%s",
                gameDataGetTableValue(), index, names[entry->unk00]);
            return;
        }
        textFormatBuffer(output,
            "\x81\x6D\x82\x73\x82\x97\x82\x89\x82\x93\x82\x94\x82\x85\x82\x84\x81\x40"
            "\x82\x73\x82\x8F\x82\x8B\x82\x99\x82\x8F\x81\x6E\x81\x40\x82\x61%d\x81\x40%s",
            index, names[entry->unk00]);
        return;
    }
    if (level) {
        textFormatBuffer(output,
            "\x81\x6D\x82\x73\x82\x97\x82\x89\x82\x93\x82\x94\x82\x85\x82\x84\x81\x40"
            "\x82\x73\x82\x8F\x82\x8B\x82\x99\x82\x8F\x81\x6E\x81\x40%d\x81\x40\x82\x61%d\x81\x40%s",
            level, index, names[entry->unk00]);
        return;
    }
    textFormatBuffer(output,
        "\x81\x6D\x82\x73\x82\x97\x82\x89\x82\x93\x82\x94\x82\x85\x82\x84\x81\x40"
        "\x82\x73\x82\x8F\x82\x8B\x82\x99\x82\x8F\x81\x6E\x81\x40\x82\x61%d\x81\x40%s",
        index, names[entry->unk00]);
}
}
