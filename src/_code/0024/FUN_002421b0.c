/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002421b0` (_code @ 0x2421b0, 0x19c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp158; /* 0x158: local_158 */
} param_1_stack;

extern unsigned char LAB_00242354; /* 0x242354 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_0044ea9c; /* 0x44ea9c */
extern int DAT_0044eaa4; /* 0x44eaa4 */
extern unsigned int *DAT_0044eabc; /* 0x44eabc */
extern unsigned int *DAT_0044eac0; /* 0x44eac0 */

/* Supplied declaration required: FUN_00242964. */
extern int FUN_00246a4c(unsigned int, int);
/* Supplied declaration required: FUN_0024736c. */
/* Supplied declaration required: FUN_002473ac. */
/* Supplied declaration required: FUN_0025c888. */
/* Supplied declaration required: FUN_0025cc14. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002de2a4. */
/* Supplied declaration required: FUN_002f8270. */
/* Supplied declaration required: FUN_0030ed58. */
extern int FUN_00318df8(unsigned int *);
extern int FUN_00323660(unsigned int *, unsigned char *);


unsigned char * FUN_002421b0(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  unsigned char temp_v3 [200];
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [104];
  
  temp_v5 = 0;
  puVar4 = (unsigned char *)0x600001;
  if (DAT_0044eabc != (unsigned int *)0x0) {
    FUN_002f8270(DAT_0044eac0);
    temp_v5 = DAT_0044eac0[2];
    temp_v4 = FUN_00323660(DAT_0044eac0,temp_v3);
    temp_v6 = FUN_00318df8(DAT_0044eac0);
    if (temp_v5 == 1) {
      FUN_002473ac(DAT_0044eac0);
      DAT_0044eac0 = (unsigned int *)0x0;
      FUN_0024736c(DAT_0044eabc);
      DAT_0044eabc = (unsigned int *)0x0;
    }
  }
  else {
    DAT_0044eabc = (unsigned int *)0x0;
    if ((param_1 & 8) != 0) {
      temp_v2 = 0;
      do {
        FUN_002be7fc(temp_v7,&LAB_00242354,temp_v2);
        FUN_002de2a4(DAT_0044eabc,temp_v7,8,temp_v2,0);
        temp_v2 = temp_v2 + 1;
        param_1 = temp_v1;
      } while (temp_v2 < 0x16);
    }
    puVar1 = DAT_0044eabc;
    FUN_0030ed58(DAT_0044eabc,param_1);
    DAT_0044eac0 = puVar1;
    *puVar1 = 0xba;
    puVar1[1] = 0x1c;
  }
  if (temp_v5 == 2) {
    puVar4 = (unsigned char *)0x400000;
  }
  else if (temp_v5 == 1) {
    if (temp_v4 != 8) {
      temp_v0 = FUN_00246a4c(DAT_0044ea94,-temp_v6);
      if (DAT_0044eaa4 != temp_v0) {
        FUN_00242964(DAT_0044ea94);
        FUN_0025c888(DAT_0044ea94,DAT_0044eaa4,temp_v0);
      }
    }
    else {
      FUN_00242964(DAT_0044ea94,DAT_0044eaa4);
      FUN_0025cc14(DAT_0044ea9c,&temp_v6,4);
    }
    puVar4 = &DAT_00400002;
  }
  return puVar4;
}
