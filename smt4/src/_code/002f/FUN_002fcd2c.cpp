#include "title/titleMain.h"

extern "C" {
extern TitleScene *g_titleScene;
void FUN_002c39a4(TitleScene *scene);
void FUN_002d7e44(void);

/* Finish updating the title scene before advancing its transition. */
s32 FUN_002fcd2c(void *)
{
    FUN_002c39a4(g_titleScene);
    FUN_002d7e44();
    return 0;
}
}
