#include "common.h"

extern "C" {

int dataTableFileGetTable(int value, int flag);

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ int value;
} Obj;

void dataTableFileTouch(Obj *obj)
{
    if (obj->value != 0) {
        dataTableFileGetTable(obj->value, 0);
        return;
    }
}

} /* extern "C" */
