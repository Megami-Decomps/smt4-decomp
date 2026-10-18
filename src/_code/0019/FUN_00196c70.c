/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00196c70` (_code @ 0x196c70, 0x248 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_001b15a4(); /* 0x1b15a4 */
extern int FUN_001e1440(); /* 0x1e1440 */
extern int FUN_001f5eac(); /* 0x1f5eac */
extern int FUN_001f5fb0(); /* 0x1f5fb0 */
extern int FUN_00219164(); /* 0x219164 */
extern int FUN_002d0204(); /* 0x2d0204 */
extern int FUN_002dc738(); /* 0x2dc738 */
extern int FUN_002dc840(); /* 0x2dc840 */
extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_0027f3d4. */
/* Supplied declaration required: FUN_0029d100. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */


void FUN_00196c70(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned char *pbVar10;
  
  temp_v0 = DAT_0043dd68;
  temp_v2 = FUN_002a0fac();
  pbVar10 = (unsigned char *)(temp_v2 + 0x13);
  temp_v1 = ~(*(unsigned char *)(temp_v2 + 0x13) >> 7) & 1;
  if ((*(unsigned char *)(temp_v2 + 0x13) & 0x7f) == 1) {
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_001f5eac);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_002dc738);
    }
  }
  if ((*pbVar10 & 0x7f) == 2) {
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_001b15a4);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_00219164);
    }
  }
  if ((*pbVar10 & 0x7f) == 7) {
    puVar9 = (unsigned int *)(temp_v0 + 0x789c);
    temp_v4 = 0;
    if (temp_v4 < *puVar9) {
      do {
        temp_v2 = temp_v0 + temp_v4 * 2;
        temp_v5 = 0;
        temp_v6 = temp_v0 + (unsigned int)*(unsigned short *)(temp_v2 + 0x6ce2) * 8;
        puVar8 = (unsigned int *)(temp_v6 + 0x1390);
        temp_v3 = *puVar8;
        if (temp_v3 >> 0x1e == 3) {
          temp_v5 = temp_v3 & 0x7fff;
          FUN_0029d100(temp_v5,1,0,0,0);
        }
        if ((*(unsigned int *)(temp_v6 + 0x1394) & 3) == 3) {
          temp_v3 = (*puVar8 & 0x3fffffff) >> 0xf;
          FUN_0029d100(temp_v3,1,0,0,0);
          temp_v5 = temp_v5 + temp_v3;
        }
        temp_v4 = temp_v4 + 1;
        *(unsigned int *)(temp_v0 + (unsigned int)*(unsigned short *)(temp_v2 + 0x6ce2) * 4 + 0x78a0) = temp_v5;
      } while (temp_v4 < *puVar9);
    }
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x6ce2,*puVar9,2,FUN_001f5fb0);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x6ce2,*puVar9,2,FUN_002dc840);
    }
  }
  if ((*pbVar10 & 0x7f) == 3) {
    if (temp_v1 != 0) {
      FUN_0027f3d4(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_001e1440);
      return;
    }
    FUN_0027f3d4(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_002d0204);
    return;
  }
  return;
}
