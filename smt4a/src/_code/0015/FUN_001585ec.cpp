/* NON_MATCHING: register choice only: retail keeps the cleared value in r1 (built uses r0) */
/* Releases the file handle, rejecting its low ownership tag before closing and clearing it; returns the enclosing object. */
#include "common.h"

extern "C" {

typedef struct FileObject {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;      /* bit 0: needs flush before close */
} FileObject;

extern void sysFatalBreak(void);
struct Object;
extern void vcallSlot12IfValid(Object *handle);

FileObject *FUN_001585ec(FileObject *obj, u32 mode)
{
    u32 *slot = &obj->handle;

    if ((*slot & ~1) != 0) {
        if ((*slot & 1) != 0) {
            sysFatalBreak();
        }
        vcallSlot12IfValid(reinterpret_cast<Object *>(*slot & ~1u));
        *slot = 0;
    }
    return (FileObject *)((u8 *)slot - 4);
}

}
