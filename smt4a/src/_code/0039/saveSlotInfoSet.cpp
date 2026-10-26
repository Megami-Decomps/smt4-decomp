#include "common.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

typedef struct SaveSlotInfo {
    /* 0x000 */ u8 unk000[0x134];
    /* 0x134 */ u32 id;
    /* 0x138 */ char name[0x44];
} SaveSlotInfo; /* 0x17C bytes */

extern SaveSlotInfo DAT_005f32a0[];

extern char *libc_strcpy(char *dst, const char *src);

/* Stores the id and name of record `index`. */
void saveSlotInfoSet(s32 index, u32 id, const char *name)
{
    DAT_005f32a0[index].id = id;
    libc_strcpy(DAT_005f32a0[index].name, name);
}

}
