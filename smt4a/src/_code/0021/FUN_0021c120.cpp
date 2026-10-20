/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021c120` (_code @ 0x21c120, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00280f98(unsigned int, int);

extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_00619520; /* 0x619520 */
extern unsigned int DAT_00619524; /* 0x619524 */
extern unsigned int DAT_00619528; /* 0x619528 */
extern unsigned int DAT_0061952c; /* 0x61952c */
extern unsigned int DAT_00619538; /* 0x619538 */

extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: FUN_00280f98. */


void FUN_0021c120(int param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    temp_v0 = 0;
    do {
      temp_v1 = (&DAT_00619538)[temp_v0 * 8];
      if (((temp_v1 & 2) == 0) || ((temp_v1 & 0x30) != 0)) {
        if (param_3 != 0) goto LAB_0021c16c;
      }
      else if (param_1 != -1) {
        if ((&DAT_00619528)[temp_v0 * 8] == param_1) {
          if (param_2 == 0) {
LAB_0021c16c:
            FUN_00280f98((&DAT_0061951c)[temp_v0 * 8],0);
            (&DAT_00619528)[temp_v0 * 8] = 0;
            (&DAT_00619520)[temp_v0 * 8] = 0;
            (&DAT_00619524)[temp_v0 * 8] = 0;
            (&DAT_0061952c)[temp_v0 * 8] = 0;
            *(unsigned int *)(temp_v0 * 0x20 + 0x619534) = 0;
            *(unsigned int *)(temp_v0 * 0x20 + 0x619530) = 0;
            (&DAT_00619538)[temp_v0 * 8] = 0;
          }
          else {
            (&DAT_00619524)[temp_v0 * 8] = param_2;
            (&DAT_00619538)[temp_v0 * 8] = temp_v1 | 8;
          }
        }
      }
      else {
        if (param_2 == 0) goto LAB_0021c16c;
        (&DAT_00619524)[temp_v0 * 8] = param_2;
        (&DAT_00619538)[temp_v0 * 8] = temp_v1 | 8;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  return;
}

} /* extern "C" */
