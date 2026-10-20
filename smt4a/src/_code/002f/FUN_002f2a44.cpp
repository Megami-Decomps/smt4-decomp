#include "common.h"

extern "C" {

typedef struct StrHolder {
    /* 0x0 */ const void *vtbl;
} StrHolder;

extern const u8 DAT_0055b22c[];  /* vtable */

StrHolder *FUN_003022b4(StrHolder *self);
void *operatorNew(u32 size);
void *strInit(void *memory);
int FUN_002ece58(StrHolder *holder, void *str);

/* Constructor: base-initialises the holder, stores its vtable and gives it a freshly allocated string. */
StrHolder *FUN_002f2a44(StrHolder *self)
{
    StrHolder *holder = FUN_003022b4(self);
    void *memory;

    holder->vtbl = DAT_0055b22c;
    memory = operatorNew(32);
    if (memory != NULL) {
        memory = strInit(memory);
    }
    FUN_002ece58(holder, memory);
    return holder;
}

} /* extern "C" */
