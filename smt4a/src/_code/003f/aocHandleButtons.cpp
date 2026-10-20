#include "addon/aocMain.h"

extern "C" {

void FUN_003a4958(u32 a, u32 b);
void FUN_001acf98(u32 a, u32 b);
void FUN_001a6568(u32 system, u32 a, u32 b, s32 flags);
void FUN_003a496c(u32 a, u32 b);
s32 FUN_001a6508(u32 system, u32 a, u32 b, u32 c);

extern u32 g_aocSystem;

void aocHandleButtons(AocRequest *request, u32 buttons)
{
    if (request->enabled != 0) {
        if ((buttons & 8) != 0) {
            if (FUN_001a6508(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_001a6568(g_aocSystem, request->idA, request->idB, 0x20000);
                return;
            }
            FUN_003a4958(request->idA, request->idB);
            return;
        }
        if ((buttons & 0x40) != 0) {
            if (FUN_001a6508(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_001a6568(g_aocSystem, request->idA, request->idB, 0x30000);
                return;
            }
            FUN_003a496c(request->idA, request->idB);
            return;
        }
        if ((buttons & 1) != 0) {
            if (FUN_001a6508(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_001a6568(g_aocSystem, request->idA, request->idB, 0x10000);
                return;
            }
            FUN_001acf98(request->idA, request->idB);
            return;
        }
    }
}

} /* extern "C" */
