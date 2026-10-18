/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8e54` (_code @ 0x3c8e54, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0022a028. */
/* Supplied declaration required: FUN_0022a094. */
/* Supplied declaration required: FUN_0029fa74. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_0030ab94. */
/* Supplied declaration required: FUN_0031ef10. */


/* WARNING: Type propagation algorithm not settling */

unsigned char FUN_003c8e54(unsigned int param_1,unsigned short *param_2,unsigned short *param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  short *psVar3;
  short *psVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v2;
  int temp_v3;
  short *psVar9;
  unsigned char temp_v4;
  
  FUN_002b9364();
  FUN_002b9364();
  temp_v1 = (unsigned int)*param_3;
  if (*param_2 == temp_v1) {
    return 0;
  }
  psVar9 = (short *)0x0;
  FUN_0022a094();
  if (temp_v1 != 0) {
    do {
      psVar4 = psVar9;
      FUN_0029fa74();
      if (psVar4 != (short *)0x0) {
        temp_v2 = 0;
        temp_v3 = 0xc;
        psVar3 = psVar4;
        do {
          psVar3 = psVar3 + 1;
          if (*psVar3 != 0) {
            temp_v2 = temp_v2 + 1;
          }
          temp_v3 = temp_v3 - 1;
        } while (temp_v3 != 0);
        if (temp_v2 == 2) {
          temp_v0 = *param_2;
          if ((psVar4[1] == temp_v0) && (psVar4[2] == *param_3)) {
            return (unsigned char)5;
          }
          temp_v4 = psVar4[2] == temp_v0;
          if (temp_v4) {
            temp_v0 = *param_3;
          }
          if (temp_v4 && psVar4[1] == temp_v0) {
            return (unsigned char)5;
          }
        }
      }
      psVar4 = (short *)((int)psVar9 + 1);
      psVar9 = (short *)((unsigned int)psVar4 & 0xffff);
      FUN_0022a094();
    } while (psVar9 < psVar4);
  }
  temp_v1 = (unsigned int)(unsigned char)param_2[1];
  FUN_0031ef10(temp_v1,(char)param_3[1]);
  if (temp_v1 != 0) {
    return (unsigned char)4;
  }
  puVar5 = (unsigned int *)(unsigned int)(unsigned char)param_2[1];
  FUN_0022a028(puVar5,*param_3);
  puVar6 = (unsigned int *)(unsigned int)(unsigned char)param_3[1];
  FUN_0022a028(puVar6,*param_2);
  if (puVar5 != (unsigned int *)0x0) {
    temp_v1 = *puVar5;
  }
  else {
    if (puVar6 == (unsigned int *)0x0) {
      temp_v1 = (unsigned int)(unsigned char)param_2[1];
      FUN_0030ab94(temp_v1,(char)param_3[1]);
      return temp_v1 != 0;
    }
    temp_v1 = *puVar6;
  }
  if (temp_v1 >> 0x18 == 1) {
    return (unsigned char)2;
  }
  if (temp_v1 >> 0x18 == 3) {
    return (unsigned char)3;
  }
  temp_v1 = (unsigned int)(unsigned char)param_2[1];
  FUN_0030ab94(temp_v1,(char)param_3[1]);
  return temp_v1 != 0;
}
