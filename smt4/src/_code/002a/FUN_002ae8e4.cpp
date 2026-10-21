#include "common.h"

extern "C" {

int FUN_0014cbcc(u8 *buffer, int b, int c);
int optionalWorkGetValue(void);
int asdTextureEntryApply(int resource);
int FUN_002a6e2c(int resource, u32 value);
int memClear(u8 *ptr, int size);
extern int FUN_002a6e7c(u32 a, int b, u32 c, u8 *buffer);
extern int FUN_002a6f48(u32 id);
extern int asdTMTexTableCallFileB(u32 file, u32 id);

int FUN_002ae8e4(u32 a, u32 file, u32 id, u32 value)
{
    int found;
    int resource;
    u8 buffer[128];

    found = FUN_002a6f48(file);
    if (found != -1) {
        memClear(buffer, 0x80);
        found = FUN_002a6e7c(a, found, id, buffer);
        if ((found != 0) && (resource = asdTMTexTableCallFileB(file, id), resource != 0)) {
            optionalWorkGetValue();
            FUN_0014cbcc(buffer, resource, found);
            FUN_002a6e2c(resource, value);
            asdTextureEntryApply(resource);
            return resource;
        }
    }
    return 0;
}

} /* extern "C" */
