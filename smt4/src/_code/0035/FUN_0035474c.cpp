/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035474c` (_code @ 0x35474c, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(unsigned int, int *, int);
int strncpy(int *, int, int);

/* stack frame of param_2: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_00354820; /* 0x354820 */

extern int FUN_002b4414(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_0035474c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  piVar2 = *(int **)(param_2 + 4);
  temp_v1 = 0;
  temp_v2 = piVar2[1];
  if (temp_v2 != 0) {
    do {
      temp_v0 = FUN_002b4414(*(unsigned int *)(*piVar2 + temp_v1 * 8),&LAB_00354820,0x40);
      if (temp_v0 == 0) {
        temp_v0 = *(int *)(*piVar2 + temp_v1 * 8 + 4);
        if (temp_v0 != 0) {
          strncpy(&temp_v3,temp_v0,0x40);
        }
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  rt_memcpy(param_1,&temp_v3,0x40);
  return;
}

} /* extern "C" */
