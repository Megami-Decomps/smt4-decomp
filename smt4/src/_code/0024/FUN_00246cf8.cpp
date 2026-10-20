#include "common.h"

extern "C" {

int FUN_002629a0(int id, int arg);
int FUN_002a03a0(int id, int a, int b);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x49D8];
    /* 0x49D8 */ int current;
} Obj;

/* Switches the current id: stops the old one, starts the new one. */
void FUN_00246cf8(Obj *obj, int id)
{
    int current = obj->current;

    if (current != id) {
        if (current != -1) {
            FUN_002629a0(current, 0);
        }
        FUN_002a03a0(id, 0, 10);
        obj->current = id;
    }
}

} /* extern "C" */
