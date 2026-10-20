/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00390164` (_code @ 0x390164, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ce938(int *, int, int, unsigned int);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

/* Supplied declaration required: FUN_002ce938. */


int * FUN_00390164(int *param_1,int param_2,short *param_3,int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  short *psVar6;
  int temp_v3;
  int temp_v4;
  short *psVar9;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v2 = param_4 * 2 - 2;
  temp_v0 = (short)param_4;
  piVar4 = param_1;
  FUN_002ce938(param_1,(int)(short)(((short)param_2 + 1) * temp_v0),
               (int)(short)((short)param_2 * (short)temp_v2),param_5);
  temp_v3 = *(int *)(*piVar4 + 0x48);
  temp_v7 = 0;
  if (0 < (int)param_1) {
    temp_v1 = (temp_v2 * 3 + 2) / 3;
    temp_v2 = temp_v1 * 3;
    piVar5 = (int *)(param_2 * param_4);
    do {
      if (0 < param_2) {
        piVar5 = (int *)(param_2 * temp_v7);
      }
      temp_v6 = 0;
      temp_v5 = 0;
      if (temp_v5 < param_2) {
        do {
          if (0 < temp_v2) {
            psVar6 = param_3;
            temp_v4 = temp_v2;
            psVar9 = (short *)(temp_v3 + temp_v1 * ((int)piVar5 * 3 + temp_v6) * 2);
            do {
              temp_v4 = temp_v4 - 1;
              *psVar9 = ((short)(int)(int *)(param_2 * param_4) + temp_v0) * (short)(int)(int)temp_v7 + *psVar6 +
                        temp_v0 * (short)temp_v5;
              psVar6 = psVar6 + 1;
              psVar9 = psVar9 + 1;
            } while (temp_v4 != 0);
          }
          temp_v5 = temp_v5 + 1;
          temp_v6 = temp_v6 + 3;
        } while (temp_v5 < param_2);
      }
      temp_v7 = temp_v7 + 1;
      piVar5 = param_1;
    } while (temp_v7 < (int)param_1);
  }
  return piVar4;
}

} /* extern "C" */
