/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293520` (_code @ 0x293520, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8584(int, int);
int ifTouchRegionRemove(void);
int __aeabi_memset4(int, int, unsigned int);

extern int g_partyPanel; /* 0x43dcf0 */

extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: __aeabi_memset4. */


void FUN_00293520(void)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  temp_v0 = g_partyPanel;
  temp_v2 = 0;
  if (0 < *(int *)(g_partyPanel + 0x6b8)) {
    do {
      ifTouchRegionRemove();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v0 + 0x6b8));
  }
  *(unsigned int *)(temp_v0 + 0x6b8) = 0;
  __aeabi_memset4(temp_v0 + 0x67c,0x3c,0xffffffff);
  temp_v2 = 0;
  piVar5 = (int *)(temp_v0 + 0x6b8);
  if (*(char *)(temp_v0 + 0x42) == '\0') {
    do {
      temp_v1 = FUN_002b8584(0x19,temp_v2 + 0x2d);
      temp_v3 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(temp_v0 + temp_v3 + 0x67c) = temp_v1;
      *piVar5 = *(int *)(temp_v0 + 0x6b8) + 1;
    } while (temp_v2 < 4);
    temp_v4 = 0xc;
    if (*(int *)(temp_v0 + 0x2c) != 0) {
      temp_v2 = gameGetSlotTable();
      temp_v4 = *(unsigned char *)(temp_v2 + 0x910b) - 0xc;
    }
    else {
      temp_v2 = gameGetSlotTable();
      if (*(unsigned char *)(temp_v2 + 0x910b) >= 0xc) {
        temp_v2 = 0;
        goto LAB_0029366c;
      }
      temp_v2 = gameGetSlotTable();
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x910b);
    }
    temp_v2 = 0;
    if ((int)temp_v4 >= 1) {
LAB_0029366c:
      do {
        temp_v1 = FUN_002b8584(0x19,temp_v2 + 0x31);
        temp_v3 = temp_v2 * 2;
        temp_v2 = temp_v2 + 1;
        *(unsigned short *)(temp_v0 + temp_v3 + 0x684) = temp_v1;
        *piVar5 = *(int *)(temp_v0 + 0x6b8) + 1;
      } while (temp_v2 < (int)temp_v4);
    }
    temp_v1 = FUN_002b8584(0x19,0x24);
    *(unsigned short *)(temp_v0 + 0x6b4) = temp_v1;
    temp_v1 = FUN_002b8584(0x19,0x25);
    *(unsigned short *)(temp_v0 + 0x6b6) = temp_v1;
    *piVar5 = *(int *)(temp_v0 + 0x6b8) + 2;
    return;
  }
  do {
    temp_v1 = FUN_002b8584(0x19,temp_v2 + 0x57);
    temp_v3 = temp_v2 * 2;
    temp_v2 = temp_v2 + 1;
    *(unsigned short *)(temp_v0 + temp_v3 + 0x67c) = temp_v1;
    *piVar5 = *(int *)(temp_v0 + 0x6b8) + 1;
  } while (temp_v2 < 4);
  temp_v3 = 0;
  temp_v2 = gameGetSlotTable();
  if (*(char *)(temp_v2 + 0x910b) != '\0') {
    do {
      temp_v1 = FUN_002b8584(0x19,temp_v3 + 0x5b);
      temp_v2 = temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      *(unsigned short *)(temp_v0 + temp_v2 + 0x684) = temp_v1;
      *piVar5 = *(int *)(temp_v0 + 0x6b8) + 1;
      temp_v2 = gameGetSlotTable();
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x910b));
  }
  return;
}

} /* extern "C" */
