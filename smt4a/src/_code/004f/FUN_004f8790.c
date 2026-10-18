/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f8790` (_code @ 0x4f8790, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_004f89dc; /* 0x4f89dc */
extern unsigned int DAT_005737f0; /* 0x5737f0 */
extern unsigned int DAT_005737fc; /* 0x5737fc */
extern unsigned int DAT_00573800; /* 0x573800 */
extern unsigned int DAT_00573804; /* 0x573804 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0019a37c. */
/* Supplied declaration required: FUN_002e3390. */
/* Supplied declaration required: FUN_002e342c. */
extern unsigned int FUN_002e4c2c(int);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_003478dc. */


void FUN_004f8790(int param_1)

{
/* irregular: 3 goto(s); 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [128];
  int temp_v8 [33];
  
  if (*(int *)(param_1 + 0x1f58) != 0) {
    temp_v4 = 0;
    do {
      temp_v3 = *(int *)(param_1 + 0x1f58) + temp_v4 * 0x16;
      temp_v1 = FUN_002e3390(temp_v3);
      if ((temp_v1 != 0) && (temp_v1 = temp_v3, FUN_0030ea58(temp_v3,&LAB_004f89dc), temp_v1 != 0)) {
        pcVar3 = "NOT_EFT";
        FUN_0030ea58("NOT_EFT",temp_v3);
        if (pcVar3 != (char *)0x0) {
          if (temp_v3 != 0) {
            temp_v2 = FUN_002e3390(DAT_005737f0);
            temp_v1 = FUN_0019a37c(temp_v3,DAT_005737f0,temp_v2);
            if (temp_v1 == 0) goto LAB_004f89c0;
          }
          if ((temp_v3 == 0) || (temp_v1 = temp_v3, FUN_0030ea58(temp_v3,DAT_00573800), temp_v1 != 0)) {
            if (temp_v3 != 0) {
              temp_v2 = FUN_002e3390(DAT_005737fc);
              temp_v1 = FUN_0019a37c(temp_v3,DAT_005737fc,temp_v2);
              if (temp_v1 == 0) goto LAB_004f89c0;
            }
            if ((temp_v3 == 0) || (temp_v1 = temp_v3, FUN_0030ea58(temp_v3,DAT_00573804), temp_v1 != 0)) {
              FUN_002e6354(temp_v7,0x80);
              FUN_002e6354(temp_v8,0x80);
              FUN_00100388(temp_v8,"battle/effect/%s.eft",temp_v3);
              FUN_002e342c(temp_v7,temp_v8);
              temp_v1 = FUN_002e3390(temp_v7);
              if (temp_v1 != 0) {
                temp_v8[0] = temp_v3;
                if (temp_v3 != 0) {
                  temp_v1 = 0;
                  do {
                    temp_v2 = FUN_002e3390("ef_e_ref" + temp_v1 * 0x20);
                    temp_v3 = FUN_0019a37c(temp_v8[0],"ef_e_ref" + temp_v1 * 0x20,temp_v2);
                    if (temp_v3 == 0) {
                      if (-1 < temp_v1) {
                        *(unsigned char *)(param_1 + temp_v4 * 0x8c + 0x1f5c) =
                             *(unsigned char *)(param_1 + temp_v1 * 0x8c + 0x281c);
                        goto LAB_004f89c0;
                      }
                      break;
                    }
                    temp_v1 = temp_v1 + 1;
                  } while (temp_v1 < 0xb);
                }
                temp_v1 = param_1 + temp_v4 * 0x8c;
                pcVar3 = *(char **)(temp_v1 + 0x1f60);
                temp_v0 = *pcVar3;
                temp_v5 = temp_v0 == 'V';
                if (temp_v5) {
                  temp_v0 = pcVar3[1];
                }
                temp_v6 = temp_v5 && temp_v0 == 'E';
                if (temp_v5 && temp_v0 == 'E') {
                  temp_v6 = pcVar3[2] == 'R';
                }
                if (temp_v6) {
                  temp_v2 = FUN_002e4c2c(temp_v1 + 0x1f64);
                  *(char *)(temp_v1 + 0x1f5c) = (char)temp_v2;
                  FUN_003478dc(temp_v2,pcVar3);
                  *(char *)(temp_v1 + 0x1f5c) = (char)temp_v2;
                }
              }
            }
          }
        }
      }
LAB_004f89c0:
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
  }
  return;
}
