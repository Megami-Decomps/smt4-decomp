#include "common.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {

struct ButtonHelpState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 users;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ void *spriteData;
    /* 0x0c */ void *layoutData;
};

extern ButtonHelpState g_buttonHelp;

void asdTMTexTableLoadSprites(s32 table);
void FUN_00318794(void);
void *asdLoadFileSyncDefault(const char *path);

/* First user of the camp button help loads its sprite table and data files; every call counts one user. */
void campButtonHelpLoad(void)
{
    if (g_buttonHelp.users <= 0) {
        asdTMTexTableLoadSprites(10);
        FUN_0014afd0(10, 0);
        FUN_00318794();
        if (g_buttonHelp.spriteData == NULL) {
            g_buttonHelp.spriteData = asdLoadFileSyncDefault("camp/camp.mbm");
        }
        if (g_buttonHelp.layoutData == NULL) {
            g_buttonHelp.layoutData = asdLoadFileSyncDefault("camp/camp.bf");
        }
    }
    g_buttonHelp.users++;
}

} /* extern "C" */
