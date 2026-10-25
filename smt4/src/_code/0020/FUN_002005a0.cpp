#include "common.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

int resourceLookupWithFallback(u32 object, int id);
extern int asdCecOutboxHasMessage(u32 object);

typedef struct CecProcess {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 object;
} CecProcess;

extern CecProcess *g_cecProcess; /* 0x43de68 */

u32 FUN_002005a0(int id)
{
    CecProcess *process = g_cecProcess;
    u32 found = 0;

    if ((g_cecProcess != NULL && id != 0) && asdCecOutboxHasMessage(g_cecProcess->object) != 0) {
        resourceLookupWithFallback(process->object, id);
        found = 1;
    }
    return found;
}

} /* extern "C" */
