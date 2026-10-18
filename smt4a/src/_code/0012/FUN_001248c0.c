/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001248c0` (_code @ 0x1248c0, 0x136 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0055780c; /* 0x55780c */
extern unsigned char DAT_0055cb5c; /* 0x55cb5c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_001247f4(unsigned int);
extern int FUN_0030e914(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0030e924. */
/* Supplied declaration required: FUN_0030eca8. */
/* Supplied declaration required: FUN_0030ed04. */


unsigned long long FUN_001248c0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char *puVar6;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v5;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  temp_v5 = param_4;
  temp_v1 = FUN_001247f4(param_2);
  FUN_0030e924(param_1,temp_v1,0,param_3);
  *param_1 = (unsigned int)&DAT_0055cb5c;
  if ((unsigned char *)param_1[5] == &DAT_0055780c) {
    return romwright_piece_4_4(uStack_20,param_1);
  }
  *(unsigned char *)(param_1 + 6) = 1;
  FUN_0030ed04(&uStack_20,param_2,2);
  temp_v3 = 0;
  temp_v4 = 0xff;
  do {
    temp_v2 = FUN_0030e914(param_1,0x10,temp_v3 & 0xff);
    if (temp_v2 != 0) goto LAB_0012491e;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xff);
  goto LAB_0012492a;
LAB_00124998:
  while ((temp_v3 < temp_v4 && (temp_v2 = FUN_0030e914(param_1,8,temp_v4 & 0xff), temp_v2 == 0))) {
    temp_v4 = temp_v4 - 1;
  }
  goto LAB_001249a4;
LAB_0012491e:
  while ((temp_v3 < temp_v4 && (temp_v2 = FUN_0030e914(param_1,0x10,temp_v4 & 0xff), temp_v2 == 0))) {
    temp_v4 = temp_v4 - 1;
  }
LAB_0012492a:
  param_1[8] = temp_v4;
  param_1[7] = temp_v3;
  puVar6 = (unsigned char *)param_1[0xb];
  for (; temp_v3 <= temp_v4; temp_v3 = temp_v3 + 1) {
    if ((temp_v3 - 0x61 < 0x1a) && (temp_v2 = FUN_0030e914(param_1,0x10,temp_v3 & 0xff), temp_v2 != 0)) {
      temp_v5 = temp_v3 - 0x20;
      temp_v2 = FUN_0030e914(param_1,8,temp_v5 & 0xff);
      if (temp_v2 != 0) {
        temp_v0 = (unsigned char)temp_v5;
      }
      else {
        temp_v0 = (unsigned char)temp_v3;
      }
    }
    else {
      temp_v0 = (unsigned char)temp_v3;
    }
    *puVar6 = temp_v0;
    puVar6 = puVar6 + 1;
  }
  temp_v3 = 0;
  temp_v4 = 0xff;
  do {
    temp_v2 = FUN_0030e914(param_1,8,temp_v3 & 0xff);
    if (temp_v2 != 0) goto LAB_00124998;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xff);
LAB_001249a4:
  param_1[10] = temp_v4;
  param_1[9] = temp_v3;
  puVar6 = (unsigned char *)param_1[0xc];
  for (; temp_v3 <= temp_v4; temp_v3 = temp_v3 + 1) {
    if ((temp_v3 - 0x41 < 0x1a) && (temp_v2 = FUN_0030e914(param_1,8,temp_v3 & 0xff), temp_v2 != 0)) {
      temp_v5 = temp_v3 + 0x20;
      temp_v2 = FUN_0030e914(param_1,0x10,temp_v5 & 0xff);
      if (temp_v2 != 0) {
        temp_v0 = (unsigned char)temp_v5;
      }
      else {
        temp_v0 = (unsigned char)temp_v3;
      }
    }
    else {
      temp_v0 = (unsigned char)temp_v3;
    }
    *puVar6 = temp_v0;
    puVar6 = puVar6 + 1;
  }
  FUN_0030eca8(&uStack_20);
  return romwright_piece_4_4(uStack_20,param_1);
}
