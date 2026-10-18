/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229b10` (_code @ 0x229b10, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern int DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_00229ad4. */
extern int FUN_0027e3b8(int);
/* Supplied declaration required: FUN_0027e3f8. */
/* Supplied declaration required: FUN_002ae164. */


void FUN_00229b10(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = FUN_0027e3b8(DAT_00435d48);
  if (temp_v2 == 0) {
    temp_v3 = (int)*(short *)(*(int *)(param_2 + 0x20) + 0x6e);
    temp_v2 = DAT_00435d48;
    if (*(short *)(*(int *)(param_2 + 0x28) + 0x14c) != 0xb) {
      FUN_0027e3f8(DAT_00435d48,3,temp_v3,0);
    }
    else {
      FUN_0027e3f8(DAT_00435d48,7,temp_v3,0);
    }
    if (temp_v2 != 0) {
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x18;
      return;
    }
  }
  temp_v1 = *(short *)(*(int *)(param_2 + 0x28) + 0x14c);
  if (temp_v1 != 3) {
    if (temp_v1 == 0xd) {
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 8;
      return;
    }
  }
  else {
    temp_v2 = (int)*(short *)(*(int *)(param_2 + 0x28) + 0x14e);
    FUN_002ae164();
    temp_v0 = '\0';
    if (temp_v2 != 0) {
      temp_v0 = *(char *)(temp_v2 + 0x4b);
    }
    if (((*(unsigned int *)(*param_1 + 0x44a8) & 0x800) == 0) && (temp_v2 != 0 && temp_v0 != '\0')) {
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0xc;
      return;
    }
  }
  FUN_00229ad4(param_1);
  return;
}
