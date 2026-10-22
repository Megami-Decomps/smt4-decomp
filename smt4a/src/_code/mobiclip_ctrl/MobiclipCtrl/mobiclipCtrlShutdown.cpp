#include "classes/Obj420a2c.h"
#include "classes/Obj557f00.h"
/* Shuts down the Mobiclip player: stops and finalizes its objects, closes the movie file. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {

int sysFatalBreak(void);
int FUN_00422654(S4FsReader *reader);
int FUN_00423c0c(void *obj);
int movieSyncDrainSourcePositions(S4Player *player);
int FUN_00425cd8(S4Player *player);
int FUN_005143ac(u32 handle);
void vcallSlot12IfValid(u32 handle);

extern u32 DAT_00588024;
extern u8 DAT_00617e70[];
extern u8 DAT_00617f18[];
extern S4Player DAT_00617f40;
extern S4FsReader DAT_006184a0;
extern S4File DAT_00618500;

void mobiclipCtrlShutdown(void)
{
    u32 *handle;

    FUN_00423c0c(DAT_00617f18);
    movieSyncDrainSourcePositions(&DAT_00617f40);
    FUN_00425cd8(&DAT_00617f40);
    ((Obj420a2c *)DAT_00617e70)->Obj420a2c::releaseSources();
    ((Obj557f00 *)DAT_00617f18)->Obj557f00::close();
    FUN_005143ac(DAT_00588024);
    DAT_00588024 = 0;
    FUN_00422654(&DAT_006184a0);
    handle = &DAT_00618500.handle;
    if ((*handle & ~1u) != 0) {
        if ((*handle & 1) != 0) {
            sysFatalBreak();
        }
        vcallSlot12IfValid(*handle & ~1u);
        *handle = 0;
    }
}

} /* extern "C" */
