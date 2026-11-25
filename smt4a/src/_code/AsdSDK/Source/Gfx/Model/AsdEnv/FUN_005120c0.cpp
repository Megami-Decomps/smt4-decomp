/* NON_MATCHING: a file initializer (its start moved 8 back in wave 93: it stores 0xbf0000 to 0x5c0eb0 itself before the
 * push); the compiler folds the command constants and schedules the array-constructor arguments differently. */
#include "common.h"

/* unit-local: the command words the initializer sets after the header word at 0x5c0eb0. */
struct CommandState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 second;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 third;
};

extern "C" {
extern u32 DAT_005c0eb0;
extern u32 DAT_00646598[24];
extern CommandState DAT_005c0eb4;
void FUN_001f3dd0(void *element);
void __aeabi_vec_ctor_nocookie_nodtor(void *elements, void (*constructor)(void *), u32 stride, u32 count);

/* Sets the command header, constructs the command array and sets the default commands. */
void FUN_005120c0(void)
{
    DAT_005c0eb0 = 0xBF0000;
    __aeabi_vec_ctor_nocookie_nodtor(DAT_00646598, FUN_001f3dd0, 4, 24);
    DAT_005c0eb4.first = 0xF0111;
    DAT_005c0eb4.second = 0xF0110;
    DAT_005c0eb4.third = 0x803F0112;
}

} /* extern "C" */
