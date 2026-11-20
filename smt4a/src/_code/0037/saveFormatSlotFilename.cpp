#include "common.h"
#include "runtime/Stdio.h"

extern "C" {
extern char DAT_005e2114[0x80];
void rt_aeabi_memclr(void *buffer, u32 size);

/* Save filename format strings stored contiguously in .rodata (0x530fe4..0x531010). */
static const struct {
    char prefixed[0x14];
    char directory[0x08];
} s_prefixedSaveFormat = {
    "%ssdds4game%d.sav",
    "sdds4/"
};
static const char s_plainSaveFormat[] = "sdds4game%d.sav";

/* Format the slot's save filename, optionally with the sdds4/ directory prefix. */
char *saveFormatSlotFilename(u32 slot, s32 directoryMode)
{
    rt_aeabi_memclr(DAT_005e2114, sizeof(DAT_005e2114));
    if (directoryMode == 1) {
        __2sprintf(DAT_005e2114, s_prefixedSaveFormat.prefixed, s_prefixedSaveFormat.directory, slot);
    } else {
        __2sprintf(DAT_005e2114, s_plainSaveFormat, slot);
    }
    return DAT_005e2114;
}
} /* extern "C" */
