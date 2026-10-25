#include "common.h"
#include <string.h>

extern "C" {
extern const char *const DAT_0040333c[21];
extern const char *const DAT_00403390[8];
const char *FUN_002bd068(u16 id);
const char *aocEntryDataById(u32 index, u32 group);
const char *aocIndexValueOrDefault(u32 index);
s32 libc_sprintf(char *output, const char *format, ...);
void textFormatBuffer(char *output, const char *format, ...);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

void uiFormatIndexedDisplayName(u32 unused, s32 kind, s32 index, char *output)
{
    if (index < 0) {
        // CP932 fullwidth \"Don't specify\".
        libc_sprintf(output,
            "\x82\x63\x82\x8F\x82\x8E\x81\x66\x82\x94\x81\x40"
            "\x82\x93\x82\x90\x82\x85\x82\x83\x82\x89\x82\x86\x82\x99");
        return;
    }
    if (kind == 0 || kind == 13 || kind == 1) {
        libc_sprintf(output, "%s", FUN_002bd068(static_cast<u16>(index)));
        return;
    }
    if (kind == 2) {
        libc_sprintf(output, "%s", aocEntryDataById(index, 0));
        return;
    }
    if (kind == 3) {
        libc_sprintf(output, "%s", aocIndexValueOrDefault(index));
        return;
    }
    if (kind == 4) {
        const char *names[21];
        __aeabi_memcpy4(names, DAT_0040333c, sizeof(names));
        textFormatBuffer(output, "%s", names[index]);
        return;
    }
    if (kind == 5) {
        const char *names[8];
        memcpy(names, DAT_00403390, sizeof(names));
        textFormatBuffer(output, "%s", names[index]);
    }
}
}
