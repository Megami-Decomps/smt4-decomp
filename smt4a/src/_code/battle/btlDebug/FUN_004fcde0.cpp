/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fcde0` (_code @ 0x4fcde0, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(int, int, int, unsigned int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int DAT_005712f0; /* 0x5712f0 */
extern unsigned int DAT_00573c20; /* 0x573c20 */
extern unsigned int DAT_00573c24; /* 0x573c24 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_004102d8. */


unsigned int FUN_004fcde0(short param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  do {
    temp_v0 = *(short *)((int)param_3 + 0x6e);
    if ((-1 < temp_v0) && (temp_v0 < 0x6d)) {
      temp_v1 = btlGetMainState();
      temp_v1 = *(int *)(temp_v1 + 0x1ed4) + temp_v4 * 0x1d0;
      if ((temp_v1 != 0) &&
         (((temp_v3 = *(unsigned int *)(temp_v1 + 0x50), (temp_v3 & 1) != 0 && (temp_v3 & 2) != 0 &&
           (*(short *)(temp_v1 + 0x68) == temp_v0)) && ((temp_v3 & 0x400) != 0)))) {
        temp_v2 = DAT_005712f0;
        FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
        *(unsigned char *)(temp_v2 + 5) = *(unsigned char *)(temp_v2 + 5) | 4;
        *(int *)(temp_v2 + 0x14) = temp_v1;
        *(unsigned char *)(temp_v2 + 4) = 0x2c;
        *(unsigned int *)(temp_v2 + 0x28) = 0x14;
        *(unsigned int *)(temp_v2 + 0x4c) = 0;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x6d);
  temp_v3 = DAT_00573c24 | param_3[1];
  *param_3 = DAT_00573c20 | *param_3;
  param_3[1] = temp_v3;
  temp_v4 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)(short)(param_1 + 0x14),0,param_2);
  *(unsigned char *)(temp_v4 + 4) = 0x2e;
  *(unsigned int **)(temp_v4 + 0x18) = param_3;
  *(unsigned int *)(temp_v4 + 0x28) = 0;
  return 1;
}

} /* extern "C" */
