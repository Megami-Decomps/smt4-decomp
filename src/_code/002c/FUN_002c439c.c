/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c439c` (_code @ 0x2c439c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004e3cf4; /* 0x4e3cf4 */

extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c41f0. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c439c(void)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int unaff_r5;
  unsigned char unaff_r7;
  int unaff_r8;
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  temp_v1 = FUN_002c08f0();
  temp_v5 = DAT_004e3cf4;
  temp_v2 = *(unsigned int *)(temp_v1 + 4);
  if (temp_v2 == 0) {
    return;
  }
  temp_v4 = temp_v2 >> 0x14;
  for (temp_v1 = *(int *)(DAT_004e3cf4 + temp_v4 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c)) {
    temp_v4 = *(unsigned int *)(temp_v1 + 0x24);
    if (temp_v4 == (temp_v2 & 0xfffff)) goto LAB_002c43fc;
  }
  temp_v1 = 0;
LAB_002c43fc:
  temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0x98);
  switch(temp_v2) {
  default:
    temp_v3 = 0;
    unaff_r8 = unaff_r5;
    break;
  case 1:
  case 2:
  case 3:
    *(unsigned short *)(temp_v1 + 0x36) = 0;
    temp_v0 = *(int *)(temp_v1 + 0x58);
    while (temp_v0 != 0) {
      unaff_r5 = *(int *)(temp_v0 + 0x5c);
      *(unsigned short *)(temp_v0 + 0x36) = *(unsigned short *)(temp_v1 + 0x36);
      FUN_002c41f0();
      temp_v0 = unaff_r5;
    }
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0x98);
    switch(temp_v2) {
    default:
      *(short *)(temp_v4 + unaff_r5) = (short)temp_v5;
      *(unsigned char *)(temp_v5 + unaff_r5) = unaff_r7;
      temp_v3 = temp_v2;
      break;
    case 1:
    case 2:
    case 3:
      *(unsigned int *)(temp_v5 + 8) = temp_v2;
      halt_baddata();
    }
    break;
  case 4:
  case 5:
    *(unsigned short *)(temp_v1 + 0x36) = 0;
    if (*(int *)(temp_v1 + 0x58) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(temp_v4 + unaff_r8) = (short)temp_v5;
  *(unsigned char *)(temp_v5 + unaff_r8) = unaff_r7;
  *(short *)(temp_v4 * 2 + temp_v2) = (short)temp_v2;
                    /* WARNING: Could not recover jumptable at 0x002c4c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(temp_v2,temp_v3);
  return;
}
