/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023088c` (_code @ 0x23088c, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0022e58c. */
/* Supplied declaration required: FUN_00250fc4. */
/* Supplied declaration required: FUN_00295cbc. */
/* Supplied declaration required: FUN_00295ea8. */
extern int FUN_00297688(void);
/* Supplied declaration required: FUN_0029c0fc. */
extern unsigned int FUN_002ae650(unsigned int);
extern int FUN_002b47cc(unsigned int);
/* Supplied declaration required: FUN_002b4854. */


void FUN_0023088c(unsigned short *param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (*param_1 != 0) {
    temp_v4 = 99999999;
    if (param_2 < 0) {
      FUN_00250fc4(*param_1,-param_2);
      if (param_3 != 0) {
        temp_v2 = (unsigned int)*param_1;
        temp_v0 = FUN_002ae650(temp_v2);
        temp_v3 = 0;
        switch(temp_v0) {
        case 1:
          FUN_002b4854();
          temp_v3 = temp_v4;
          if (temp_v2 != 0) {
            temp_v3 = *(int *)(temp_v2 + 0x7c);
          }
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          temp_v1 = FUN_002b47cc(temp_v2);
          temp_v3 = temp_v4;
          if (temp_v1 != 0) {
            temp_v3 = *(int *)(temp_v1 + 0xa0);
          }
          break;
        case 10:
          FUN_0022e58c();
          temp_v3 = temp_v4;
          if (temp_v2 != 0) {
            temp_v3 = *(int *)(temp_v2 + 0x2c);
          }
        }
        if ((param_1[1] & 2) != 0) {
          temp_v3 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v3) / 100;
        }
        temp_v3 = temp_v3 * -param_2;
        FUN_00295ea8(temp_v3);
        if (-1 < temp_v3) {
          FUN_0029c0fc(0x1f,temp_v3);
          return;
        }
        FUN_0029c0fc(0x1e,-temp_v3);
        return;
      }
    }
    else {
      FUN_00295cbc();
      if (param_3 != 0) {
        temp_v2 = (unsigned int)*param_1;
        temp_v0 = FUN_002ae650(temp_v2);
        temp_v3 = 0;
        switch(temp_v0) {
        case 1:
          FUN_002b4854();
          temp_v3 = temp_v4;
          if (temp_v2 != 0) {
            temp_v3 = *(int *)(temp_v2 + 0x78);
          }
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          temp_v1 = FUN_002b47cc(temp_v2);
          temp_v3 = temp_v4;
          if (temp_v1 != 0) {
            temp_v3 = *(int *)(temp_v1 + 0x9c);
          }
        }
        if ((param_1[1] & 2) != 0) {
          temp_v3 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v3) / 100;
        }
        temp_v4 = FUN_00297688();
        if (temp_v4 == 2) {
          temp_v3 = temp_v3 * 3;
        }
        temp_v3 = -temp_v3 * param_2;
        FUN_00295ea8(temp_v3);
        if (-1 < temp_v3) {
          FUN_0029c0fc(0x1f,temp_v3);
          return;
        }
        FUN_0029c0fc(0x1e,-temp_v3);
        return;
      }
    }
  }
  return;
}
