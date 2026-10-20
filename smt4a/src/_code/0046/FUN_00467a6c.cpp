/* NON_MATCHING: register/copy choice only: retail makes the virtual getCount call with r0 still holding the container (`ldr r1,[r0]`), built reloads it from r8 */
/* Frees every element of the object's array (calling FUN_00512870 on each), clears its state and returns the old value of field 1. */
#include "common.h"

extern "C" {

struct Container;

typedef struct ContainerVtbl {
    /* 0x00 */ void *slots[26];
    /* 0x68 */ s32 (*getCount)(struct Container *container);
} ContainerVtbl;

typedef struct Element {
    /* 0x00 */ void *ptr;
    /* 0x04 */ u8 unk04[0x10];
} Element; /* 0x14 */

typedef struct Container {
    /* 0x00 */ ContainerVtbl *vtbl;
    /* 0x04 */ s32 head;
    /* 0x08 */ s32 tail;
    /* 0x0C */ Element *elements;
} Container;

extern void FUN_00512870(s32 count, void *pointer);

s32 FUN_00467a6c(Container *container, u32 unused1, u32 unused2, s32 unused3)
{
    Element *elements = container->elements;
    s32 head;

    if (elements != NULL) {
        s32 count = container->vtbl->getCount(container);
        s32 i;

        for (i = 0; i < count; i++) {
            void *ptr = elements[i].ptr;

            if (ptr != NULL) {
                FUN_00512870(1, &ptr);
                elements[i].ptr = NULL;
            }
        }
        container->elements = NULL;
    }
    head = container->head;
    container->head = 0;
    container->tail = 0;
    return head;
}

}
