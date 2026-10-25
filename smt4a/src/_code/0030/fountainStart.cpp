#include "classes/Obj557ed0.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern Obj557ed0 *DAT_0057f658;

u32 taskCreateDraw(const char *name, u32 priority, u32 flags, u32 argument, void (*draw)(), void *unused,
                   void *work, u32 parent);
void FUN_0022677c(u32 index, u32 value);
void FUN_002e5900();
void FUN_00330934();
void FUN_00330954();
void FUN_00330978();
void FUN_0033092c();

/* Starts the fountain screen: with parameters it restores their four words, without it fades both slots. */
void fountainStart(const u32 *params)
{
    DAT_0057f658 = new Obj557ed0;
    Obj557ed0 *fountain = DAT_0057f658;
    if (params != NULL) {
        fountain->params[0] = params[0];
        fountain->params[1] = params[1];
        fountain->params[2] = params[2];
        fountain->params[3] = params[3];
        fountain->active = 0;
        fountain->unk0C[0] = 0;
    } else {
        fountain->active = 1;
        fountain->unk0C[0] = 0;
        FUN_0022677c(0, 0xFF);
        FUN_0022677c(1, 0xFF);
    }
    fountain->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("FOUNTAIN PROC"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_002e5900), 0, 0);
    taskCreateDraw("FOUNTAIN UD", 0x75, 0, 0, FUN_00330934, 0, 0, fountain->task);
    taskCreateDraw("FOUNTAIN UD", 0x77, 0, 0, FUN_00330954, 0, 0, fountain->task);
    taskCreateDraw("FOUNTAIN UD", 0xD3, 0, 0, FUN_00330978, 0, 0, fountain->task);
    taskCreateDraw("FOUNTAIN DD", 0xEB, 0, 0, FUN_0033092c, 0, 0, fountain->task);
}

}
