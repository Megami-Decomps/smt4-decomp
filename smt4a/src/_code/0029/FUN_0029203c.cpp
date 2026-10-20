/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029203c` (_code @ 0x29203c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(...);
int FUN_001bcfb4(...);
int FUN_001cd3ec(...);
int FUN_0024400c(...);
int FUN_003fd63c(...);
int FUN_0040ac08(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_005f0c88; /* 0x5f0c88 */
extern unsigned int DAT_005f0c8c; /* 0x5f0c8c */
extern unsigned int DAT_005f0c90; /* 0x5f0c90 */
extern unsigned int DAT_005f0d44; /* 0x5f0d44 */
extern unsigned int DAT_005f0d48; /* 0x5f0d48 */
extern int DAT_005f0d4c; /* 0x5f0d4c */
extern int DAT_005f15fc; /* 0x5f15fc */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001bcfb4. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: FUN_0024400c. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_0040ac08. */


void FUN_0029203c(void)

{
/* irregular: irregular input(s): in_lr; 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v2 = FUN_00162e8c();
  if (DAT_005f15fc == 5) {
    FUN_003fd63c(0x4d0,0,1);
  }
  if ((*(int *)(temp_v2 + 0x16a0) != 0) &&
     ((DAT_005f15fc == 0x1c || DAT_005f15fc == 0x1d ||
      ((DAT_005f15fc == 0x1e || DAT_005f15fc == 0x1f) || DAT_005f15fc == 0x20)))) {
    FUN_003fd63c(0x4d0,1);
    *(int *)(temp_v2 + 0x16a0) = 0;
  }
  temp_v2 = FUN_0018719c(0x4d0);
  if (temp_v2 != 0) {
    FUN_0024400c();
    temp_v2 = FUN_0018719c(0x4d0);
    if (temp_v2 == 0) {
      return;
    }
    temp_v2 = 0x20;
    FUN_00178b04(0x20,0x531448,0x233);
    temp_v0 = 0;
    if (temp_v2 != 0) {
      temp_v0 = FUN_0040ac08();
    }
    DAT_005f0c88 = temp_v0;
    FUN_001cd3ec();
    temp_v2 = 0x20;
    FUN_00178b04(0x20,0x531448,0x236);
    temp_v0 = 0;
    if (temp_v2 != 0) {
      temp_v0 = FUN_0040ac08();
    }
    DAT_005f0c8c = temp_v0;
    FUN_001cd3ec();
    temp_v2 = 0x20;
    FUN_00178b04(0x20,0x531448,0x239);
    temp_v0 = 0;
    if (temp_v2 != 0) {
      temp_v0 = FUN_0040ac08();
    }
    DAT_005f0c90 = temp_v0;
    FUN_001cd3ec();
    temp_v2 = 0x20;
    FUN_00178b04(0x20,0x531448,0x23c);
    temp_v0 = 0;
    if (temp_v2 != 0) {
      temp_v0 = FUN_0040ac08();
    }
    DAT_005f0d44 = temp_v0;
    FUN_001cd3ec();
    temp_v2 = 0x20;
    FUN_00178b04(0x20,0x531448,0x23f);
    temp_v0 = 0;
    if (temp_v2 != 0) {
      temp_v0 = FUN_0040ac08();
    }
    DAT_005f0d48 = temp_v0;
    FUN_001cd3ec();
    temp_v1 = 0x20;
    FUN_00178b04(0x20,0x531448,0x242);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    DAT_005f0d4c = temp_v2;
    FUN_001bcfb4("map/all/furin_lg.bam",temp_v2 + 0x10,1,0,0,0x80,unaff_r4,in_lr);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}

} /* extern "C" */
