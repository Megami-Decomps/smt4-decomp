#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {
s32 FUN_003478dc(s32 index, const char *data);
s32 keyedRecordRegisterName(const char *name);
const char *FUN_00100d60(const char *text, u32 character);
void asdMemFree(void *allocation);
char *asdLoadFileSyncDefault(const char *path);

// Reuse a registered resource or load and register a VER-format file by its basename.
s32 keyedRecordLoadVerFile(const char *path)
{
    const char *name = FUN_00100d60(path, '/') + 1;
    s32 index = findRecordByKey(name);
    if (index == 0xff) {
        char *data = asdLoadFileSyncDefault(path);
        if (data == NULL || data[0] != 'V')
            return 0xff;
        if (data[1] != 'E' || data[2] != 'R')
            return 0xff;
        index = keyedRecordRegisterName(name);
        index = FUN_003478dc(index, data);
        asdMemFree(data);
    }
    return index;
}
}
