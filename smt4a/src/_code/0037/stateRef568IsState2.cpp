#include "shard/Shard0037.h"

extern "C" {

typedef struct State568 {
    /* 0x000 */ u8 unk000[0x568];
    /* 0x568 */ s32 state;
} State568;

typedef struct StateRef568 {
    /* 0x00 */ State568 *obj;
} StateRef568;

extern void event3dOpeningCreate(void);

u32 stateRef568IsState2(StateRef568 *ref)
{
    if (ref->obj != NULL) {
        if (ref->obj->state == 2) {
            return 1;
        }
    } else {
        event3dOpeningCreate();
    }
    return 0;
}

} /* extern "C" */
