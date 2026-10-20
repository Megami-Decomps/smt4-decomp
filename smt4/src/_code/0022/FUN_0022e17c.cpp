/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e17c` (_code @ 0x22e17c, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029d770(unsigned short *, unsigned char [14]);
int FUN_002b9024(void);
int FUN_002bd06c(void);

/* stack frame of param_3: 3 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp5E0; /* 0x5e0: local_5e0 */
    unsigned short sp618; /* 0x618: local_618 */
    unsigned short sp61A; /* 0x61a: local_61a */
} param_3_stack;

/* Supplied declaration required: FUN_0029d770. */
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd06c. */


void FUN_0022e17c(unsigned short *param_1,unsigned short *param_2,int param_3)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned char temp_v5 [14];
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned char temp_v8;
  
  puVar1 = param_2;
  FUN_002b9024();
  *param_1 = *puVar1;
  *(char *)(param_1 + 1) = (char)puVar1[1];
  *(char *)((int)param_1 + 3) = (char)puVar1[2];
  *(unsigned char *)(param_1 + 2) = *(unsigned char *)((int)puVar1 + 5);
  temp_v0 = (unsigned int)*puVar1;
  FUN_002bd06c();
  *(unsigned int *)(param_1 + 0xe) = temp_v0;
  param_1[3] = 0;
  if (param_3 == 0) {
    FUN_0029d770(param_2,temp_v5);
    *(unsigned char *)(param_1 + 6) = temp_v8;
    param_1[7] = temp_v6;
    param_1[9] = temp_v7;
    FUN_0029d770(param_2,temp_v5);
    *(unsigned char *)((int)param_1 + 0xd) = temp_v8;
    param_1[8] = temp_v6;
    param_1[10] = temp_v7;
    return;
  }
  FUN_0029d770(param_2,temp_v5);
  *(unsigned char *)(param_1 + 6) = temp_v8;
  param_1[7] = temp_v6;
  param_1[9] = temp_v7;
  temp_v1 = FUN_002a8764();
  temp_v0 = 0;
  if (temp_v0 < *(unsigned char *)(temp_v1 + 0x910b)) {
    do {
      temp_v2 = (int)*(char *)(temp_v1 + temp_v0 + 0x90f0);
      if ((-1 < temp_v2) &&
         (temp_v2 = temp_v1 + temp_v2 * 0x604, temp_v3 = temp_v2 + 0x90,
         (unsigned short *)(unsigned int)*(unsigned short *)(temp_v2 + 0xd6) == param_2)) goto LAB_0022e258;
      temp_v0 = (temp_v0 + 1) & 0xffff;
    } while (temp_v0 < *(unsigned char *)(temp_v1 + 0x910b));
  }
  temp_v3 = 0;
LAB_0022e258:
  *(unsigned char *)((int)param_1 + 0xd) = *(unsigned char *)(temp_v3 + 0x48);
  param_1[8] = *(unsigned short *)(temp_v3 + 0xe);
  param_1[10] = *(unsigned short *)(temp_v3 + 0x10);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v3 + temp_v1;
    temp_v1 = temp_v1 + 2;
    temp_v4 = param_1[3] + (unsigned short)*(unsigned char *)(temp_v2 + 0x8c);
    param_1[3] = temp_v4;
    param_1[3] = temp_v4 + *(unsigned char *)(temp_v2 + 0x8d);
  } while (temp_v1 < 0x500);
  return;
}

} /* extern "C" */
