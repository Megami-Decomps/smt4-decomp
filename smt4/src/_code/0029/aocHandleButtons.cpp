#include "addon/aocMain.h"

extern "C" {

void FUN_0023e3ec(u32 a, u32 b);
void FUN_002a5ed0(u32 a, u32 b);
void FUN_002a5ee4(u32 system, u32 a, u32 b, s32 flags);
void FUN_002a6100(u32 a, u32 b);
s32 FUN_002ae98c(u32 system, u32 a, u32 b, u32 c);

extern u32 g_aocSystem;

void aocHandleButtons(AocRequest *request, u32 buttons)
{
    if (request->enabled != 0) {
        if ((buttons & 8) != 0) {
            if (FUN_002ae98c(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_002a5ee4(g_aocSystem, request->idA, request->idB, 0x20000);
                return;
            }
            FUN_0023e3ec(request->idA, request->idB);
            return;
        }
        if ((buttons & 0x40) != 0) {
            if (FUN_002ae98c(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_002a5ee4(g_aocSystem, request->idA, request->idB, 0x30000);
                return;
            }
            FUN_002a6100(request->idA, request->idB);
            return;
        }
        if ((buttons & 1) != 0) {
            if (FUN_002ae98c(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_002a5ee4(g_aocSystem, request->idA, request->idB, 0x10000);
                return;
            }
            FUN_002a5ed0(request->idA, request->idB);
            return;
        }
    }
}

} /* extern "C" */
