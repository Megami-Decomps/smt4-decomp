#include "common.h"

extern "C" {

typedef struct ButtonHelp {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 loadCount;   /* nesting count of loads */
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ s32 mbm;        /* "camp/camp.mbm" */
    /* 0x0C */ s32 bf;         /* "camp/camp.bf" */
} ButtonHelp;

extern ButtonHelp g_buttonHelp;

s32 asdTMTexTableLoadSprites(s32 id);
s32 FUN_002c58c8(s32 id, s32 arg);
s32 FUN_0022097c(void);
s32 FUN_002c5c04(const char *path);

/* Loads the camp button-help resources on the first load (counted by loadCount). */
void FUN_0028d9b0(void)
{
    if (g_buttonHelp.loadCount <= 0) {
        asdTMTexTableLoadSprites(0x12);
        FUN_002c58c8(0x12, 0);
        FUN_0022097c();
        if (g_buttonHelp.mbm == 0) {
            g_buttonHelp.mbm = FUN_002c5c04("camp/camp.mbm");
        }
        if (g_buttonHelp.bf == 0) {
            g_buttonHelp.bf = FUN_002c5c04("camp/camp.bf");
        }
    }
    g_buttonHelp.loadCount++;
}

} /* extern "C" */
