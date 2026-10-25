#include "classes/AocMenu.h"
#include "shard/Shard0047.h"

extern "C" {

typedef struct RestartObj {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 unk04;
    /* 0x008 */ s32 unk08;
    /* 0x00C */ u8 unk00C[0x1FC];
    /* 0x208 */ Object *object;
} RestartObj;

extern s32 FUN_002e07f4(void);
extern void FUN_003d54f8(s32 a, u32 b);

/* Once the previous run finished (state 1 and FUN_002e07f4), frees the object at +0x208 and starts. */
void AocMenu::restartPreviousRun()
{
    RestartObj * obj = reinterpret_cast<RestartObj *>(this);
    if (obj->unk08 != 0) {
        if (obj->unk08 == 1 && FUN_002e07f4() != 0) {
            obj->unk04 = 2;
            obj->unk08 = 0;
            if (obj->object != NULL) {
                obj->object->vtbl->release(obj->object);
                obj->object = NULL;
            }
        }
        return;
    }
    FUN_003d54f8(0, 10);
    FUN_003d54f8(1, 10);
    obj->unk08 = 1;
}

} /* extern "C" */
