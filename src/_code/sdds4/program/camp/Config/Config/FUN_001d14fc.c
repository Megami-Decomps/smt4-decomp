/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d14fc` (_code @ 0x1d14fc, 0x224 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dc58; /* 0x43dc58 */

/* Supplied declaration required: FUN_0027edf8. */
/* Supplied declaration required: FUN_0029e2f4. */
/* Supplied declaration required: FUN_002b9008. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c0ba8. */
/* Supplied declaration required: FUN_002c0e4c. */
/* Supplied declaration required: FUN_002c0e9c. */
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_001d14fc(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = DAT_0043dc58;
  temp_v5 = 0;
  if (0 < *(short *)(DAT_0043dc58 + 0x7e)) {
    do {
      FUN_002b9008();
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(short *)(temp_v0 + 0x7e));
  }
  FUN_0027edf8(temp_v0 + 0x76,0xffffffff);
  *(unsigned short *)(temp_v0 + 0x7e) = 0;
  temp_v5 = FUN_002c0ba8(0x555);
  if (((temp_v5 == 0) || (temp_v5 = FUN_002c0ba8(0x557), temp_v5 == 0)) &&
     (temp_v5 = FUN_002c0ba8(0x557), temp_v5 == 0)) {
    FUN_002c0ba8(0x555);
  }
  temp_v2 = FUN_002c0ec4(0x36,0);
  FUN_002c0e9c();
  FUN_002c0e4c(temp_v2);
  temp_v5 = FUN_002bf6d0(0x2f,0x20);
  if (*(char *)(temp_v0 + 0xa8) != '\0') {
    temp_v3 = FUN_002bf6d0(0x2f,0x44);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    FUN_0029e2f4(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x78) = (short)temp_v4;
    temp_v3 = FUN_002bf6d0(0x2f,0x45);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    FUN_0029e2f4(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x7a) = (short)temp_v4;
    temp_v3 = FUN_002bf6d0(0x2f,0x46);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    FUN_0029e2f4(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x7c) = (short)temp_v4;
    temp_v1 = *(short *)(temp_v0 + 0x7e) + 3;
  }
  else {
    temp_v3 = FUN_002bf6d0(0x2f,0x42);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    FUN_0029e2f4(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x78) = (short)temp_v4;
    temp_v3 = FUN_002bf6d0(0x2f,0x43);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    FUN_0029e2f4(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x7a) = (short)temp_v4;
    temp_v1 = *(short *)(temp_v0 + 0x7e) + 2;
  }
  *(short *)(temp_v0 + 0x7e) = temp_v1;
  return;
}
