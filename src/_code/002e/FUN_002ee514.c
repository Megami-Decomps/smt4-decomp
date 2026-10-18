/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee514` (_code @ 0x2ee514, 0x164 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
} void_stack;

extern int FUN_001f4a54(); /* 0x1f4a54 */
extern unsigned char LAB_002ee67c; /* 0x2ee67c */
extern unsigned char LAB_002ee690; /* 0x2ee690 */
extern int DAT_0047e500; /* 0x47e500 */
extern unsigned int DAT_0047e504; /* 0x47e504 */

/* Supplied declaration required: FUN_00252538. */
/* Supplied declaration required: FUN_002b67c0. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_002ee514(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [128];
  
  piVar2 = (int *)0x47d200;
  switch(DAT_0047e504) {
  case 0:
    if (DAT_0047e500 != 0) {
      DAT_0047e504 = 1;
      return;
    }
    break;
  case 1:
    temp_v1 = 0;
    if (0 < DAT_0047e500) {
      do {
        temp_v0 = *(unsigned int *)(*piVar2 + 0x30);
        temp_v2 = temp_v0 == 0;
        if (temp_v2) {
          temp_v0 = (unsigned int)*(unsigned char *)(piVar2 + 0x12);
        }
        if (temp_v2 && temp_v0 == 0) {
          FUN_00252538(temp_v3,0x80,&LAB_002ee690,&LAB_002ee67c,piVar2 + 1);
          *(unsigned char *)((int)piVar2 + 0x49) = 1;
          FUN_002b67c0(temp_v3,piVar2 + 0x11,0,FUN_001f4a54,piVar2);
        }
        temp_v1 = temp_v1 + 1;
        piVar2 = piVar2 + 0x13;
      } while (temp_v1 < DAT_0047e500);
    }
    DAT_0047e504 = 2;
    return;
  case 2:
    temp_v1 = 0;
    if (0 < DAT_0047e500) {
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
            DAT_0047e504 = 1;
            return;
          }
        }
        temp_v1 = temp_v1 + 1;
        piVar2 = piVar2 + 0x13;
      } while (temp_v1 < DAT_0047e500);
    }
    DAT_0047e504 = 3;
    return;
  case 3:
    temp_v1 = 0;
    temp_v2 = DAT_0047e500 < 1;
    if (0 < DAT_0047e500) {
      do {
        if (piVar2[0x11] != 0) {
          FUN_002c4360();
          piVar2[0x11] = (unsigned int)temp_v2;
        }
        temp_v1 = temp_v1 + 1;
        piVar2 = piVar2 + 0x13;
      } while (temp_v1 < DAT_0047e500);
    }
    break;
  default:
    return;
  }
  DAT_0047e504 = 4;
  return;
}
