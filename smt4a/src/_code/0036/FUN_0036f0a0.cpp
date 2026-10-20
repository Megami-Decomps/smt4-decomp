/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f0a0` (_code @ 0x36f0a0, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001028b8(...);
int FUN_00168750(...);
int asdMemFree(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
} void_stack;

extern int FUN_002adc94(...); /* 0x2adc94 */
extern unsigned char LAB_0036f208; /* 0x36f208 */
extern unsigned char LAB_0036f21c; /* 0x36f21c */
extern int DAT_005cc500; /* 0x5cc500 */
extern unsigned int DAT_005cc504; /* 0x5cc504 */

/* Supplied declaration required: FUN_001028b8. */
/* Supplied declaration required: FUN_00168750. */
/* Supplied declaration required: asdMemFree. */


void FUN_0036f0a0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [128];
  
  piVar2 = (int *)0x5cb200;
  switch(DAT_005cc504) {
  case 0:
    if (DAT_005cc500 != 0) {
      DAT_005cc504 = 1;
      return;
    }
    break;
  case 1:
    temp_v1 = 0;
    if (0 < DAT_005cc500) {
      do {
        temp_v0 = *(unsigned int *)(*piVar2 + 0x30);
        temp_v2 = temp_v0 == 0;
        if (temp_v2) {
          temp_v0 = (unsigned int)*(unsigned char *)(piVar2 + 0x12);
        }
        if (temp_v2 && temp_v0 == 0) {
          FUN_001028b8(temp_v3,0x80,&LAB_0036f21c,&LAB_0036f208,piVar2 + 1);
          *(unsigned char *)((int)piVar2 + 0x49) = 1;
          FUN_00168750(temp_v3,piVar2 + 0x11,1,FUN_002adc94,piVar2);
        }
        temp_v1 = temp_v1 + 1;
        piVar2 = piVar2 + 0x13;
      } while (temp_v1 < DAT_005cc500);
    }
    DAT_005cc504 = 2;
    return;
  case 2:
    temp_v1 = 0;
    if (0 < DAT_005cc500) {
      do {
        temp_v0 = *(unsigned int *)(*piVar2 + 0x30);
        temp_v2 = temp_v0 == 0;
        if (temp_v2) {
          temp_v0 = (unsigned int)*(unsigned char *)(piVar2 + 0x12);
        }
        if (temp_v2 && temp_v0 == 0) {
          if (*(char *)((int)piVar2 + 0x49) == '\x01') {
            return;
          }
          if (*(char *)((int)piVar2 + 0x49) == '\0') {
            DAT_005cc504 = 1;
            return;
          }
        }
        temp_v1 = temp_v1 + 1;
        piVar2 = piVar2 + 0x13;
      } while (temp_v1 < DAT_005cc500);
    }
    DAT_005cc504 = 3;
    return;
  case 3:
    temp_v1 = 0;
    temp_v2 = DAT_005cc500 < 1;
    if (0 < DAT_005cc500) {
      do {
        if (piVar2[0x11] != 0) {
          asdMemFree();
          piVar2[0x11] = (unsigned int)temp_v2;
        }
        temp_v1 = temp_v1 + 1;
        piVar2 = piVar2 + 0x13;
      } while (temp_v1 < DAT_005cc500);
    }
    break;
  default:
    return;
  }
  DAT_005cc504 = 4;
  return;
}

} /* extern "C" */
