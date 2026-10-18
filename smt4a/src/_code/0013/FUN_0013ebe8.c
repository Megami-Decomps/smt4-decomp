/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ebe8` (_code @ 0x13ebe8, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0063e37c; /* 0x63e37c */
extern int *DAT_0063e944; /* 0x63e944 */
extern int DAT_0063e948; /* 0x63e948 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0015e2bc. */
/* Supplied declaration required: FUN_0015e874. */
/* Supplied declaration required: FUN_001742e4. */


unsigned int FUN_0013ebe8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int *piVar4;
  unsigned int in_fpscr;
  
  temp_v1 = 0;
  piVar4 = DAT_0063e944;
  if (0 < DAT_0063e948) {
    while (piVar4 != (int *)0x0) {
      if (piVar4[6] == param_1) {
        if (*piVar4 != 0) {
          FUN_001742e4(*piVar4,0);
        }
        puVar2 = &DAT_0063e37c;
        FUN_0015e2bc(&DAT_0063e37c,piVar4,param_2,0);
        if (((unsigned int)puVar2 & 0xff) != 0) {
          return 0;
        }
        temp_v0 = 0;
        if (*piVar4 != 0) {
          temp_v0 = FUN_0015e874(*piVar4,0);
        }
        if (param_3 >= 0x80) {
          temp_v0 = 0x7f;
        }
        *(char *)((int)piVar4 + 0xd) = (char)param_3;
        if (param_3 >= 0x80) {
          *(unsigned char *)((int)piVar4 + 0xd) = temp_v0;
        }
        else if (param_3 == 0) {
          if (*piVar4 != 0) {
            FUN_0015e874(*piVar4,param_4);
          }
          piVar4[2] = param_2;
          *(unsigned char *)(piVar4 + 3) = *(unsigned char *)(piVar4 + 3) | 2;
          return 1;
        }
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)piVar4 + 0xd),(unsigned char)(in_fpscr >> 0x16) & 3);
        if (*piVar4 != 0) {
          FUN_0015e874(*piVar4,param_4);
        }
        piVar4[2] = param_2;
        *(unsigned char *)(piVar4 + 3) = *(unsigned char *)(piVar4 + 3) | 2;
        return 1;
      }
      piVar4 = (int *)piVar4[5];
      temp_v1 = temp_v1 + 1;
      if (DAT_0063e948 <= temp_v1) {
        return 0;
      }
    }
  }
  return 0;
}
