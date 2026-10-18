/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b1e08` (_code @ 0x2b1e08, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_004c62a1; /* 0x4c62a1 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned char DAT_004c62a8; /* 0x4c62a8 */
extern int DAT_004c6330; /* 0x4c6330 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: while (COPY). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b1e08(unsigned int *param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_r12, in_s17, in_stack_00000000; 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  int temp_v3;
  int temp_v4;
  unsigned int *unaff_r10;
  unsigned char in_r12;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_s17;
  unsigned int *in_stack_00000000;
  unsigned char uStack00000004;
  int temp_v5;
  
  if ((*(char *)((int)param_1 + 0x87) == '\0') && (param_1[0x16] != 0)) {
    puVar3 = (unsigned int *)(param_1[0x16] + (short)param_1[0x17] * 0xc);
    if ((int)*(short *)((int)param_1 + 0x5e) < (int)(unsigned int)(unsigned short)puVar3[2]) {
      *param_1 = unaff_r5;
      param_1[1] = unaff_r6;
      do {
        uStack00000004 = 0;
        do {
          if ((unaff_r4 != (unsigned int *)0x0) && ((char)unaff_r5 != '\0')) {
            temp_v2 = *unaff_r4;
            *(unsigned int *)(temp_v2 + 0x24) = in_s17;
            temp_v0 = DAT_004c6330;
            coprocessor_storelong(0,in_cr0,temp_v2 + 0xa0);
            temp_v3 = 0;
            temp_v4 = *(int *)(DAT_004c6330 + 0x18) + *(int *)(DAT_004c6330 + 0x28) * 0x1c;
            FUN_0013b608();
            temp_v1 = *(int *)(temp_v0 + 0x28) + 1;
            *(int *)(temp_v0 + 0x28) = temp_v1;
            if ((*(int *)(temp_v0 + 0x38) != 0) &&
               ((*(char *)(temp_v4 + 1) != '\0' ||
                ((temp_v1 == *(int *)(temp_v0 + 0x20) && (*(char *)(temp_v0 + 0x3c) != '\0')))))) {
              temp_v3 = *(int *)(temp_v0 + 0x38);
            }
            if (*(char *)(temp_v4 + 2) != '\0') {
              DAT_004c62a2 = 0;
              DAT_004c62a8 = 0;
              DAT_004c62a1 = 0;
            }
            else if (temp_v1 >= *(int *)(temp_v0 + 0x20)) {
              DAT_004c62a1 = 0;
            }
            else {
              FUN_002ba2b8();
            }
            FUN_0013b618();
            if (temp_v3 == 0) {
              return;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (puVar3 == (unsigned int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          unaff_r5 = 0;
          unaff_r4 = puVar3;
        } while (&in_stack_00000000 == (unsigned int **)&temp_v5);
        unaff_r5 = (unsigned int)in_r12;
        in_stack_00000000 = puVar3;
        unaff_r4 = unaff_r10;
      } while( 1 );
    }
    if (*(char *)((int)puVar3 + 10) == '\0') {
      if ((char)param_1[0x18] != '\0') {
        temp_v2 = *puVar3;
      }
      else {
        temp_v2 = puVar3[1];
      }
      param_1[8] = temp_v2;
      coprocessor_load(2,in_cr1,(unsigned char)param_1[0x21] + 0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((char)param_1[0x18] != '\0') {
      temp_v2 = puVar3[1];
    }
    else {
      temp_v2 = *puVar3;
    }
    param_1[8] = temp_v2;
    *(unsigned short *)((int)param_1 + 0x5e) = 0;
  }
  return;
}
