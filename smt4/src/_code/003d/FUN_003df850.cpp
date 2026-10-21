/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df850` (_code @ 0x3df850, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int resultPairInitialize(unsigned int, int);

/* stack frame of param_3: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned char sp17; /* 0x17: local_17 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: resultPairInitialize. */
extern int FUN_0035fd5c(int *, unsigned int *, unsigned int, unsigned int);
extern unsigned int ll_sdiv(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_003df850(unsigned int param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2 [2];
  int temp_v3;
  unsigned int uStack_24;
  unsigned char temp_v4;
  
  puVar1 = (unsigned int *)*param_2;
  temp_v4 = 1;
  temp_v3 = *puVar1;
  uStack_24 = puVar1[1];
  temp_v0 = FUN_0035fd5c(temp_v2,(unsigned int *)&temp_v3,puVar1[9],puVar1[10]);
  if (-1 < temp_v0) {
    temp_v0 = 0;
  }
  if (-1 < temp_v0) {
    temp_v1 = ll_sdiv((temp_v2[0] + 0x1ffffU) & 0xfffe0000,0,0x20000,0);
    temp_v0 = 0;
    *param_3 = temp_v1;
  }
  resultPairInitialize(param_1,temp_v0);
  return;
}

} /* extern "C" */
