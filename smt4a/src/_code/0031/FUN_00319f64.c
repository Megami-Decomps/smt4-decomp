/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319f64` (_code @ 0x319f64, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern int DAT_00580208; /* 0x580208 */
extern int DAT_0058020c; /* 0x58020c */
extern int DAT_00580210; /* 0x580210 */
extern int DAT_00580214; /* 0x580214 */
extern int DAT_00580218; /* 0x580218 */
extern int DAT_0058021c; /* 0x58021c */
extern int DAT_00580220; /* 0x580220 */
extern int DAT_00580224; /* 0x580224 */
extern int DAT_00580228; /* 0x580228 */


void FUN_00319f64(int param_1)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short *psVar7;
  int temp_v6;
  unsigned char *puVar9;
  int temp_v7;
  
  temp_v3 = DAT_00580220;
  temp_v2 = DAT_0058021c;
  temp_v1 = DAT_0058020c;
  temp_v5 = DAT_00580208;
  if (param_1 != 0) {
    temp_v7 = 0;
    temp_v4 = temp_v5;
    temp_v6 = temp_v2;
    while( 1 ) {
      if (0 < temp_v4) {
        psVar7 = (short *)(temp_v6 + 6);
        puVar9 = (unsigned char *)(temp_v6 + 8);
        do {
          temp_v0 = *psVar7;
          psVar7 = psVar7 + 0x54;
          if (temp_v0 == param_1) {
            *puVar9 = 0;
          }
          temp_v4 = temp_v4 - 1;
          puVar9 = puVar9 + 0xa8;
        } while (temp_v4 != 0);
      }
      temp_v7 = temp_v7 + 1;
      if (temp_v7 >= 4) break;
      temp_v4 = temp_v5;
      temp_v6 = temp_v2;
      if (((temp_v7 != 0) && (temp_v4 = temp_v1, temp_v6 = temp_v3, temp_v7 != 1)) &&
         (temp_v4 = DAT_00580210, temp_v6 = DAT_00580224, temp_v7 != 2)) {
        temp_v4 = DAT_00580214;
        temp_v6 = DAT_00580228;
      }
    }
    if (0 < DAT_00580218) {
      psVar7 = (short *)0x5e271a;
      puVar9 = (unsigned char *)0x5e271c;
      temp_v5 = DAT_00580218;
      do {
        temp_v0 = *psVar7;
        psVar7 = psVar7 + 0x54;
        if (temp_v0 == param_1) {
          *puVar9 = 0;
        }
        temp_v5 = temp_v5 - 1;
        puVar9 = puVar9 + 0xa8;
      } while (temp_v5 != 0);
    }
    return;
  }
  return;
}
