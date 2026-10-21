/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00250798` (_code @ 0x250798, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int positionStateSet(unsigned int, int, int);
int FUN_002bd82c(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00250844; /* 0x250844 */
extern int g_uiQuest; /* 0x43dd50 */

/* Supplied declaration required: positionStateSet. */
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int asdTextCreate(unsigned int);
extern unsigned int asdLoadFileSyncDefault(unsigned char *);


void FUN_00250798(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = g_uiQuest;
  temp_v1 = asdLoadFileSyncDefault(&LAB_00250844);
  *(unsigned int *)(temp_v0 + 0x5e4) = temp_v1;
  temp_v1 = asdTextCreate(0);
  *(unsigned int *)(temp_v0 + 0x5d4) = temp_v1;
  FUN_002bd82c(temp_v1,0x320202ff);
  positionStateSet(*(unsigned int *)(temp_v0 + 0x5d4),0,0x646464ff);
  temp_v1 = asdTextCreate(0);
  *(unsigned int *)(temp_v0 + 0x5d8) = temp_v1;
  FUN_002bd82c(temp_v1,0x323232ff);
  positionStateSet(*(unsigned int *)(temp_v0 + 0x5d8),0,0x646464ff);
  temp_v1 = asdTextCreate(0);
  *(unsigned int *)(temp_v0 + 0x5dc) = temp_v1;
  FUN_002bd82c(temp_v1,0x320202ff);
  positionStateSet(*(unsigned int *)(temp_v0 + 0x5dc),0,0x646464ff);
  return;
}

} /* extern "C" */
