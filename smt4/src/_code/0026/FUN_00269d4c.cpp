#include "shard/W5_W5Match2_UniteWork.h"
#include "bible/bibleMain.h"

extern "C" {

extern int sys43e188GetState(void);


extern UniteWorkIV *g_unite;

u32 FUN_00269d4c(void)
{
    UniteWorkIV *obj = g_unite;

    if (obj == NULL) {
        return (u32)obj;
    }
    if (obj->unk95D8 != 0) {
        if (obj->common.menu.active == 0 || (sys43e188GetState() == 0)) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
