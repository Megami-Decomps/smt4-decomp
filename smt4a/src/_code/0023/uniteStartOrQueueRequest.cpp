#include "camp/Unite/UniteGlobals.h"

extern "C" {

void sysPlaySe(s32 id);
s32 scrRunOpcodesStub(u32 handle);
s32 gameGlobalsSetMenuOpenFlag(s32 value);
s32 scrScriptProcessStartEntry(u32 handle, s32 request);

/* Queues `request`: while busy it is kept as the pending request; otherwise, if scrScriptProcessStartEntry accepts it, it starts (requests 8..0xC and 0xE also play sound effect 0xA0) and the record becomes busy. Returns whether it started. */
u32 uniteStartOrQueueRequest(s32 request)
{
    UniteWorkA *record;
    s32 accepted;

    record = g_unite;
    if (g_unite != NULL) {
        if (g_unite->menu.active != 0) {
            g_unite->scriptA.pendingRequest = request;
        } else {
            accepted = scrScriptProcessStartEntry(g_unite->menu.scriptProcess, request);
            if (accepted != 0) {
                scrRunOpcodesStub(record->menu.scriptProcess);
                if (((!(request == 8 || request == 9)) && (!(request == 10 || request == 0xB))) &&
                    (!(request == 0xC || request == 0xE))) {
                    if (request == 0xD) {
                        gameGlobalsSetMenuOpenFlag(1);
                    }
                } else {
                    gameGlobalsSetMenuOpenFlag(1);
                    sysPlaySe(0xA0);
                }
                record->scriptA.pendingRequest = 0xFFFFFFFF;
                record->request = request;
                record->menu.active = 1;
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
