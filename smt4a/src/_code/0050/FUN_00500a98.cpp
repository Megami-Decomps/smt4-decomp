/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500a98` (_code @ 0x500a98, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00177abc(unsigned int *, unsigned int *);
int FUN_00177cdc(unsigned int *, unsigned int *, int);
int FUN_00192de4(unsigned int *, unsigned int *, int);
int FUN_00500d38(unsigned int *, unsigned int *, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_00177abc. */
/* Supplied declaration required: FUN_00177cdc. */
/* Supplied declaration required: FUN_00192de4. */
/* Supplied declaration required: FUN_00500d38. */


void FUN_00500a98(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  if (param_3 != 0) {
    *param_2 = 1;
    param_2[1] = 0xf0111;
    param_2[2] = 1;
    param_2[3] = 0xf0110;
    param_2 = param_2 + 4;
  }
  temp_v1 = 0;
  if (*(char *)(param_1 + 0x17) != '\0') {
    if (*(char *)((int)param_1 + 0x5d) != '\0') {
      if ((*(char *)((int)param_1 + 0x5d) == '\x01') && (*(char *)((int)param_1 + 0x5e) == '\x01'))
      {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 1;
      }
    }
    else if (*(char *)((int)param_1 + 0x5e) == '\0') {
      temp_v1 = 2;
    }
    else {
      temp_v1 = 1;
    }
  }
  *param_2 = temp_v1;
  param_2[1] = 0xf0040;
  puVar3 = param_1;
  FUN_00500d38(param_1,param_2 + 2,0);
  if (*(char *)(param_1 + 4) != '\0') {
    *puVar3 = 0xe40000;
    puVar3[1] = 0x30100;
    puVar3[2] = 0x1010000;
    puVar3[3] = 0xf0101;
    puVar3[4] = (unsigned int)*(unsigned char *)((int)param_1 + 0x11);
    puVar3[5] = 0xf0102;
    puVar3 = puVar3 + 6;
  }
  puVar4 = param_1 + 6;
  FUN_00177cdc(puVar4,puVar3,0);
  *puVar4 = (unsigned int)(*(char *)(param_1 + 0xc) != '\0') | ((unsigned int)*(unsigned char *)((int)param_1 + 0x32) << 4) |
            ((unsigned int)*(unsigned char *)((int)param_1 + 0x31) << 8);
  puVar4[1] = 0x30104;
  puVar4[2] = (unsigned int)(*(char *)(param_1 + 0xe) != '\0') | ((unsigned int)*(unsigned char *)(param_1 + 0xf) << 4) |
              ((unsigned int)*(unsigned char *)((int)param_1 + 0x39) << 8) | (param_1[0x10] << 0x10) |
              (param_1[0x11] << 0x18);
  puVar4[3] = 0xf0105;
  puVar4[4] = (unsigned int)*(unsigned char *)(param_1 + 0x12) | ((unsigned int)*(unsigned char *)((int)param_1 + 0x49) << 4) |
              ((unsigned int)*(unsigned char *)((int)param_1 + 0x4a) << 8);
  puVar4[5] = 0xf0106;
  temp_v0 = *(unsigned char *)(param_1[0x16] + 0x50);
  temp_v4 = temp_v0 & 1;
  if ((temp_v0 & 1) != 0) {
    temp_v4 = 0x100;
  }
  if ((temp_v0 & 2) == 0) {
    temp_v5 = 0;
  }
  else {
    temp_v5 = 0x200;
  }
  if ((temp_v0 & 4) == 0) {
    temp_v6 = 0;
  }
  else {
    temp_v6 = 0x400;
  }
  if ((temp_v0 & 8) == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0x800;
  }
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    temp_v3 = 0;
  }
  else {
    temp_v3 = 0x1000;
  }
  puVar4[6] = temp_v3 | (unsigned int)(*(char *)(param_1 + 0x15) != '\0') |
                      ((unsigned int)*(unsigned char *)((int)param_1 + 0x56) << 4) | temp_v4 | temp_v5 | temp_v6 | temp_v2;
  puVar4[7] = 0xf0107;
  puVar3 = param_1 + 0x19;
  FUN_00177abc(puVar3,puVar4 + 8);
  FUN_00192de4(param_1 + 0x1f,puVar3,0);
  return;
}

} /* extern "C" */
