/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a8584` (_code @ 0x4a8584, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordGetScaledMaximum(...);
int FUN_00180118(void);
int FUN_00184310(void);
int FUN_0035ad50(unsigned short *, unsigned char [16]);

/* stack frame of param_3: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short spDC; /* 0xdc: local_dc */
    unsigned short sp130; /* 0x130: local_130 */
} param_3_stack;

/* Supplied declaration required: recordGetScaledMaximum. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00184310. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_0035ad50. */


void FUN_004a8584(unsigned short *param_1,unsigned short *param_2,int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [16];
  unsigned short temp_v6;
  unsigned short temp_v7;
  
  puVar2 = param_2;
  FUN_00184310();
  *param_1 = *puVar2;
  *(char *)(param_1 + 1) = (char)puVar2[1];
  *(char *)((int)param_1 + 3) = (char)puVar2[4];
  *(unsigned char *)(param_1 + 2) = *(unsigned char *)((int)puVar2 + 9);
  temp_v1 = (unsigned int)*puVar2;
  FUN_00180118();
  *(unsigned int *)(param_1 + 0xe) = temp_v1;
  param_1[3] = 0;
  if (param_3 != 0) {
    FUN_0035ad50(param_2,temp_v5);
    param_1[6] = temp_v7;
    temp_v0 = recordGetScaledMaximum(temp_v5);
    param_1[8] = temp_v0;
    param_1[10] = temp_v6;
    temp_v2 = gameGetSlotTable();
    temp_v1 = 0;
    if (temp_v1 < *(unsigned char *)(temp_v2 + 0x1ca3)) {
      do {
        temp_v3 = (int)*(char *)(temp_v2 + temp_v1 + 0x1c88);
        if ((-1 < temp_v3) &&
           (temp_v3 = temp_v2 + temp_v3 * 300, temp_v4 = temp_v3 + 0x68,
           (unsigned short *)(unsigned int)*(unsigned short *)(temp_v3 + 0xca) == param_2)) goto LAB_004a8668;
        temp_v1 = (temp_v1 + 1) & 0xffff;
      } while (temp_v1 < *(unsigned char *)(temp_v2 + 0x1ca3));
    }
    temp_v4 = 0;
LAB_004a8668:
    param_1[7] = *(unsigned short *)(temp_v4 + 100);
    temp_v0 = recordGetScaledMaximum(temp_v4);
    param_1[9] = temp_v0;
    temp_v6 = *(unsigned short *)(temp_v4 + 0x10);
  }
  else {
    FUN_0035ad50(param_2,temp_v5);
    param_1[6] = temp_v7;
    temp_v0 = recordGetScaledMaximum(temp_v5);
    param_1[8] = temp_v0;
    param_1[10] = temp_v6;
    FUN_0035ad50(param_2,temp_v5);
    param_1[7] = temp_v7;
    temp_v0 = recordGetScaledMaximum(temp_v5);
    param_1[9] = temp_v0;
  }
  param_1[0xb] = temp_v6;
  return;
}

} /* extern "C" */
