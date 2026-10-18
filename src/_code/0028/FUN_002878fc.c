/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002878fc` (_code @ 0x2878fc, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern int DAT_00446fec; /* 0x446fec */
extern int DAT_00446ff0; /* 0x446ff0 */
extern int DAT_00446ff4; /* 0x446ff4 */
extern int DAT_00446ff8; /* 0x446ff8 */
extern int DAT_00446ffc; /* 0x446ffc */
extern int DAT_00447000; /* 0x447000 */
extern int DAT_00447004; /* 0x447004 */
extern int DAT_00447008; /* 0x447008 */
extern int DAT_0044700c; /* 0x44700c */


void FUN_002878fc(int param_1)

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
  
  temp_v3 = DAT_00447004;
  temp_v2 = DAT_00447000;
  temp_v1 = DAT_00446ff0;
  temp_v5 = DAT_00446fec;
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
         (temp_v4 = DAT_00446ff4, temp_v6 = DAT_00447008, temp_v7 != 2)) {
        temp_v4 = DAT_00446ff8;
        temp_v6 = DAT_0044700c;
      }
    }
    if (0 < DAT_00446ffc) {
      psVar7 = (short *)0x493c62;
      puVar9 = (unsigned char *)0x493c64;
      temp_v5 = DAT_00446ffc;
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
