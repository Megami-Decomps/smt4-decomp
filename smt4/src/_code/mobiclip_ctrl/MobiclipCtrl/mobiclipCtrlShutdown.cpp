/* Shuts down the Mobiclip player: stops and finalizes its objects, closes the movie file. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {

int FUN_002c52f8(void);
int FUN_0034e140(S4FsReader *reader);
int FUN_0034f5f8(void *obj);
int FUN_0034f6e8(void *obj);
int FUN_0034f780(void *obj);
int FUN_0034fa04(S4Player *player);
int FUN_003516c0(S4Player *player);
int FUN_003f6b28(u32 handle);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

extern u32 DAT_0044d024;
extern u8 DAT_004c3a50[];
extern u8 DAT_004c3af8[];
extern S4Player DAT_004c3b20;
extern S4FsReader DAT_004c4080;
extern S4File DAT_004c40e0;

void mobiclipCtrlShutdown(void)
{
    u32 *handle;

    FUN_0034f5f8(DAT_004c3af8);
    FUN_0034fa04(&DAT_004c3b20);
    FUN_003516c0(&DAT_004c3b20);
    FUN_0034f780(DAT_004c3a50);
    FUN_0034f6e8(DAT_004c3af8);
    FUN_003f6b28(DAT_0044d024);
    DAT_0044d024 = 0;
    FUN_0034e140(&DAT_004c4080);
    handle = &DAT_004c40e0.handle;
    if ((*handle & ~1u) != 0) {
        if ((*handle & 1) != 0) {
            FUN_002c52f8();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*handle & ~1u);
        *handle = 0;
    }
}

} /* extern "C" */
