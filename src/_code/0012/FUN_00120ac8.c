/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120ac8` (_code @ 0x120ac8, 0x210 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char DAT_0044e908; /* 0x44e908 */
extern signed char DAT_0044e909; /* 0x44e909 */
extern signed char DAT_0044e90a; /* 0x44e90a */
extern unsigned int DAT_0044e90c; /* 0x44e90c */
extern int DAT_0044e910; /* 0x44e910 */
extern unsigned int DAT_0044e914; /* 0x44e914 */
extern unsigned char DAT_004ea168; /* 0x4ea168 */

extern unsigned int FUN_001303bc(void);
/* Supplied declaration required: FUN_00130438. */
/* Supplied declaration required: FUN_00130d18. */
/* Supplied declaration required: FUN_00130e10. */
/* Supplied declaration required: FUN_00130e18. */
/* Supplied declaration required: FUN_00130e6c. */
/* Supplied declaration required: FUN_00130fa8. */
/* Supplied declaration required: FUN_00130fe8. */
/* Supplied declaration required: FUN_00130ff8. */
/* Supplied declaration required: FUN_00131128. */
/* Supplied declaration required: FUN_001311a0. */
/* Supplied declaration required: FUN_001311ac. */
/* Supplied declaration required: FUN_001441dc. */
extern unsigned int FUN_002bb1bc(void);
extern unsigned int FUN_002bb218(void);
extern unsigned int FUN_002bb270(void);
extern unsigned int FUN_002bb2f0(void);
/* Supplied declaration required: FUN_002bb360. */
/* Supplied declaration required: FUN_002bd630. */


void FUN_00120ac8(unsigned int *param_1,int param_2)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  if (DAT_0044e909 == '\0') {
    FUN_00130ff8(&DAT_004ea168);
    if (DAT_0044e90a == '\0') {
      temp_v0 = param_1[3];
      temp_v4 = param_1[6];
      temp_v1 = FUN_002bb218();
      FUN_00130d18(temp_v1,param_2,param_1[3]);
      temp_v1 = FUN_002bb1bc();
      FUN_00130d18(temp_v1,temp_v0 + param_2,param_1[6]);
      param_2 = param_2 + temp_v0 + temp_v4;
      DAT_0044e90a = '\x01';
    }
    temp_v4 = 0;
    temp_v0 = param_2;
    temp_v6 = 0;
    if (*(char *)(param_1 + 7) != '\0') {
      temp_v5 = param_1[2] + param_2;
      temp_v0 = temp_v5;
      temp_v6 = param_2;
      if ((param_1[1] == 1) && (*(char *)((int)param_1 + 0x1e) != '\0')) {
        temp_v0 = param_1[2] + temp_v5;
        temp_v4 = temp_v5;
      }
    }
    FUN_002bd630();
    FUN_00130e10();
    temp_v5 = param_1[5];
    FUN_002bb360();
    FUN_001441dc();
    DAT_0044e914 = param_1[5];
    DAT_0044e910 = temp_v0;
    temp_v1 = FUN_002bb270();
    temp_v2 = FUN_001311a0(temp_v1,DAT_0044e90c);
    temp_v2 = temp_v2 + temp_v5 + temp_v0;
    temp_v1 = FUN_002bb270();
    temp_v1 = FUN_001311a0(temp_v1,DAT_0044e90c);
    temp_v3 = FUN_002bb270();
    FUN_00131128(temp_v3,temp_v5 + temp_v0,temp_v1);
    temp_v1 = FUN_002bb2f0();
    temp_v0 = FUN_00130fe8(temp_v1,DAT_0044e90c);
    temp_v1 = FUN_002bb2f0();
    temp_v1 = FUN_00130fe8(temp_v1,DAT_0044e90c);
    temp_v3 = FUN_002bb2f0();
    FUN_00130fa8(temp_v3,temp_v2,temp_v1);
    FUN_001311ac();
    temp_v1 = FUN_001303bc();
    FUN_00130438(temp_v1,param_1[4],&DAT_0044e910);
    if (*(char *)(param_1 + 7) != '\0') {
      temp_v1 = FUN_002bd630();
      FUN_00130e6c(temp_v1,temp_v6,param_1[2],*param_1,temp_v4,param_1[2],*param_1,param_1[1],
                   (int)*(char *)((int)param_1 + 0x1d));
    }
    temp_v7 = *(char *)((int)param_1 + 0x1d) != '\0';
    temp_v4 = 0;
    if (temp_v7) {
      temp_v4 = param_1[8];
    }
    if (temp_v7 && 0 < temp_v4) {
      temp_v1 = FUN_002bd630();
      FUN_00130e18(temp_v1,temp_v0 + temp_v2,param_1[8]);
    }
    DAT_0044e908 = *(unsigned char *)(param_1 + 7);
    DAT_0044e909 = '\x01';
  }
  return;
}
