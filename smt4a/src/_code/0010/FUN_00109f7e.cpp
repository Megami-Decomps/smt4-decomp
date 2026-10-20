/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109f7e` (_code @ 0x109f7e, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_uidivmod(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_002ec674(int);
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_00109f7e(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned char *pbVar6;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  temp_v6 = 0;
  do {
    temp_v1 = temp_v6 + 1;
    *(char *)(param_1 + temp_v6 + 0x28) = (char)temp_v6;
    temp_v6 = temp_v1;
  } while (temp_v1 < 0x100);
  temp_v6 = 0;
  *(unsigned char *)(param_1 + 0x229) = 0;
  *(unsigned char *)(param_1 + 0x228) = 0;
  temp_v7 = 0;
  temp_v2 = FUN_002ec674(param_1 + 8);
  temp_v5 = *(int *)(param_1 + 0x14);
  temp_v3 = *(int *)(param_1 + 0x18);
  temp_v1 = 0;
  do {
    temp_v0 = *(unsigned char *)(param_1 + temp_v1 + 0x28);
    temp_v7 = (unsigned int)*(unsigned char *)(temp_v2 + temp_v6) + (unsigned int)temp_v0 + temp_v7;
    pbVar6 = (unsigned char *)(param_1 + temp_v7 + 0x28);
    *(unsigned char *)(param_1 + temp_v1 + 0x28) = *pbVar6;
    *pbVar6 = temp_v0;
    __aeabi_uidivmod(temp_v6 + 1,temp_v3 - temp_v5);
    temp_v1 = temp_v1 + 1;
    temp_v6 = (unsigned int)temp_v4;
  } while (temp_v1 < 0x100);
  return;
}

} /* extern "C" */
