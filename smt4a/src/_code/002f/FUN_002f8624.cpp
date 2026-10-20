/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8624` (_code @ 0x2f8624, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031160c(int *);
int keyValueCopyConstruct(int *, unsigned short *);

/* stack frame of param_3: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp34; /* 0x34: local_34 */
} param_3_stack;

/* Supplied declaration required: FUN_0031160c. */
/* Supplied declaration required: keyValueCopyConstruct. */


void FUN_002f8624(unsigned int *param_1,int param_2,unsigned short *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  int *piVar4;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v2 = 0;
  puVar2 = *(unsigned short **)(param_2 + 4);
  temp_v1 = (*(int *)(param_2 + 8) - (int)puVar2) >> 3;
  while (temp_v0 = temp_v1, 0 < temp_v0) {
    temp_v1 = temp_v0 / 2;
    if (puVar2[temp_v1 * 4] < *param_3) {
      puVar2 = puVar2 + temp_v1 * 4 + 4;
      temp_v1 = (temp_v0 - temp_v1) - 1;
    }
  }
  puVar1 = *(unsigned short **)(param_2 + 8);
  if ((puVar1 == puVar2) || (*param_3 < *puVar2)) {
    piVar4 = (int *)(param_2 + 4);
    temp_v1 = *piVar4;
    if ((puVar1 != *(unsigned short **)(param_2 + 0xc)) && (puVar1 == puVar2)) {
      *(unsigned short **)(param_2 + 8) = puVar1 + 4;
      keyValueCopyConstruct(piVar4,puVar1);
    }
    else {
      FUN_0031160c(piVar4);
    }
    puVar2 = (unsigned short *)(*piVar4 + (((int)puVar2 - temp_v1) >> 3) * 8);
    temp_v2 = 1;
  }
  *param_1 = (unsigned int)puVar2;
  *(unsigned char *)(param_1 + 1) = temp_v2;
  return;
}

} /* extern "C" */
