#include "common.h"

extern "C" {

/* Effect record: the id handed to FUN_003fd7c0 sits at +4. */
typedef struct {
    u8 unk00[4];
    u32 id;             /* 0x04 */
} Effect;

/* Global game block: a state word at 0x228 and an optional effect at 0x18c. */
typedef struct {
    u8 unk00[0x18c];
    Effect *effect;     /* 0x18c */
    u8 unk190[0x98];
    u32 state;          /* 0x228 */
} GameBlock;

extern GameBlock *g_lmapScene;

int FUN_00162e8c(void);
int FUN_00162ea4(void);
int FUN_003fd7c0(u32 id, int a, int b, f32 scale);

/* Starts the block's effect (scale 85.0) when its state is set and FUN_00162ea4 accepts; 0 when that check fails. */
u32 FUN_0038af8c(void)
{
    FUN_00162e8c();
    if (g_lmapScene->state != 0) {
        if (FUN_00162ea4() == 0) {
            return 0;
        }
        if (g_lmapScene->effect != NULL) {
            FUN_003fd7c0(g_lmapScene->effect->id, 0, 2, 85.0f);
        }
    }
    return 1;
}

} /* extern "C" */
