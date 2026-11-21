#include "common.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
s32 FUN_00249e54(s32 index, const char *data);
s32 keyedRecordFindByName(const char *name);
const char *libc_strrchr(const char *text, s32 character);
void asdMemFree(void *allocation);
char *asdLoadFileSyncDefault(const char *path);

// Reuse a registered resource or load and register a VER-format file by its basename.
s32 keyedRecordLoadVerFile(const char *path)
{
    const char *name = libc_strrchr(path, '/') + 1;
    s32 index = keyedRecordFindByName(name);
    if (index == 0xff) {
        char *data = asdLoadFileSyncDefault(path);
        if (data == NULL || data[0] != 'V')
            return 0xff;
        if (data[1] != 'E' || data[2] != 'R')
            return 0xff;
        index = keyedRecordRegisterName(name);
        index = FUN_00249e54(index, data);
        asdMemFree(data);
    }
    return index;
}
}
