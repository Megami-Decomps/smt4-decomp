/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00196d78` (_code @ 0x196d78, 0x248 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027f3dc(...);
int FUN_0029ce60(unsigned int, int, int, int, int);
int FUN_002b7bca(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_001b16a8(...); /* 0x1b16a8 */
extern int FUN_001e1540(...); /* 0x1e1540 */
extern int FUN_001f5f94(...); /* 0x1f5f94 */
extern int FUN_001f6098(...); /* 0x1f6098 */
extern int FUN_00219260(...); /* 0x219260 */
extern int FUN_002d02b0(...); /* 0x2d02b0 */
extern int FUN_002dc7a0(...); /* 0x2dc7a0 */
extern int FUN_002dc8a8(...); /* 0x2dc8a8 */
extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_0027f3dc. */
/* Supplied declaration required: FUN_0029ce60. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */


void FUN_00196d78(void)

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
  temp_v2 = FUN_002a0d0c();
  pbVar10 = (unsigned char *)(temp_v2 + 0x13);
  temp_v1 = ~(*(unsigned char *)(temp_v2 + 0x13) >> 7) & 1;
  if ((*(unsigned char *)(temp_v2 + 0x13) & 0x7f) == 1) {
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_001f5f94);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_002dc7a0);
    }
  }
  if ((*pbVar10 & 0x7f) == 2) {
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_001b16a8);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_00219260);
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
          FUN_0029ce60(temp_v5,1,0,0,0);
        }
        if ((*(unsigned int *)(temp_v6 + 0x1394) & 3) == 3) {
          temp_v3 = (*puVar8 & 0x3fffffff) >> 0xf;
          FUN_0029ce60(temp_v3,1,0,0,0);
          temp_v5 = temp_v5 + temp_v3;
        }
        temp_v4 = temp_v4 + 1;
        *(unsigned int *)(temp_v0 + (unsigned int)*(unsigned short *)(temp_v2 + 0x6ce2) * 4 + 0x78a0) = temp_v5;
      } while (temp_v4 < *puVar9);
    }
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x6ce2,*puVar9,2,FUN_001f6098);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x6ce2,*puVar9,2,FUN_002dc8a8);
    }
  }
  if ((*pbVar10 & 0x7f) == 3) {
    if (temp_v1 != 0) {
      FUN_0027f3dc(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_001e1540);
      return;
    }
    FUN_0027f3dc(temp_v0 + 0x6ce2,*(unsigned int *)(temp_v0 + 0x789c),2,FUN_002d02b0);
    return;
  }
  return;
}

} /* extern "C" */
