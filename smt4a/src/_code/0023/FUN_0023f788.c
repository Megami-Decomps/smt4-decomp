/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f788` (_code @ 0x23f788, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_001801a4(void);
extern int FUN_0019c6bc(unsigned int);
extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_002919a4(void);
extern int FUN_0033896c(void);


void FUN_0023f788(int param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v6 = 0;
  *(unsigned int *)(param_1 + 0x3c44) = 0;
  *(unsigned int *)(param_1 + 0x3c48) = 0;
  *(unsigned int *)(param_1 + 0x3c4c) = 0;
  *(unsigned int *)(param_1 + 0x3c50) = 0;
  *(unsigned int *)(param_1 + 0x3c54) = 0;
  *(unsigned int *)(param_1 + 0x3c58) = 0;
  *(unsigned int *)(param_1 + 0x3c5c) = 0;
  *(unsigned int *)(param_1 + 0x3c60) = 0;
  *(unsigned int *)(param_1 + 0x3c64) = 0;
  *(unsigned int *)(param_1 + 0x3c68) = 0;
  *(unsigned int *)(param_1 + 0x3c6c) = 0;
  *(unsigned int *)(param_1 + 0x3c70) = 0;
  *(unsigned int *)(param_1 + 0x3c74) = 0;
  *(unsigned int *)(param_1 + 0x3c78) = 0;
  *(unsigned int *)(param_1 + 0x3c7c) = 0;
  *(unsigned int *)(param_1 + 0x3c80) = 0;
  do {
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v1 = *(short *)(param_1 + temp_v6 * 2 + 0x4210);
    if (temp_v1 != -4) {
      if (temp_v1 != -1) {
        if (temp_v1 != -2) {
          temp_v2 = FUN_001ab854();
        }
        else {
          temp_v2 = FUN_002919a4();
        }
        if (temp_v2 == 0) goto LAB_0023f8c4;
      }
      else {
        temp_v2 = FUN_001801a4();
      }
      temp_v5 = 0;
      temp_v10 = *(unsigned int *)(temp_v2 + 0x40);
      temp_v4 = 0;
      temp_v7 = *(unsigned int *)(temp_v2 + 0x34);
      temp_v8 = *(unsigned int *)(temp_v2 + 0x38);
      temp_v9 = *(unsigned int *)(temp_v2 + 0x3c);
      do {
        temp_v0 = *(unsigned short *)((int)&temp_v7 + temp_v4 * 2);
        temp_v3 = (unsigned int)temp_v0;
        FUN_001aba54();
        if ((temp_v3 != 0) && (temp_v2 = FUN_0019c6bc((unsigned int)temp_v0), temp_v2 == 0)) {
          temp_v2 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)(param_1 + temp_v6 * 0x10 + temp_v2 + 0x3c44) = temp_v0;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
    }
LAB_0023f8c4:
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 4) {
      temp_v2 = FUN_0033896c();
      temp_v6 = temp_v2;
      FUN_001aba54();
      if (*(char *)(temp_v6 + 0x36) == '\0') {
        temp_v2 = 0;
      }
      *(int *)(param_1 + 0x3e18) = temp_v2;
      return;
    }
  } while( 1 );
}
