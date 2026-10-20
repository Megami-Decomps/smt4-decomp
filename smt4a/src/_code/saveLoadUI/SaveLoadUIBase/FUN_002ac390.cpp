/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac390` (_code @ 0x2ac390, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(...);
int wordPairCopy(unsigned int, unsigned int);
int rt_memcpy_w(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00588e1c; /* 0x588e1c */
extern unsigned int DAT_00588e20; /* 0x588e20 */
extern unsigned int DAT_00588e24; /* 0x588e24 */

extern unsigned int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: wordPairCopy. */
extern unsigned int configGetSettings(void);
extern unsigned int gameDataBlocksGetTable(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002ac390(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_00588e1c == 0) {
    temp_v0 = 0x100;
    asdMemoryAlloc(0x100,0x100,0,0x80,1);
    temp_v1 = 0x100;
    DAT_00588e1c = temp_v0;
    asdMemoryAlloc(0x100,0x100,0,8,1);
    temp_v0 = 0x100;
    temp_v2 = 1;
    DAT_00588e20 = temp_v1;
    asdMemoryAlloc(0x100,0x100,0,0x2a71c);
    DAT_00588e24 = temp_v0;
    temp_v0 = gameDataBlocksGetTable();
    rt_memcpy_w(DAT_00588e1c,temp_v0,0x80);
    temp_v0 = configGetSettings();
    wordPairCopy(DAT_00588e20,temp_v0);
    temp_v0 = gameDataBlocksGetSaveData();
    rt_memcpy_w(DAT_00588e24,temp_v0,0x2a71c,temp_v2);
    return;
  }
  return;
}

} /* extern "C" */
