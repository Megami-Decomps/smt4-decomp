#include <stdio.h>
#include "shard/Shard0035.h"
#include <string.h>

extern "C" {
extern const char *const DAT_005321e8[10];
Entry30 *dataTable4CGetEntry(u32 index);

void FUN_0032725c(u32 index, char *output, s32 level)
{
    const char *names[10];
    memcpy(names, DAT_005321e8, sizeof(names));
    Entry30 *entry = dataTable4CGetEntry(index);
    // CP932: [Twisted Tokyo], an optional level, floor, and category.
    if (level == -1) {
        if (gameDataGetTableValue()) {
            sprintf(output,
                "\x81\x6D\x82\x73\x82\x97\x82\x89\x82\x93\x82\x94\x82\x85\x82\x84\x81\x40"
                "\x82\x73\x82\x8F\x82\x8B\x82\x99\x82\x8F\x81\x6E\x81\x40%d\x81\x40\x82\x61%d\x81\x40%s",
                gameDataGetTableValue(), index, names[entry->unk00]);
            return;
        }
        sprintf(output,
            "\x81\x6D\x82\x73\x82\x97\x82\x89\x82\x93\x82\x94\x82\x85\x82\x84\x81\x40"
            "\x82\x73\x82\x8F\x82\x8B\x82\x99\x82\x8F\x81\x6E\x81\x40\x82\x61%d\x81\x40%s",
            index, names[entry->unk00]);
        return;
    }
    if (level) {
        sprintf(output,
            "\x81\x6D\x82\x73\x82\x97\x82\x89\x82\x93\x82\x94\x82\x85\x82\x84\x81\x40"
            "\x82\x73\x82\x8F\x82\x8B\x82\x99\x82\x8F\x81\x6E\x81\x40%d\x81\x40\x82\x61%d\x81\x40%s",
            level, index, names[entry->unk00]);
        return;
    }
    sprintf(output,
        "\x81\x6D\x82\x73\x82\x97\x82\x89\x82\x93\x82\x94\x82\x85\x82\x84\x81\x40"
        "\x82\x73\x82\x8F\x82\x8B\x82\x99\x82\x8F\x81\x6E\x81\x40\x82\x61%d\x81\x40%s",
        index, names[entry->unk00]);
}
}
