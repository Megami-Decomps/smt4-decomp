/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bda30` (_code @ 0x2bda30, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: nw_snd_SoundPlayer_detail_SortPriorityList. */


void FUN_002bda30(int *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  piVar2 = param_1;
  if (param_2 != 0) {
    piVar2 = (int *)(unsigned int)*(unsigned char *)((int)param_1 + 0x8b);
  }
  if (param_2 != 0 && piVar2 != (int *)0x2) {
    temp_v0 = *(char *)((int)param_1 + 0x85);
    temp_v3 = temp_v0 == '\0';
    if (temp_v3) {
      temp_v0 = *(char *)((int)param_1 + 0x86);
    }
    if (!temp_v3 || temp_v0 != '\0') {
      temp_v1 = param_1[0x1c];
      temp_v2 = param_1[0x1b];
      if (temp_v1 >= temp_v2) {
        temp_v4 = (float)param_1[0x1a];
        temp_v5 = (float)param_1[0x1a];
      }
      else {
        temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (((float)param_1[0x1a] - (float)param_1[0x19]) * temp_v4) / temp_v5;
        temp_v4 = temp_v5 + (float)param_1[0x19];
      }
      temp_v6 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v1 < temp_v2) {
        temp_v7 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (((float)param_1[0x1a] - (float)param_1[0x19]) * temp_v7) / temp_v5 +
                (float)param_1[0x19];
      }
      param_1[0x19] = (int)temp_v5;
      param_1[0x1a] = 0;
      param_1[0x1b] = (int)(temp_v4 * temp_v6);
      param_1[0x1c] = 0;
      *(unsigned char *)(param_1 + 0x26) = 0;
      if (param_1[4] != 0) {
        nw_snd_SoundPlayer_detail_SortPriorityList(param_1[4],param_1);
      }
      (**(romwright_code **)(*param_1 + 0x24))(param_1);
      *(unsigned char *)((int)param_1 + 0x87) = 0;
      *(unsigned char *)((int)param_1 + 0x8b) = 0;
      *(unsigned char *)(param_1 + 0x23) = 0;
      *(unsigned char *)(param_1 + 0x22) = 1;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x002bdb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  return;
}
