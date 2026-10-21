#include "addon/aocMain.h"

extern "C" {

void resourceApplyNodeFlag(u32 a, u32 b);
void asdTMTexLoadMainHeap(u32 a, u32 b);
void FUN_001a6568(u32 system, u32 a, u32 b, s32 flags);
void* asdTMTexNodeSetMode(s32 a, s32 b);
s32 aocRunByName(u32 system, u32 a, u32 b, u32 c);

extern u32 g_aocSystem;

void aocHandleButtons(AocRequest *request, u32 buttons)
{
    if (request->enabled != 0) {
        if ((buttons & 8) != 0) {
            if (aocRunByName(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_001a6568(g_aocSystem, request->idA, request->idB, 0x20000);
                return;
            }
            resourceApplyNodeFlag(request->idA, request->idB);
            return;
        }
        if ((buttons & 0x40) != 0) {
            if (aocRunByName(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_001a6568(g_aocSystem, request->idA, request->idB, 0x30000);
                return;
            }
            asdTMTexNodeSetMode(request->idA, request->idB);
            return;
        }
        if ((buttons & 1) != 0) {
            if (aocRunByName(g_aocSystem, request->idA, request->idB, 1) != 0) {
                FUN_001a6568(g_aocSystem, request->idA, request->idB, 0x10000);
                return;
            }
            asdTMTexLoadMainHeap(request->idA, request->idB);
            return;
        }
    }
}

} /* extern "C" */
