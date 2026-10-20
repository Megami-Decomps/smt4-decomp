/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300064` (_code @ 0x300064, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringDestroy(int *);
int onlineStringAssign(...);
int FUN_002fd768(int *, int);
int FUN_00300048(void);

/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: onlineStringAssign. */
extern int FUN_002ea704(void);
extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002fd768. */
/* Supplied declaration required: FUN_00300048. */


unsigned int FUN_00300064(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  temp_v0 = FUN_002eb5f4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002ea704(), temp_v0 != 0)) {
    temp_v1 = *(unsigned int *)(param_1 + 0x94);
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        FUN_00300048();
        return 0;
      }
      temp_v0 = FUN_002eb5f4();
      temp_v3 = *(int *)(temp_v0 + 0xd0);
      temp_v0 = FUN_002ea704();
      FUN_002fd768(&uStack_18,temp_v0 + 0x120);
      onlineStringAssign(temp_v3 + 0x110,&uStack_18);
      onlineStringDestroy(&uStack_18);
    }
    else {
      temp_v0 = FUN_002eb5f4();
      onlineStringAssign(*(int *)(temp_v0 + 0xd0) + 0x110,param_1 + 0x88);
    }
    if (*(short *)(param_1 + 0x90) != 0) {
      temp_v0 = FUN_002eb5f4();
      temp_v2 = *(unsigned short *)(param_1 + 0x90);
      temp_v0 = *(int *)(temp_v0 + 0xd0);
    }
    else {
      temp_v0 = FUN_002eb5f4();
      temp_v0 = *(int *)(temp_v0 + 0xd0);
      temp_v2 = 0x30ed;
    }
    *(unsigned short *)(temp_v0 + 0x118) = temp_v2;
    return 1;
  }
  return 0;
}

} /* extern "C" */
