/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4710` (_code @ 0x2c4710, 0x3ec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int uRam00000000; /* 0x0 */
extern unsigned int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */

/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c43f4. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002c4710(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr8, in_s0; 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar8;
  int unaff_r5;
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned int in_cr8;
  unsigned int in_s0;
  
  temp_v1 = DAT_00464a70;
  puVar1 = &DAT_00464a70;
  if (DAT_00464a70 != 0) {
    puVar1 = DAT_00464a74;
  }
  if (DAT_00464a70 != 0 && param_1 < puVar1) {
    piVar8 = (int *)(DAT_00464a70 + (int)param_1 * 0x2c);
    if (piVar8 != (int *)0x0) {
      if (*piVar8 == 0) {
        coprocessor_loadlong(0,in_cr8,unaff_r5 + 0x40);
        if (param_4 >> 8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        software_interrupt(0x25);
        uRam00000000 = 0;
        return param_4;
      }
      if (piVar8[3] == 0) {
        puVar1 = &DAT_00464a70;
        if (DAT_00464a70 != 0) {
          puVar1 = DAT_00464a74;
        }
        temp_v0 = 0;
        if ((DAT_00464a70 != 0 && puVar1 != (unsigned int *)0x0) && (temp_v0 = temp_v1, DAT_00464a70 != 0)
           ) {
          *(unsigned int *)(DAT_00464a70 + 0x28) = in_s0;
        }
        return temp_v0;
      }
      if (piVar8[4] != 0) {
        piVar3 = (int *)piVar8[3];
        *piVar3 = (int)param_1 * 3;
        *(short *)(param_4 + (int)param_1 * 3) = (short)piVar3;
        *(unsigned int *)(param_2 + 0xc0) = param_4;
        temp_v2 = *(unsigned int *)(temp_v1 + 0x74);
        *(char *)(param_2 + 0x85) = (char)((int)piVar3 << 4);
        *(unsigned int *)((int)piVar8 + (0xffffffc7 < param_2 + 0x44U) + param_4 + 0x54) = temp_v2;
                    /* WARNING: Could not recover jumptable at 0x002c4abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        temp_v1 = (*UNRECOVERED_JUMPTABLE)();
        return temp_v1;
      }
      temp_v4 = 0;
      while (temp_v4 != 0) {
        temp_v3 = *(int *)(temp_v4 + 0x5c);
        *(unsigned short *)(temp_v4 + 0x36) = *(unsigned short *)(unaff_r5 + 0x36);
        FUN_002c43f4();
        temp_v4 = temp_v3;
      }
      switch((unsigned int)*(unsigned char *)(unaff_r5 + 0x98)) {
      default:
        return (unsigned int)*(unsigned char *)(unaff_r5 + 0x98);
      case 1:
      case 2:
      case 3:
        *(unsigned char *)(unaff_r5 + 0x98) = 4;
        return 4;
      }
    }
  }
  do {
  } while( 1 );
}
