#include "AsdSDK/AsdDebug.h"

#include "status/StatusBustUp.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern StatusBustUpResources g_statusBustUpResources;
void asdTMTexTableLoadTmx(u32 table, u32 node);
void rt_memclr(void *block, u32 size);

/* Takes a reference on the bust-up resources, loading the textures and allocating the work
 * buffers on the first one. */
void statusBustUpAcquire(void)
{
    if (g_statusBustUpResources.refCount <= 0) {
        asdTMTexTableLoadSprites(0x17);
        asdTMTexTableLoadTmx(0x23, 0);
        if (g_statusBustUpResources.workA == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\status\\StatusBustUp.cpp", 26);
            g_statusBustUpResources.workA = asdMemAlloc(0x100, 0x100, 0, 0x266, 1);
            rt_memclr(g_statusBustUpResources.workA, 0x266);
        }
        if (g_statusBustUpResources.workB == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\status\\StatusBustUp.cpp", 30);
            g_statusBustUpResources.workB = asdMemAlloc(0x100, 0x100, 0, 0x81, 1);
            rt_memclr(g_statusBustUpResources.workB, 0x81);
        }
    }
    g_statusBustUpResources.refCount++;
}

} /* extern "C" */
