/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337f9c` (_code @ 0x337f9c, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ce938(int *, int, int, unsigned int);

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

/* Supplied declaration required: FUN_002ce938. */


int * FUN_00337f9c(int *param_1,int param_2,int param_3,short param_4,short *param_5,
                  unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  int *piVar6;
  int temp_v3;
  int temp_v4;
  short *psVar9;
  int temp_v5;
  int temp_v6;
  short *psVar12;
  
  temp_v0 = (short)param_2;
  piVar4 = param_1;
  FUN_002ce938(param_1,(int)(short)(temp_v0 * param_4),(int)(short)(temp_v0 * (short)param_3),param_6);
  temp_v4 = 0;
  temp_v2 = *(int *)(*piVar4 + 0x48);
  if (0 < (int)param_1) {
    piVar3 = (int *)((param_3 * 3 + 2) / 3);
    temp_v1 = (temp_v0 - 1) * param_4 + param_4;
    piVar6 = piVar3;
    do {
      if (0 < param_2) {
        piVar6 = (int *)(param_2 * temp_v4);
      }
      temp_v6 = 0;
      temp_v5 = 0;
      if (temp_v5 < param_2) {
        do {
          if (0 < (int)piVar3 * 3) {
            temp_v3 = (int)piVar3 * 3;
            psVar9 = param_5;
            psVar12 = (short *)(temp_v2 + (int)piVar3 * ((int)piVar6 * 3 + temp_v6) * 2);
            do {
              temp_v3 = temp_v3 - 1;
              *psVar12 = temp_v1 * (short)temp_v4 + *psVar9 +
                         param_4 * (short)temp_v5 + (temp_v0 * param_4 - temp_v1);
              psVar9 = psVar9 + 1;
              psVar12 = psVar12 + 1;
            } while (temp_v3 != 0);
          }
          temp_v5 = temp_v5 + 1;
          temp_v6 = temp_v6 + 3;
        } while (temp_v5 < param_2);
      }
      temp_v4 = temp_v4 + 1;
      piVar6 = param_1;
    } while (temp_v4 < (int)param_1);
  }
  return piVar4;
}

} /* extern "C" */
