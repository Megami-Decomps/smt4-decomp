/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ab8e4` (_code @ 0x4ab8e4, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned int *, int);
int FUN_00371c3c(int, int);
int FUN_003a7a88(int, int);

extern unsigned char g_btlUi; /* 0x57a9b8 */

extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_003a7a88. */


void FUN_004ab8e4(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  
  temp_v1 = (*(int *)((unsigned char *)&g_btlUi + 0x10));
  puVar5 = (unsigned int *)((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 0x12fd0);
  sysMemClear(puVar5,0x48);
  *puVar5 = 0;
  temp_v3 = 0;
  *(unsigned int *)(temp_v1 + 0x12fd4) = 0;
  do {
    puVar5[temp_v3 * 7 + 2] = 0;
    puVar5[temp_v3 * 7 + 3] = 0;
    puVar5[temp_v3 * 7 + 4] = 0;
    *(unsigned char *)(puVar5 + temp_v3 * 7 + 6) = 0;
    if (temp_v3 == 1) {
      *(unsigned int *)(temp_v1 + 0x13000) = 0x29d;
      if (puVar5[temp_v3 * 7 + 5] != 0) {
        temp_v2 = (int)(short)puVar5[temp_v3 * 7 + 5];
        FUN_003a7a88(temp_v2,1);
        if (temp_v2 == 0) {
          FUN_00371c3c((int)(short)puVar5[temp_v3 * 7 + 5],1);
          *(unsigned char *)(puVar5 + temp_v3 * 7 + 6) = 1;
        }
      }
    }
    else if (temp_v3 == 0) {
      *(unsigned int *)(temp_v1 + 0x12fe4) = 0xffffffff;
      if (puVar5[temp_v3 * 7 + 5] != 0) {
        temp_v2 = (int)(short)puVar5[temp_v3 * 7 + 5];
        FUN_003a7a88(temp_v2,1);
        if (temp_v2 == 0) {
          FUN_00371c3c((int)(short)puVar5[temp_v3 * 7 + 5],1);
          *(unsigned char *)(puVar5 + temp_v3 * 7 + 6) = 1;
        }
      }
    }
    else {
      puVar5[temp_v3 * 7 + 5] = 0;
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 2) {
      temp_v3 = FUN_001834a4(0xd,0xbd0);
      *(unsigned int *)(temp_v1 + 0x12fd8) = 0;
      *(int *)(temp_v1 + 0x12fdc) = *(short *)(temp_v3 + 10) + 0x100;
      *(int *)(temp_v1 + 0x12fec) = *(short *)(temp_v3 + 8) - 0x10b;
      temp_v0 = *(short *)(temp_v3 + 10);
      *(unsigned int *)(temp_v1 + 0x12fe0) = 0xffffffd7;
      *(int *)(temp_v1 + 0x12ff0) = (int)temp_v0;
      temp_v3 = FUN_001834a4(0xd,0xbe2);
      *(unsigned int *)(temp_v1 + 0x12ff4) = 0;
      *(int *)(temp_v1 + 0x12ff8) = *(short *)(temp_v3 + 10) - 0x100;
      *(int *)(temp_v1 + 0x13008) = *(short *)(temp_v3 + 8) - 0x110;
      *(int *)(temp_v1 + 0x1300c) = (int)*(short *)(temp_v3 + 10);
      *(unsigned int *)(temp_v1 + 0x12ffc) = 0x29;
      *(unsigned int *)(temp_v1 + 0x13010) = 0;
      *(unsigned int *)(temp_v1 + 0x13014) = 0;
      *(unsigned int *)(temp_v1 + 0x74a0) = 0x13;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
