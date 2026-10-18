/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e908` (_code @ 0x23e908, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_001643b4. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001b4a90. */


void FUN_0023e908(void)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  temp_v0 = DAT_0057f268;
  temp_v2 = 0;
  if (0 < *(int *)(DAT_0057f268 + 0xa00)) {
    do {
      FUN_001641c4();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v0 + 0xa00));
  }
  *(unsigned int *)(temp_v0 + 0xa00) = 0;
  FUN_001b4a90(temp_v0 + 0x9c4,0x3c,0xffffffff);
  temp_v2 = 0;
  piVar5 = (int *)(temp_v0 + 0xa00);
  if (*(char *)(temp_v0 + 0x42) == '\0') {
    do {
      temp_v1 = FUN_001643b4(0x11,temp_v2 + 0x2d);
      temp_v3 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(temp_v0 + temp_v3 + 0x9c4) = temp_v1;
      *piVar5 = *(int *)(temp_v0 + 0xa00) + 1;
    } while (temp_v2 < 4);
    temp_v4 = 0xc;
    if (*(int *)(temp_v0 + 0x2c) != 0) {
      temp_v2 = FUN_001ab888();
      temp_v4 = *(unsigned char *)(temp_v2 + 0x1ca3) - 0xc;
    }
    else {
      temp_v2 = FUN_001ab888();
      if (*(unsigned char *)(temp_v2 + 0x1ca3) >= 0xc) {
        temp_v2 = 0;
        goto LAB_0023ea5c;
      }
      temp_v2 = FUN_001ab888();
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x1ca3);
    }
    temp_v2 = 0;
    if ((int)temp_v4 >= 1) {
LAB_0023ea5c:
      do {
        temp_v1 = FUN_001643b4(0x11,temp_v2 + 0x31);
        temp_v3 = temp_v2 * 2;
        temp_v2 = temp_v2 + 1;
        *(unsigned short *)(temp_v0 + temp_v3 + 0x9cc) = temp_v1;
        *piVar5 = *(int *)(temp_v0 + 0xa00) + 1;
      } while (temp_v2 < (int)temp_v4);
    }
    temp_v1 = FUN_001643b4(0x11,0x24);
    *(unsigned short *)(temp_v0 + 0x9fc) = temp_v1;
    temp_v1 = FUN_001643b4(0x11,0x25);
    *(unsigned short *)(temp_v0 + 0x9fe) = temp_v1;
    *piVar5 = *(int *)(temp_v0 + 0xa00) + 2;
    return;
  }
  do {
    temp_v1 = FUN_001643b4(0x11,temp_v2 + 0x57);
    temp_v3 = temp_v2 * 2;
    temp_v2 = temp_v2 + 1;
    *(unsigned short *)(temp_v0 + temp_v3 + 0x9c4) = temp_v1;
    *piVar5 = *(int *)(temp_v0 + 0xa00) + 1;
  } while (temp_v2 < 4);
  temp_v3 = 0;
  temp_v2 = FUN_001ab888();
  if (*(char *)(temp_v2 + 0x1ca3) != '\0') {
    do {
      temp_v1 = FUN_001643b4(0x11,temp_v3 + 0x5b);
      temp_v2 = temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      *(unsigned short *)(temp_v0 + temp_v2 + 0x9cc) = temp_v1;
      *piVar5 = *(int *)(temp_v0 + 0xa00) + 1;
      temp_v2 = FUN_001ab888();
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x1ca3));
  }
  return;
}
