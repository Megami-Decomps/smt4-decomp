/* NON_MATCHING: initial result retention and VER signature-test predication differ. */
#include "common.h"

extern "C" {
s32 FUN_00249e54(s32 index, const char *data);
s32 keyedRecordRegisterName(const char *name);
s32 keyedRecordFindByName(const char *name);
const char *FUN_002522e0(const char *text, s32 character);
void asdMemFree(void *allocation);
char *asdLoadFileSyncDefault(const char *path);

// Reuse a registered resource or load and register a VER-format file by its basename.
s32 FUN_002d848c(const char *path)
{
    const char *name = FUN_002522e0(path, '/') + 1;
    s32 index = keyedRecordFindByName(name);
    if (index != 0xff)
        return index;
    char *data = asdLoadFileSyncDefault(path);
    if (data != NULL && data[0] == 'V') {
        if (data[1] == 'E' && data[2] == 'R') {
            index = keyedRecordRegisterName(name);
            index = FUN_00249e54(index, data);
            asdMemFree(data);
            return index;
        }
    }
    return 0xff;
}
}
