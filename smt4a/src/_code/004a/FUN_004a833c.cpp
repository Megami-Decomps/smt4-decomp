/* NON_MATCHING: retail keeps the registry in r0 through the search and copies it to r4 only before the append; built moves it up front */
#include "common.h"
#include "code/Code002a_Smt4a.h"

extern "C" {

typedef struct {
    u16 id;       /* 0x00 */
    u16 unk2;
    u32 data[7];  /* 0x04 */
} RegistryEntry; /* size 0x20 */

typedef struct {
    s16 count;                    /* 0x0000 */
    u16 unk2;
    RegistryEntry entries[0x500]; /* 0x0004 */
    u16 specialCount;             /* 0xa004 */
    u16 unkA006;
    u16 specialHits;              /* 0xa008 */
} Registry;


/* Appends `entry` unless its id is already registered; counts ids that FUN_002a4b28 accepts. */
void FUN_004a833c(Registry *registry, RegistryEntry *entry)
{
    s32 i;

    for (i = 0; i < registry->count; i++) {
        if (registry->entries[i].id == entry->id) {
            return;
        }
    }
    registry->entries[registry->count] = *entry;
    registry->count++;
    if (FUN_002a4b28(entry->id) != 0) {
        registry->specialHits++;
    }
}

} /* extern "C" */
