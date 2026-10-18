/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ddcc` (_code @ 0x10ddcc, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e20ec; /* 0x4e20ec */
extern unsigned int DAT_004e3178; /* 0x4e3178 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00141fd0. */
/* Supplied declaration required: FUN_002bcbb0. */
extern char FUN_002bcc14(unsigned char *, int *, int, unsigned int);
/* Supplied declaration required: FUN_002bda30. */
extern int FUN_002bf684(unsigned char *);


unsigned int FUN_0010ddcc(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned char *puVar5;
  unsigned int in_fpscr;
  
  if (param_1 >= 2) {
    return 0;
  }
  puVar5 = &DAT_004e1f68;
  temp_v2 = FUN_002bf684(&DAT_004e1f68);
  if (temp_v2 == 0) {
    return 0;
  }
  FUN_00141fd0(&DAT_004e1f68,param_2);
  if (puVar5 == (unsigned char *)0x0) {
    return 0;
  }
  if (param_1 >= 2) {
    return 0;
  }
  piVar4 = (int *)(&DAT_004e3178)[param_1];
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (*piVar4 != 0) {
    FUN_002bda30(*piVar4,0);
  }
  temp_v0 = FUN_002bcc14(&DAT_004e20ec,piVar4,param_2,0);
  if (temp_v0 != '\0') {
    return 0;
  }
  temp_v1 = 0;
  if (*piVar4 != 0) {
    temp_v1 = FUN_002bcbb0(*piVar4,0);
  }
  if (param_3 >= 0x80) {
    temp_v1 = 0x7f;
  }
  *(char *)((int)piVar4 + 0xd) = (char)param_3;
  if (param_3 >= 0x80) {
    *(unsigned char *)((int)piVar4 + 0xd) = temp_v1;
  }
  else if (param_3 == 0) {
    if (*piVar4 != 0) {
      FUN_002bcbb0(*piVar4,param_4);
    }
    piVar4[2] = param_2;
    *(unsigned char *)(piVar4 + 3) = *(unsigned char *)(piVar4 + 3) | 2;
    return 1;
  }
  VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)piVar4 + 0xd),(unsigned char)(in_fpscr >> 0x16) & 3);
  if (*piVar4 != 0) {
    FUN_002bcbb0(*piVar4,param_4);
  }
  piVar4[2] = param_2;
  *(unsigned char *)(piVar4 + 3) = *(unsigned char *)(piVar4 + 3) | 2;
  return 1;
}
