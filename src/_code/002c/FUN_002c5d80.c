/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5d80` (_code @ 0x2c5d80, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002c6202. */
/* Supplied declaration required: FUN_002c67dc. */
/* Supplied declaration required: FUN_002c6808. */
extern int FUN_002c6a04(void);
extern unsigned char *func_0x0014e6f8(unsigned char *);


unsigned int FUN_002c5d80(int param_1)

{
/* irregular: irregular input(s): in_stack_0000002c, in_stack_00000038, in_stack_0000003c, in_stack_00000040, in_stack_00000044, in_stack_00000048; 6 native warning(s); review required */
  unsigned char *puVar1;
  char temp_v0;
  unsigned char temp_v1;
  char temp_v2;
  romwright_code *pcVar4;
  int *unaff_r4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int unaff_r7;
  char *pcVar8;
  int iStack00000000;
  char cStack0000000b;
  unsigned char uStack0000000c;
  unsigned char *in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  FUN_002c6202(&in_stack_00000040,&uStack0000000c,param_1 != 1);
  temp_v5 = 0;
  in_stack_00000038 = in_stack_00000044;
  temp_v3 = in_stack_00000044;
  if (in_stack_00000048 == 0) {
    temp_v3 = in_stack_00000040 + unaff_r7 + 1;
  }
  if (-1 < unaff_r7 - temp_v3) {
    temp_v5 = -1 - (unaff_r7 - temp_v3);
    temp_v3 = unaff_r7 + 1;
  }
  iStack00000000 = temp_v3 - unaff_r7;
  if ((-1 < *unaff_r4 << 0x1c) && (temp_v3 <= iStack00000000)) {
    iStack00000000 = -1;
  }
  cStack0000000b = '\0';
  pcVar8 = &cStack0000000b;
  if (in_stack_0000002c != (unsigned char *)0x80000000) {
    in_stack_00000040 = 2;
    in_stack_00000044 = 0x2b;
    if ((int)in_stack_0000002c < 0) {
      in_stack_0000002c = (unsigned char *)-(int)in_stack_0000002c;
      in_stack_00000044 = 0x2d;
    }
    while ((temp_v4 = in_stack_00000040, in_stack_00000040 = in_stack_00000040 - 1, 0 < temp_v4 ||
           (in_stack_0000002c != (unsigned char *)0x0))) {
      in_stack_0000002c = (unsigned char *)func_0x0014e6f8(in_stack_0000002c);
      pcVar8 = pcVar8 + -1;
      *pcVar8 = temp_v2 + '0';
    }
    pcVar8[-1] = (char)in_stack_00000044;
    if (*unaff_r4 << 0x14 < 0) {
      temp_v0 = 'E';
    }
    else {
      temp_v0 = 'e';
    }
    pcVar8 = pcVar8 + -2;
    *pcVar8 = temp_v0;
  }
  in_stack_0000002c = &cStack0000000b + -(int)pcVar8;
  unaff_r4[6] = (unaff_r4[6] -
                (int)(&cStack0000000b + -(int)pcVar8 +
                     (unsigned int)(in_stack_0000003c != 0) + temp_v3 + (iStack00000000 >> 0x1f))) - 1;
  if (-1 < *unaff_r4 << 0x1b) {
    FUN_002c67dc();
  }
  if (in_stack_0000003c != 0) {
    (*(romwright_code *)unaff_r4[1])(in_stack_0000003c,unaff_r4[2]);
    unaff_r4[8] = unaff_r4[8] + 1;
  }
  if (*unaff_r4 << 0x1b < 0) {
    FUN_002c67dc();
  }
  while (temp_v4 = temp_v3 - 1, 0 < temp_v3) {
    if ((temp_v5 >= 0) && (in_stack_00000038 > temp_v5)) {
      pcVar4 = (romwright_code *)unaff_r4[1];
      temp_v1 = (&uStack0000000c)[temp_v5];
      temp_v3 = unaff_r4[2];
    }
    else {
      pcVar4 = (romwright_code *)unaff_r4[1];
      temp_v3 = unaff_r4[2];
      temp_v1 = 0x30;
    }
    (*pcVar4)(temp_v1,temp_v3);
    temp_v5 = temp_v5 + 1;
    unaff_r4[8] = unaff_r4[8] + 1;
    iStack00000000 = iStack00000000 - 1;
    temp_v3 = temp_v4;
    if (iStack00000000 == 0) {
      temp_v4 = FUN_002c6a04();
      (*(romwright_code *)unaff_r4[1])
                (*(unsigned char *)((int)*(int **)(temp_v4 + 0xc) + **(int **)(temp_v4 + 0xc)),unaff_r4[2])
      ;
      unaff_r4[8] = unaff_r4[8] + 1;
    }
  }
  while (puVar1 = in_stack_0000002c, in_stack_0000002c = in_stack_0000002c + -1, 0 < (int)puVar1) {
    temp_v0 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    (*(romwright_code *)unaff_r4[1])(temp_v0,unaff_r4[2]);
    unaff_r4[8] = unaff_r4[8] + 1;
  }
  FUN_002c6808();
  return 2;
}
