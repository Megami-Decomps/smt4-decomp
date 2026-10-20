/* NON_MATCHING: retail materializes the zero stored to the handle slot (mov r5, #0, r5 saved) before the delete's null test; this build stores it afterwards from r0 */
#include "common.h"

/* A registered handle object with a virtual destructor (vtable slot 1 is the deleting variant). */
class RegisteredHandle {
public:
    virtual ~RegisteredHandle();

    u32 id;
};

extern "C" {

typedef struct HandleOwner {
    /* 0x00000 */ u8 unk00000[0x16004];
    /* 0x16004 */ s32 state;
    /* 0x16008 */ u8 unk16008[0x20];
    /* 0x16028 */ RegisteredHandle *handle;
} HandleOwner;

extern u32 g_handleRegistry;

void ptrListRemoveClearOwner(u32 list, u32 id);
void FUN_0022e774(void);
void FUN_00345718(s32 arg);

void FUN_0049af90(HandleOwner *owner)
{
    if (owner->state != 3) {
        if (owner->state == 1) {
            owner->state = 4;
        } else {
            FUN_0022e774();
            owner->state = 3;
            FUN_00345718(0);
            if (owner->handle != NULL) {
                ptrListRemoveClearOwner(g_handleRegistry, owner->handle->id);
                if (owner->handle != NULL) {
                    delete owner->handle;
                    owner->handle = NULL;
                }
            }
        }
    }
}

} /* extern "C" */
