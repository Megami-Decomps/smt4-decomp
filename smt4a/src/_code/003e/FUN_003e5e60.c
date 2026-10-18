/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5e60` (_code @ 0x3e5e60, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0015f858. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_003180c4. */
extern int FUN_00331194(void);
/* Supplied declaration required: FUN_003491e8. */
extern int FUN_00357bc8(unsigned int, char *);
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c3e14. */


void FUN_003e5e60(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (((*(int *)(param_1 + 8) == 1) &&
        (temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x18)), temp_v0 == 2)) &&
       (temp_v0 = FUN_00331194(), temp_v0 != 0)) {
      temp_v0 = FUN_002a4b74();
      if (temp_v0 != -1) {
        if (temp_v0 != 3) {
          *(int *)(param_1 + 0x4c) = temp_v0;
          temp_v2 = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 4;
          *(unsigned int *)(param_1 + 8) = 0;
          *(unsigned int *)(param_1 + 0xc) = temp_v2;
        }
        else {
          temp_v2 = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 6;
          *(unsigned int *)(param_1 + 8) = 0;
          *(unsigned int *)(param_1 + 0xc) = temp_v2;
        }
      }
      else {
        temp_v2 = *(unsigned int *)(param_1 + 4);
        *(unsigned int *)(param_1 + 4) = 7;
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(param_1 + 0xc) = temp_v2;
      }
      FUN_003c3e14();
      FUN_003491e8();
      return;
    }
  }
  else {
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x26);
    if (temp_v1 != 0) {
      FUN_0015f858(temp_v1,0);
      FUN_003180c4(0,temp_v1);
    }
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x32);
    if (temp_v1 != 0) {
      FUN_0015f858(temp_v1,0);
      FUN_003180c4(1,temp_v1);
    }
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x3e);
    if (temp_v1 != 0) {
      FUN_0015f858(temp_v1,0);
      FUN_003180c4(2,temp_v1);
    }
    FUN_003c1060();
    temp_v0 = *(int *)(param_1 + 0xc);
    if (temp_v0 != 4) {
      if (temp_v0 != 6) {
        if (temp_v0 != 5) {
          temp_v0 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),"npcShop_Select_00");
        }
        else {
          temp_v0 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),"npcShop_Select_03");
        }
      }
      else {
        temp_v0 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),"npcShop_Select_01");
      }
    }
    else {
      temp_v0 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),"npcShop_Select_02");
    }
    if (-1 < temp_v0) {
      FUN_00275f44(*(unsigned int *)(param_1 + 0x18));
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}
