#include "shard/Shard003B.h"

extern "C" {

extern void FUN_00237210(u32 handle);
extern void FUN_0038b3f8(s32 a, s32 b);
extern u8 FUN_0018206c(s32 a, u32 b);
extern u32 FUN_002adba8(s32 index);
extern void FUN_0019a7f4(s32 a, u32 b);
extern void asdMemFree(void *ptr);

/* Releases every handle the set owns, frees the textures it registered, and the set itself. */
void resSetFree(ResSet *set)
{
    s32 i;

    for (i = 0; i < 7; i++) {
        FUN_00237210(set->a[i]);
    }
    FUN_00237210(set->h1);
    FUN_00237210(set->h0);
    FUN_00237210(set->h34);
    for (i = 0; i < 8; i++) {
        FUN_00237210(set->b[i]);
    }
    FUN_00237210(set->h38);
    FUN_00237210(set->h40);
    FUN_00237210(set->h48);
    FUN_0038b3f8(set->unk90, 1);
    if (set != NULL) {
        for (i = 0; i < 9; i++) {
            if (FUN_0018206c(0x2E, FUN_002adba8(i)) != 0) {
                FUN_0019a7f4(0x2E, FUN_002adba8(i));
                set->states[i] = 0;
            }
        }
    }
    asdMemFree(set);
}

} /* extern "C" */
