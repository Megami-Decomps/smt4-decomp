/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f400` (_code @ 0x31f400, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0024ea50(unsigned short);
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern int FUN_002c09f4(unsigned int);
/* Supplied declaration required: FUN_002c4938. */


unsigned int FUN_0031f400(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned char temp_v5;
  int aiStack_1d0 [109];
  
  temp_v1 = FUN_002939f4();
  temp_v0 = *(short *)(temp_v1 + 0x225a);
  temp_v1 = FUN_002939f4();
  FUN_00282924(temp_v1,(int)temp_v0);
  FUN_002c4938(aiStack_1d0,0x1b4);
  temp_v5 = 0;
  temp_v4 = 0;
  do {
    temp_v2 = FUN_002939f4();
    puVar6 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288);
    temp_v3 = *puVar6;
    if (((((((temp_v3 & 1) != 0) && ((temp_v3 & 0x40) == 0)) && ((temp_v3 & 0x10) != 0)) &&
         ((*(short *)((int)puVar6 + 0x6e) != *(short *)(temp_v1 + 0x6e) &&
          ((unsigned short)puVar6[0x73] <= *(unsigned short *)(temp_v1 + 0x1cc))))) &&
        ((temp_v2 = FUN_0024ea50(*(unsigned short *)((int)puVar6 + 0xce)), temp_v2 == 0 &&
         ((puVar6[0xa1] != 0 && ((*(unsigned short *)(puVar6[0xa1] + 0x16) & 0x200) != 0)))))) &&
       (*(short *)(temp_v1 + 0xce) != *(short *)((int)puVar6 + 0xce))) {
      aiStack_1d0[temp_v5] = (int)puVar6;
      temp_v5 = temp_v5 + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x6d);
  if (temp_v5 == 0) {
    temp_v1 = -1;
  }
  else {
    temp_v1 = FUN_002c09f4((temp_v5 - 1) & 0xffff);
    temp_v1 = (int)*(short *)(aiStack_1d0[temp_v1] + 8);
  }
  FUN_0028dcb0(temp_v1);
  return 1;
}
