#include "shard/Shard0037.h"

extern "C" {

typedef struct State568 {
    /* 0x000 */ u8 unk000[0x568];
    /* 0x568 */ s32 state;
} State568;


extern void event3dOpeningCreate(void);
extern State568 *g_event3dOpening;

u32 stateRef568IsState2(void)
{
    if (g_event3dOpening != NULL) {
        if (g_event3dOpening->state == 2) {
            return 1;
        }
    } else {
        event3dOpeningCreate();
    }
    return 0;
}

} /* extern "C" */
