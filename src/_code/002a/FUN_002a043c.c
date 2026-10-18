/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a043c` (_code @ 0x2a043c, 0x1ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001f643c(); /* 0x1f643c */
extern int *DAT_0043dd68; /* 0x43dd68 */

extern int FUN_001a14e4(int);
/* Supplied declaration required: FUN_0029d080. */
/* Supplied declaration required: FUN_0029ec14. */
extern unsigned long long FUN_0029ec6c(unsigned short);
extern unsigned long long FUN_0029ed08(unsigned short);
/* Supplied declaration required: FUN_0029ed44. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002c3b48. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_002a043c(void)

{
/* irregular: 8 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar8;
  int temp_v5;
  int temp_v6;
  unsigned long long temp_v7;
  
  piVar1 = DAT_0043dd68;
  temp_v0 = FUN_002a0fac();
  FUN_002c4b30(piVar1 + 0x170,0x962);
  temp_v1 = (int)piVar1 + 0xf22;
  FUN_002c3b48(temp_v1,0x70);
  FUN_002c3b48((int)piVar1 + 0xf92,0x3ea);
  temp_v5 = 0;
  temp_v6 = 0;
  puVar8 = (unsigned short *)0x0;
  do {
    temp_v2 = *piVar1;
    FUN_0029ed44(temp_v2,puVar8);
    if (temp_v2 != 0) {
      puVar5 = puVar8;
      FUN_002b9364();
      temp_v7 = FUN_0029ed08(*puVar5);
      temp_v4 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
      if (((int)temp_v7 != 0) ||
         (temp_v7 = FUN_0029ec6c(*puVar5), temp_v4 = (unsigned int)((unsigned long long)temp_v7 >> 0x20),
         (int)temp_v7 != 0)) {
        temp_v3 = (unsigned int)*(short *)(temp_v0 + 0x24);
        if (temp_v3 != 0) {
          temp_v4 = (unsigned int)*(unsigned char *)(puVar5 + 1);
        }
        if (temp_v3 == 0 || temp_v3 == temp_v4) {
          temp_v2 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)((int)piVar1 + temp_v2 + 0x5c0) = *puVar5;
        }
        temp_v2 = temp_v1;
        FUN_0029d080(temp_v1,temp_v6,*(unsigned char *)(puVar5 + 1));
        if (temp_v2 == 0) {
          temp_v2 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(unsigned short *)((int)piVar1 + temp_v2 + 0xf22) = (unsigned short)*(unsigned char *)(puVar5 + 1);
        }
      }
    }
    puVar8 = (unsigned short *)(((int)puVar8 + 1U) & 0xffff);
  } while (puVar8 < (unsigned short *)0x4b1);
  FUN_002b7f0a(piVar1 + 0x170,temp_v5,2,FUN_001f643c);
  temp_v1 = 0;
  temp_v4 = 0;
  do {
    temp_v3 = temp_v4;
    FUN_0029ec14();
    if (((temp_v3 != 0) && ((*(unsigned char *)(temp_v3 + 3) & 0x20) != 0)) &&
       ((*(char *)(temp_v0 + 0x31) < 0 ||
        (*(unsigned int *)(*(char *)(temp_v0 + 0x31) * 4 + 0x40333c) == (unsigned int)*(unsigned char *)(temp_v3 + 2))))) {
      temp_v2 = FUN_001a14e4((int)(short)temp_v4);
      if (temp_v2 != 0) {
        temp_v2 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)((int)piVar1 + temp_v2 + 0xf92) = (short)temp_v4;
      }
    }
    temp_v4 = (temp_v4 + 1) & 0xffff;
  } while (temp_v4 < 0x1f5);
  piVar1[0x4e1] = temp_v1;
  piVar1[0x4df] = temp_v5;
  piVar1[0x4e0] = temp_v6;
  return;
}
