/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340ad4` (_code @ 0x340ad4, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd498(int, unsigned int, int);
int FUN_002d5a08(int, int, unsigned int, int, int, int, unsigned int);
int FUN_003407d0(int, int);

/* stack frame of param_4: 9 slot(s), 30 byte(s) */
typedef struct {
    unsigned char sp23; /* 0x23: local_23 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

/* Supplied declaration required: FUN_002bd498. */
extern unsigned int asdMemoryGetAllocatorA(void);
/* Supplied declaration required: FUN_002d5a08. */
/* Supplied declaration required: FUN_003407d0. */
extern unsigned int FUN_0036ec8c(unsigned int *, unsigned int);


void FUN_00340ad4(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_34;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned char *)(param_1 + 0x1c) = 0;
  *(unsigned char *)(param_1 + 0x1d) = 0;
  temp_v4 = 8;
  temp_v2 = 8;
  temp_v3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  temp_v0 = 3;
  do {
    if ((int)(unsigned int)*(unsigned short *)(temp_v3 + 0x24) < 1 << (temp_v0 & 0xff)) {
      temp_v4 = 1 << (temp_v0 & 0xff);
      break;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0xb);
  temp_v0 = 3;
  do {
    if ((int)(unsigned int)*(unsigned short *)(temp_v3 + 0x26) < 1 << (temp_v0 & 0xff)) {
      temp_v2 = 1 << (temp_v0 & 0xff);
      if (temp_v2 >= 0x201) {
        temp_v2 = 0x200;
      }
      break;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0xb);
  if (temp_v4 >= 0x201) {
    temp_v4 = 0x200;
  }
  if (param_4 != 0) {
    if (*(short *)(param_4 + 4) == 0xf) {
      temp_v2 = 0x200;
      temp_v4 = 0x200;
      *(unsigned char *)(param_1 + 0x1c) = 1;
    }
    if ((*(short *)(param_4 + 4) == 0x10) && (*(char *)(param_4 + 0x98) != '\0')) {
      *(unsigned char *)(param_1 + 0x1d) = 1;
    }
  }
  FUN_002d5a08(temp_v4,temp_v2,param_2,0x1908,0x8033,0x81a5,param_3);
  *(int *)(param_1 + 8) = temp_v4;
  temp_v1 = asdMemoryGetAllocatorA();
  uStack_34 = 1;
  temp_v7 = 0x2020000;
  temp_v10 = 0;
  temp_v11 = 1;
  temp_v8 = *(unsigned int *)(*(int *)(param_1 + 8) + 8);
  temp_v9 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x34);
  temp_v6 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x14);
  temp_v5 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x18);
  temp_v1 = FUN_0036ec8c((unsigned int *)&temp_v5,temp_v1);
  *(unsigned int *)(param_1 + 0xc) = temp_v1;
  temp_v1 = asdMemoryGetAllocatorA();
  FUN_002bd498(param_1 + 0xc,temp_v1,0);
  FUN_003407d0(param_1,param_4);
  return;
}

} /* extern "C" */
