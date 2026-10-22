#include "AsdSDK/AsdDebug.h"

/* The bust-up resources, shared by reference count. */
struct StatusBustUpResources {
    /* 0x0 */ s8 refCount;
    /* 0x1 */ u8 unk1[3];
    /* 0x4 */ void *workA;
    /* 0x8 */ void *workB;
};

extern "C" {
extern StatusBustUpResources DAT_0044e158;
void asdTMTexTableLoadSprites(u32 table);
void asdTMTexTableLoadTmx(u32 table, u32 node);
void *asdMemAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, s32 kind);
void rt_memclr(void *block, u32 size);

/* Takes a reference on the bust-up resources, loading the textures and allocating the work
 * buffers on the first one. */
void statusBustUpAcquire(void)
{
    if (DAT_0044e158.refCount <= 0) {
        asdTMTexTableLoadSprites(0x17);
        asdTMTexTableLoadTmx(0x23, 0);
        if (DAT_0044e158.workA == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\status\\StatusBustUp.cpp", 26);
            DAT_0044e158.workA = asdMemAlloc(0x100, 0x100, 0, 0x266, 1);
            rt_memclr(DAT_0044e158.workA, 0x266);
        }
        if (DAT_0044e158.workB == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\status\\StatusBustUp.cpp", 30);
            DAT_0044e158.workB = asdMemAlloc(0x100, 0x100, 0, 0x81, 1);
            rt_memclr(DAT_0044e158.workB, 0x81);
        }
    }
    DAT_0044e158.refCount++;
}

} /* extern "C" */
