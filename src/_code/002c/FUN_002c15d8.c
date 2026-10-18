/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c15d8` (_code @ 0x2c15d8, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_004c6290; /* 0x4c6290 */
extern int DAT_004c63b4; /* 0x4c63b4 */

/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
extern int FUN_002b45f8(unsigned int, int, int);
extern int FUN_002c3290(unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002c2754) overlaps instruction at (ram,0x002c2752)
    */

unsigned int FUN_002c15d8(int *param_1,char *param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr12, in_cr2, in_cr4; 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr4;
  unsigned int in_cr12;
  int *piStack_30;
  char *pcStack_2c;
  unsigned int temp_v8;
  
  if (*param_2 == '\x01') {
    temp_v3 = param_1[1];
  }
  else {
    temp_v3 = *param_1;
  }
  temp_v5 = param_1[temp_v3 + 3];
  temp_v4 = *(int *)(temp_v5 + 0x30);
  temp_v7 = *(int *)(temp_v5 + 0x38) + temp_v5;
  piStack_30 = param_1;
  pcStack_2c = param_2;
  temp_v8 = param_3;
  temp_v3 = FUN_002c3290(param_3);
  temp_v6 = 0;
  if (*(int *)(temp_v5 + 0x34) != 0) {
    do {
      piVar7 = (int *)(temp_v4 + temp_v5 + temp_v6 * 8);
      temp_v1 = FUN_002b45f8(temp_v8,*piVar7 + temp_v7,temp_v3);
      if ((temp_v1 == 0) &&
         ((temp_v0 = *(char *)(*piVar7 + temp_v7 + temp_v3), temp_v0 == '\0' || (temp_v0 == '.')))) {
        *(int *)(param_2 + 4) = *piVar7 + temp_v7;
        temp_v2 = piVar7[1];
        param_2[2] = (char)temp_v2;
        param_2[3] = (char)((unsigned int)piVar7[1] >> 0x10);
        temp_v3 = DAT_004c63b4;
        if ((temp_v2 & 0xff) >= 0x88) {
          return 0;
        }
        temp_v4 = temp_v6 * 2;
        coprocessor_load(0,in_cr1,&piStack_30);
        if (temp_v4 == 0x8057) {
          *(int *)((int)(&DAT_004c6290 + DAT_004c63b4) * 2) = DAT_004c63b4;
          temp_v3 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
          coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
          coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
          coprocessor_function(10,0xf,0,in_cr2,in_cr0,in_cr2);
          coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
          coprocessor_load(0,in_cr2,temp_v3 + 0x3fc);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (temp_v4 < 0x8057) {
          temp_v4 = temp_v4 - 0x8051;
          if (temp_v4 == 0) {
            temp_v6 = 0;
            coprocessor_store(0,in_cr0,temp_v6 >> 8);
            return temp_v6 >> 8;
          }
          if (temp_v4 != 5) {
            *(short *)(param_4 + 0x3e) = (short)temp_v4;
            *(short *)(temp_v3 + 2) = (short)temp_v5;
            halt_baddata();
          }
        }
        temp_v6 = *(int *)(DAT_004c63b4 * 4 + 0x4c63b8) << 6;
        coprocessor_store(0,in_cr0,temp_v6 >> 8);
        return temp_v6 >> 8;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < *(unsigned int *)(temp_v5 + 0x34));
  }
  return 0;
}
