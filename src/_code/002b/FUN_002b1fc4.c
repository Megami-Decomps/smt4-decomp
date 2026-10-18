/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b1fc4` (_code @ 0x2b1fc4, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00141adc; /* 0x141adc */
extern unsigned char DAT_004091d0; /* 0x4091d0 */
extern unsigned char DAT_004c62a1; /* 0x4c62a1 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned char DAT_004c62a8; /* 0x4c62a8 */
extern int DAT_004c6330; /* 0x4c6330 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */
/* Supplied declaration required: FUN_002bcd68. */
/* Supplied declaration required: FUN_002c5d5c. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b1fc4(unsigned char param_1)

{
/* irregular: irregular input(s): in_cr0, in_r12, in_s17, in_stack_ffffff50; 11 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *temp_v4;
  int temp_v5;
  int *unaff_r10;
  char in_r12;
  unsigned int in_cr0;
  unsigned int in_s17;
  int *in_stack_ffffff50;
  int *piVar6;
  char cStack_ac;
  int *piStack_a8;
  unsigned char uStack_a4;
  unsigned char temp_v6 [84];
  
  FUN_002c5d5c(&in_stack_ffffff50,&LAB_00141adc,0x10,4);
  FUN_002bcd68(temp_v6,&DAT_004091d0,0x50);
  *(unsigned char *)temp_v4 = param_1;
  piVar6 = piStack_a8;
  do {
    piStack_a8 = piVar6;
    uStack_a4 = 0;
    piVar6 = in_stack_ffffff50;
    temp_v0 = cStack_ac;
    do {
      if ((piVar6 != (int *)0x0) && (temp_v0 != '\0')) {
        temp_v3 = *piVar6;
        *(unsigned int *)(temp_v3 + 0x24) = in_s17;
        temp_v1 = DAT_004c6330;
        coprocessor_storelong(0,in_cr0,temp_v3 + 0xa0);
        temp_v3 = 0;
        temp_v5 = *(int *)(DAT_004c6330 + 0x18) + *(int *)(DAT_004c6330 + 0x28) * 0x1c;
        FUN_0013b608();
        temp_v2 = *(int *)(temp_v1 + 0x28) + 1;
        *(int *)(temp_v1 + 0x28) = temp_v2;
        if ((*(int *)(temp_v1 + 0x38) != 0) &&
           ((*(char *)(temp_v5 + 1) != '\0' ||
            ((temp_v2 == *(int *)(temp_v1 + 0x20) && (*(char *)(temp_v1 + 0x3c) != '\0')))))) {
          temp_v3 = *(int *)(temp_v1 + 0x38);
        }
        if (*(char *)(temp_v5 + 2) != '\0') {
          DAT_004c62a2 = 0;
          DAT_004c62a8 = 0;
          DAT_004c62a1 = 0;
        }
        else if (temp_v2 >= *(int *)(temp_v1 + 0x20)) {
          DAT_004c62a1 = 0;
        }
        else {
          FUN_002ba2b8();
        }
        FUN_0013b618();
        if (temp_v3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        return;
      }
      if (temp_v4 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      temp_v0 = '\0';
      in_stack_ffffff50 = unaff_r10;
      piVar6 = temp_v4;
      cStack_ac = in_r12;
    } while (&piStack_a8 == (int **)&in_stack_ffffff50);
  } while( 1 );
}
