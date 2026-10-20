/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec68a` (_code @ 0x2ec68a, 0x62 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea668(unsigned char [88]);
int FUN_002ea6bc(...);
int FUN_002ea6cc(...);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_5_stack;

/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: FUN_002ea6bc. */
/* Supplied declaration required: FUN_002ea6cc. */


void FUN_002ec68a(int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [88];
  unsigned char temp_v2 [20];
  int iStack_24;
  int iStack_20;
  int temp_v3;
  int iStack_18;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  temp_v3 = param_3;
  iStack_18 = param_4;
  FUN_002ea668(temp_v1);
  FUN_002ea6bc(temp_v1,param_1 + 0x2c,0x40);
  for (temp_v0 = 0; temp_v0 < param_4; temp_v0 = temp_v0 + 1) {
    if ((*(int *)(param_2 + temp_v0 * 4) != 0) && (*(int *)(temp_v3 + temp_v0 * 4) != 0)) {
      FUN_002ea6bc(temp_v1);
    }
  }
  FUN_002ea6cc(temp_v1);
  FUN_002ea6bc(param_5,param_1 + 0x6d,0x40);
  FUN_002ea6bc(param_5,temp_v2,0x10);
  FUN_002ea6cc(param_5);
  return;
}

} /* extern "C" */
