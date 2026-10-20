/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298940` (_code @ 0x298940, 0x194 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026dafc(unsigned int);
int FUN_002c4938(unsigned char [4], int);
int aeabi_idivmod(int, int);

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_0026dafc. */
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
extern int FUN_002a8740(int);
extern unsigned int FUN_002b05d0(int);
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_00298940(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar9;
  int temp_v9;
  int *piVar11;
  unsigned char temp_v10 [4];
  int aiStack_84 [24];
  
  temp_v1 = DAT_0043da90;
  temp_v2 = FUN_0029ee54(DAT_0043da90 + 0x1dc);
  temp_v3 = FUN_0029ee54(temp_v1 + 0x1dc);
  if (temp_v3 < temp_v2) {
    temp_v2 = FUN_0029ee54(temp_v1 + 0x1dc);
  }
  FUN_002c4938(temp_v10,100);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      temp_v8 = *(int *)(temp_v1 + temp_v3 * 8 + 0xe40);
      if (aiStack_84[temp_v8] == 0) {
        aiStack_84[temp_v8] = 1;
        if (temp_v8 < 0) {
          temp_v4 = FUN_002b63ac();
          temp_v0 = *(unsigned short *)(temp_v4 + 0x72);
        }
        else {
          temp_v4 = FUN_002a8740(temp_v8);
          temp_v0 = *(unsigned short *)(temp_v4 + 0x44);
        }
        temp_v4 = 0;
        if (temp_v0 != 0) {
          temp_v9 = temp_v1 + temp_v8 * 4;
          temp_v5 = 1;
          do {
            if (((unsigned int)temp_v0 & (1 << (temp_v5 & 0xff))) != 0) {
              if (*(int *)(temp_v9 + 0x24f8) == temp_v4) {
                temp_v6 = FUN_002b05d0((int)(short)temp_v5);
                *(unsigned int *)(temp_v9 + 0x255c) = temp_v6;
                break;
              }
              temp_v4 = temp_v4 + 1;
            }
            temp_v5 = temp_v5 + 1;
          } while ((int)temp_v5 < 0xb);
        }
        else {
          *(unsigned int *)(temp_v1 + temp_v8 * 4 + 0x255c) = 0xffffffff;
        }
        temp_v9 = temp_v1 + temp_v8 * 4;
        piVar9 = (int *)(temp_v9 + 0x2494);
        temp_v8 = *piVar9;
        *piVar9 = temp_v8 + 1;
        if (temp_v8 + 1 >= 0x18) {
          piVar11 = (int *)(temp_v9 + 0x24f8);
          aeabi_idivmod(*piVar11 + 1,temp_v4);
          *piVar11 = temp_v7;
          *piVar9 = 0;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  temp_v2 = FUN_0029efc0(temp_v1 + 0x1dc);
  temp_v3 = FUN_0029efa8(temp_v1 + 0x1dc);
  FUN_0026dafc(*(unsigned int *)(temp_v1 + *(int *)(temp_v1 + (temp_v3 + temp_v2) * 8 + 0xe40) * 4 + 0x255c));
  return;
}

} /* extern "C" */
