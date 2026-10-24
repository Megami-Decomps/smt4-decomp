/* NON_MATCHING: retail reaches the heap, its lock and the guard through one base register each (the unit heap module's globals sit together); built loads every address separately and allocates registers differently */
#include "classes/Obj420f4c.h"

/* The file-system globals as this function sees them: the heap the stream blocks come from. */
struct TitleContentFileSystemView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Obj420f4c *heap;
};

extern "C" {
extern TitleContentFileSystemView g_titleContentFileSystem;
extern u8 DAT_00430940[0x1300];
extern u8 DAT_004d43d0[];   /* the heap module's critical section */
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(Obj420f4c *heap);

/* Allocates one file-stream block from the title-content unit heap, creating that heap on first use. */
void *FUN_001392fc(void)
{
    nn_os_CriticalSection_Enter(DAT_004d43d0);
    static Obj420f4c heap(0x130, DAT_00430940, 0x1300);
    g_titleContentFileSystem.heap = &heap;
    void *block = nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(&heap);
    nn_os_CriticalSection_Leave(DAT_004d43d0);
    return block;
}

} /* extern "C" */
