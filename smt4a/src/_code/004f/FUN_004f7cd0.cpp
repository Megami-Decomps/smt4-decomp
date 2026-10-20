/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7cd0` (_code @ 0x4f7cd0, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_002e3390(...);
int FUN_002e342c(...);
int FUN_002e6354(...);
int FUN_0030ea58(...);
int FUN_003478dc(...);

extern unsigned char DAT_00528544; /* 0x528544 */
extern unsigned int DAT_005737f0; /* 0x5737f0 */
extern unsigned int DAT_005737fc; /* 0x5737fc */
extern unsigned int DAT_00573800; /* 0x573800 */
extern unsigned int DAT_00573804; /* 0x573804 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_0019a37c(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e3390. */
/* Supplied declaration required: FUN_002e342c. */
extern unsigned int FUN_002e4c2c(int);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_003478dc. */


void FUN_004f7cd0(int param_1)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [128];
  unsigned char temp_v7 [132];
  
  if (*(int *)(param_1 + 0x1f54) != 0) {
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(param_1 + 0x1f54) + temp_v3 * 0x16 + 0x58;
      temp_v1 = FUN_002e3390(temp_v4);
      if ((temp_v1 != 0) && (temp_v1 = temp_v4, FUN_0030ea58(temp_v4,&DAT_00528544), temp_v1 != 0)) {
        pcVar3 = "NOT_EFT";
        FUN_0030ea58("NOT_EFT",temp_v4);
        if (pcVar3 != (char *)0x0) {
          if (temp_v4 != 0) {
            temp_v2 = FUN_002e3390(DAT_005737f0);
            temp_v1 = FUN_0019a37c(temp_v4,DAT_005737f0,temp_v2);
            if (temp_v1 == 0) goto LAB_004f7e84;
          }
          if ((temp_v4 == 0) || (temp_v1 = temp_v4, FUN_0030ea58(temp_v4,DAT_00573800), temp_v1 != 0)) {
            if (temp_v4 != 0) {
              temp_v2 = FUN_002e3390(DAT_005737fc);
              temp_v1 = FUN_0019a37c(temp_v4,DAT_005737fc,temp_v2);
              if (temp_v1 == 0) goto LAB_004f7e84;
            }
            if ((temp_v4 == 0) || (temp_v1 = temp_v4, FUN_0030ea58(temp_v4,DAT_00573804), temp_v1 != 0)) {
              FUN_002e6354(temp_v6,0x80);
              FUN_002e6354(temp_v7,0x80);
              FUN_00100388(temp_v7,"battle/effect/%s.eft",temp_v4);
              FUN_002e342c(temp_v6,temp_v7);
              temp_v1 = FUN_002e3390(temp_v6);
              if (temp_v1 != 0) {
                temp_v1 = param_1 + temp_v3 * 0x8c;
                pcVar3 = *(char **)(temp_v1 + 0x2190);
                if (*pcVar3 == 'V') {
                  temp_v0 = pcVar3[1];
                  temp_v5 = temp_v0 == 'E';
                  if (temp_v5) {
                    temp_v0 = pcVar3[2];
                  }
                  if (temp_v5 && temp_v0 == 'R') {
                    temp_v2 = FUN_002e4c2c(temp_v1 + 0x2194);
                    *(char *)(temp_v1 + 0x218c) = (char)temp_v2;
                    FUN_003478dc(temp_v2,pcVar3);
                    *(char *)(temp_v1 + 0x218c) = (char)temp_v2;
                  }
                }
              }
            }
          }
        }
      }
LAB_004f7e84:
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
  }
  return;
}

} /* extern "C" */
