#include "common.h"
extern "C" {
s32 libc_sprintf(char *destination, const char *format, ...);
void textFormatBuffer(char *destination, const char *format, const char *text);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
const char *FUN_0014bd84(u32 id);
const char *FUN_00180114(u32 id);
const char *contentEntryDataGet(u32 id, u32 kind);
extern const char *DAT_0057f298[];
extern const char *DAT_0052f2b4[21];
struct EntryLabelNames { const char *names[8]; };
extern EntryLabelNames DAT_0052f308;

// Format a name selected from the appropriate content category.
void FUN_0021b390(u32 context, s32 category, s32 id, char *destination)
{
    if (id < 0) {
        libc_sprintf(destination, "\x82\x63\x82\x8f\x82\x8e\x81\x66\x82\x94\x81\x40\x82\x93\x82\x90\x82\x85\x82\x83\x82\x89\x82\x86\x82\x99");
        return;
    }
    if (category == 0 || category == 14 || category == 1) {
        libc_sprintf(destination, "%s", FUN_00180114((u16)id));
    } else if (category == 2) {
        libc_sprintf(destination, "%s", DAT_0057f298[id]);
    } else if (category == 3) {
        libc_sprintf(destination, "%s", contentEntryDataGet(id, 0));
    } else if (category == 4) {
        libc_sprintf(destination, "%s", FUN_0014bd84(id));
    } else if (category == 5) {
        const char *names[21];
        __aeabi_memcpy4(names, DAT_0052f2b4, sizeof(names));
        textFormatBuffer(destination, "%s", names[id]);
    } else if (category == 6) {
        EntryLabelNames names = DAT_0052f308;
        textFormatBuffer(destination, "%s", names.names[id]);
    }
}
}
