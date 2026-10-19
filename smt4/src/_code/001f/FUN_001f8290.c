/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f8290` (_code @ 0x1f8290, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_001e4bd8; /* 0x1e4bd8 */
extern unsigned char LAB_001f833c; /* 0x1f833c */
extern int FUN_002c439c(); /* 0x2c439c */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00214568. */
/* Supplied declaration required: FUN_00223360. */
/* Supplied declaration required: FUN_00267d3c. */
/* Supplied declaration required: FUN_00298140. */
/* Supplied declaration required: FUN_0029b990. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002ce2e4. */


/* WARNING: Removing unreachable block (ram,0x002bd91c) */

void FUN_001f8290(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = &LAB_001f833c;
  FUN_002c4a08(&LAB_001f833c,2,0,0,&LAB_001e4bd8,FUN_002c439c,param_1,*param_1);
  param_1[1] = (unsigned int)puVar1;
  FUN_0029b990();
  FUN_00214568(param_1 + 0x5d);
  FUN_00223360(param_1 + 0x6d);
  temp_v0 = 0;
  if (temp_v0 < (int)param_1[0xfc]) {
    do {
      FUN_002ce2e4(param_1 + temp_v0 * 2 + 0x7c);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)param_1[0xfc]);
  }
  param_1[0xfc] = 0;
  FUN_00267d3c(DAT_00439ca8);
  temp_v0 = DAT_00439ca8;
  *(unsigned int *)(DAT_00439ca8 + 0x7e38) = 0x10;
  if (*(int *)(temp_v0 + 0x54a8) == 0) {
    return;
  }
  FUN_00298140(temp_v0 + 0x2460,0x27,1);
  temp_v1 = *(int *)(temp_v0 + 0x3764);
  if (temp_v1 == 0) {
    return;
  }
  *(unsigned short *)(temp_v0 + 0x3768) = 9;
  *(unsigned short *)(temp_v0 + 0x376a) = 0;
  *(unsigned char *)(temp_v0 + 0x379e) = 0;
  *(unsigned char *)(temp_v0 + 0x37a2) = 0;
  *(unsigned char *)(temp_v0 + 0x376c) = 0;
  *(int *)(temp_v0 + 0x3724) = (int)*(short *)(temp_v1 + 0x6c) << 0xc;
  *(int *)(temp_v0 + 0x3728) = (int)*(short *)(temp_v1 + 0x6e) << 0xc;
  return;
}
