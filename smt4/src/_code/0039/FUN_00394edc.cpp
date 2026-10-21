/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394edc` (_code @ 0x394edc, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable08Sub2GetRecord(void);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int affinityShouldReplaceState(unsigned short, unsigned int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */


void FUN_00394edc(int param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6 [3];
  
  temp_v6[0] = 0;
  temp_v6[1] = 0;
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 8);
  if (temp_v1 != 0) {
    dataTable08Sub2GetRecord();
    temp_v6[0] = temp_v1;
  }
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0xc);
  if (temp_v1 != 0) {
    dataTable08Sub2GetRecord();
    temp_v6[1] = temp_v1;
  }
  temp_v4 = 0;
  do {
    temp_v5 = 0;
    temp_v1 = 0;
    temp_v3 = temp_v4 * 2 + 0x74;
    do {
      if (temp_v6[temp_v1] != 0) {
        temp_v0 = ((int)*(short *)(temp_v6[temp_v1] + temp_v3) & 0x3ffffU) >> 10;
        temp_v2 = affinityShouldReplaceState(*param_2 >> 10,temp_v0);
        if (temp_v2 != 0) {
          *param_2 = (*param_2 & 0x3ff) | (unsigned short)(temp_v0 << 10);
          temp_v5 = (int)((unsigned int)*(unsigned short *)(temp_v6[temp_v1] + temp_v3) << 0x16) >> 0x16;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 2);
    temp_v4 = temp_v4 + 1;
    *param_2 = (*param_2 & 0xfc00) | (((*param_2 & 0x3ff) + (short)temp_v5) & 0x3ff);
    param_2 = param_2 + 1;
  } while (temp_v4 < 0x12);
  return;
}

} /* extern "C" */
