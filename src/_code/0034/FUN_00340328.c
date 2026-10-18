/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340328` (_code @ 0x340328, 0x1f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_4_stack;

extern unsigned char LAB_00340520; /* 0x340520 */
extern unsigned char LAB_00340534; /* 0x340534 */
extern unsigned char LAB_00340548; /* 0x340548 */
extern unsigned char LAB_00340560; /* 0x340560 */
extern unsigned int DAT_004341f8; /* 0x4341f8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00240420. */
extern int FUN_00293c98(void);
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a0c54. */
extern unsigned int FUN_002ac2f4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);


void FUN_00340328(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar6;
  unsigned short *puVar7;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [64];
  
  *(unsigned int *)(param_1 + 8) = param_2;
  *(unsigned int *)(param_1 + 0xc) = param_3;
  FUN_002be7fc(temp_v9,&LAB_00340534,&LAB_00340520,param_2,param_3);
  temp_v0 = FUN_00293c98();
  FUN_00240420(temp_v0,temp_v9);
  if (temp_v0 == 0) {
    FUN_002be7fc(temp_v9,&LAB_00340534,&LAB_00340520,1,1);
    *(unsigned int *)(param_1 + 8) = 1;
    *(unsigned int *)(param_1 + 0xc) = 1;
  }
  FUN_002a0c54(temp_v9,0);
  puVar6 = &LAB_00340520;
  FUN_002be7fc(temp_v9,&LAB_00340548,&LAB_00340520,param_2,param_3);
  temp_v0 = FUN_00293c98();
  FUN_00240420(temp_v0,temp_v9);
  if (temp_v0 == 0) {
    puVar6 = &LAB_00340520;
    FUN_002be7fc(temp_v9,&LAB_00340548,&LAB_00340520,1,1);
    *(unsigned int *)(param_1 + 8) = 1;
    *(unsigned int *)(param_1 + 0xc) = 1;
  }
  temp_v1 = FUN_0029a2d0(temp_v9,param_4);
  *(unsigned int *)(param_1 + 0x10) = temp_v1;
  temp_v1 = FUN_002ac2f4(DAT_004341f8,0);
  temp_v0 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v1);
  if (temp_v2 != 0) {
    puVar6 = *(unsigned char **)(param_1 + 8);
  }
  temp_v3 = 0;
  if (temp_v2 != 0) {
    while ((puVar7 = (unsigned short *)(temp_v0 + temp_v3 * 0x4c), (unsigned char *)(unsigned int)*puVar7 != puVar6 ||
           ((unsigned int)puVar7[1] != *(unsigned int *)(param_1 + 0xc)))) {
      temp_v3 = temp_v3 + 1;
      if (temp_v2 <= temp_v3) {
        return;
      }
    }
    temp_v0 = temp_v0 + temp_v3 * 0x4c;
    if (temp_v0 != 0) {
      temp_v5 = 0;
      do {
        temp_v6 = temp_v0 + temp_v5 * 0x24;
        if (*(char *)(temp_v6 + 4) != '0') {
          FUN_002be7fc(temp_v9,&LAB_00340560,&LAB_00340520,temp_v6 + 4);
          temp_v1 = FUN_0029a2d0(temp_v9,param_4);
          *(unsigned int *)(param_1 + temp_v5 * 4 + 0x14) = temp_v1;
          temp_v4 = param_1 + temp_v5 * 0xc;
          temp_v8 = VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v6 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v1 = VectorUnsignedToFloat
                            ((unsigned int)*(unsigned short *)(temp_v6 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v6 + 0x22),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v4 + 0x30) = temp_v1;
          *(unsigned int *)(temp_v4 + 0x28) = temp_v7;
          *(unsigned int *)(temp_v4 + 0x2c) = temp_v8;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 2);
    }
  }
  return;
}
