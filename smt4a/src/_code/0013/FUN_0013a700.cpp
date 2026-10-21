/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a700` (_code @ 0x13a700, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSoundSelectCurrentSlot(int);
int FUN_00144564(void);
int FUN_00144a54(void);
int FUN_00145048(void);
int FUN_00151340(int);
int FUN_00154e34(int);
int jyoucyuGetTableEntry(int);
int sysMemClear(unsigned char *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char g_soundVolumeSetting; /* 0x588fb4 */
extern unsigned char g_eventQueueEntries; /* 0x61955c */

/* Supplied declaration required: asdSoundSelectCurrentSlot. */
/* Supplied declaration required: FUN_00144564. */
/* Supplied declaration required: FUN_00144a54. */
/* Supplied declaration required: FUN_00145048. */
/* Supplied declaration required: FUN_00151340. */
/* Supplied declaration required: FUN_00154e34. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: sysMemClear. */


void FUN_0013a700(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    asdSoundSelectCurrentSlot(0);
    FUN_00151340(0x6000000);
    asdSoundSelectCurrentSlot(1);
    FUN_00151340(0x6000002);
    asdSoundSelectCurrentSlot(3);
    FUN_00151340(0x6000001);
    FUN_00144564();
    FUN_00144a54();
    FUN_00145048();
    FUN_00154e34((*(unsigned char *)((unsigned char *)&g_soundVolumeSetting + 0x1)));
    sysMemClear(&g_eventQueueEntries,0x80);
    jyoucyuGetTableEntry(1);
    return;
  }
  return;
}

} /* extern "C" */
