/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045af48` (_code @ 0x45af48, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_001b14dc. */
extern unsigned int FUN_001bc2ec(unsigned int);


void FUN_0045af48(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int *param_5)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2;
  unsigned int *temp_v3;
  unsigned int *temp_v4;
  
  temp_v1 = FUN_001bc2ec(param_3);
  *param_1 = param_3;
  *(unsigned char *)(param_1 + 1) = *(unsigned char *)((int)param_5 + 0x22);
  *(unsigned char *)((int)param_1 + 5) = 0;
  param_1[2] = param_5[1];
  param_1[3] = param_5[2];
  param_1[4] = param_5[3];
  param_1[5] = param_5[4];
  param_1[6] = param_5[5];
  param_1[7] = param_5[6];
  param_1[9] = param_4;
  *(unsigned char *)(param_1 + 10) = *(unsigned char *)((int)param_5 + 0x23);
  param_1[0xb] = param_5[1];
  param_1[0xc] = param_5[2];
  param_1[0xd] = param_5[7];
  *(unsigned char *)(param_1 + 0xe) = *(unsigned char *)(param_5 + 8);
  param_1[0x10] = param_5[1];
  param_1[0x11] = param_5[2];
  if ((*(char *)((int)param_5 + 0x21) == '\0') &&
     (temp_v0 = *(char *)((int)param_5 + 0x22), temp_v0 != '\0')) {
    if (temp_v0 == '\x02') {
      temp_v2 = 2;
    }
    else if (temp_v0 == '\x03') {
      temp_v2 = 3;
    }
    else if (temp_v0 == '\x04') {
      temp_v2 = 4;
    }
    else {
      temp_v2 = 0;
    }
  }
  else {
    temp_v2 = 0;
  }
  *(unsigned char *)(param_1 + 0x18) = temp_v2;
  *(unsigned char *)((int)param_1 + 0x61) = 1;
  param_1[0x19] = *param_5;
  temp_v1 = temp_v1 >> 3;
  *param_2 = param_5[2] | (param_5[1] << 0x10);
  param_2[1] = 0xf0082;
  param_2[2] = 0;
  param_2[3] = 0x40084;
  param_2[4] = temp_v1;
  param_2[5] = 0xf0085;
  param_2[6] = (unsigned int)*(unsigned char *)(param_1 + 0x18);
  temp_v4 = param_2 + 8;
  param_2[7] = 0xf008e;
  temp_v3 = param_2;
  FUN_001b14dc(&temp_v3,param_1 + 0x12);
  if (*(char *)((int)param_5 + 0x21) == '\0') {
    *temp_v4 = param_5[2] | (param_5[1] << 0x10);
    temp_v4[1] = 0xf0092;
    temp_v4[2] = 0;
    temp_v4[3] = 0x40094;
    temp_v4[4] = temp_v1;
    temp_v4[5] = 0xf0095;
    puVar3 = temp_v4 + 7;
    temp_v4[6] = (unsigned int)*(unsigned char *)(param_1 + 0x18);
    temp_v4 = temp_v4 + 8;
    *puVar3 = 0xf0096;
    FUN_001b14dc(&temp_v3,param_1 + 0x14);
    if (*(char *)((int)param_5 + 0x21) == '\0') {
      *temp_v4 = param_5[2] | (param_5[1] << 0x10);
      temp_v4[1] = 0xf009a;
      temp_v4[2] = 0;
      temp_v4[3] = 0x4009c;
      temp_v4[4] = temp_v1;
      temp_v4[5] = 0xf009d;
      puVar3 = temp_v4 + 7;
      temp_v4[6] = (unsigned int)*(unsigned char *)(param_1 + 0x18);
      temp_v4 = temp_v4 + 8;
      *puVar3 = 0xf009e;
      FUN_001b14dc(&temp_v3,param_1 + 0x16);
    }
  }
  return;
}
