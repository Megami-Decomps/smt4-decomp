/* NON_MATCHING: the table base and formatted buffer address are scheduled differently in the prologue. */
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "battle/BtlEffectLoad.h"
#include "runtime/Stdio.h"

extern "C" {

extern const char DAT_004007c4[2][0x20]; /* effect names, "G_flash" first */
extern const char DAT_004008c4[];       /* "battle/effect/%s.eft" */

void memClear(void *dest, u32 size);
void asdMemFree(void *block);
char *libc_strcpy(char *dest, const char *src);
s32 keyedRecordFindByName(const char *name);
const u8 *libc_strrchr(const u8 *text, u32 character);

/* Gets the final component of an effect path, which always includes a directory. */
static const char *fileNameFromPath(const char *path)
{
    const u8 *separator = libc_strrchr((const u8 *)path, '/');
    return (const char *)(separator + 1);
}

/* Resets both flash effect slots and starts loading each effect file that no record provides yet. */
u32 btlEffectLoadFlashFiles(BtlEffectWork *effects)
{
    char path[0x80];
    char formatted[0x80];
    char *formattedPath = formatted;

    for (s32 i = 0; i < 2; i++) {
        BtlEffectFileSlot *slot = &effects->flashSlots[i];

        slot->handle = 0xff;
        memClear(slot->name, sizeof(slot->name));
        if (slot->file != NULL) {
            asdMemFree(slot->file);
            slot->file = NULL;
        }
        slot->flags = 0;
        memClear(path, sizeof(path));
        const char *effectName = DAT_004007c4[i];
        memClear(formatted, sizeof(formatted));
        __2sprintf(formatted, DAT_004008c4, effectName);
        libc_strcpy(path, formattedPath);
        char *fullPath = path;
        libc_strcpy(slot->name, fileNameFromPath(fullPath));
        if (keyedRecordFindByName(slot->name) == 0xff) {
            asdLoadFileAsyncSimple(fullPath, (u32 *)&slot->file, 0);
            slot->flags |= 1;
        }
    }
    return 1;
}

} /* extern "C" */
