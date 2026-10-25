#include "classes/AocMenu.h"
#include "common.h"

extern "C" {

int FUN_002a03d8(int a, int b);
extern int FUN_002896bc(void);

struct Object;
typedef struct ObjectVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(struct Object *object);
} ObjectVtbl;

typedef struct Object {
    /* 0x0 */ ObjectVtbl *vtbl;
} Object;

typedef struct Obj {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 unk004;
    /* 0x008 */ int state;
    /* 0x00C */ u8 unk00C[0x1FC];
    /* 0x208 */ Object *object;
} Obj;

void AocMenu::restartPreviousRun()
{
    Obj * obj = reinterpret_cast<Obj *>(this);
    if (obj->state != 0) {
        if ((obj->state == 1) && (FUN_002896bc() != 0)) {
            obj->unk004 = 2;
            obj->state = 0;
            if (obj->object != NULL) {
                obj->object->vtbl->destroy(obj->object);
                obj->object = NULL;
            }
        }
        return;
    }
    FUN_002a03d8(0, 10);
    FUN_002a03d8(1, 10);
    obj->state = 1;
}

} /* extern "C" */
