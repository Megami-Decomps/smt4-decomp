/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f716c` (_code @ 0x4f716c, 0x298 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_004f740c; /* 0x4f740c */
extern unsigned int DAT_005737f0; /* 0x5737f0 */
extern unsigned int DAT_005737fc; /* 0x5737fc */
extern unsigned int DAT_00573800; /* 0x573800 */
extern unsigned int DAT_00573804; /* 0x573804 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00100d60(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0019a37c. */
extern unsigned int FUN_002282c8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e3390. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0030ea58. */
extern int FUN_0035bcdc(int);
/* Supplied declaration required: FUN_004f612c. */


unsigned int FUN_004f716c(int param_1)

{
/* irregular: 3 goto(s); 8 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [128];
  int temp_v6 [33];
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x1f58) != 0) {
    temp_v4 = 0;
    do {
      temp_v3 = *(int *)(param_1 + 0x1f58) + temp_v4 * 0x16;
      temp_v0 = FUN_002e3390(temp_v3);
      if ((temp_v0 != 0) && (temp_v0 = temp_v3, FUN_0030ea58(temp_v3,&LAB_004f740c), temp_v0 != 0)) {
        pcVar2 = "NOT_EFT";
        FUN_0030ea58("NOT_EFT",temp_v3);
        if ((pcVar2 != (char *)0x0) &&
           ((temp_v3 == 0 || (temp_v0 = temp_v3, FUN_0030ea58(temp_v3,DAT_00573800), temp_v0 != 0)))) {
          if (temp_v3 != 0) {
            temp_v1 = FUN_002e3390(DAT_005737fc);
            temp_v0 = FUN_0019a37c(temp_v3,DAT_005737fc,temp_v1);
            if (temp_v0 == 0) goto LAB_004f73ec;
          }
          if (temp_v3 != 0) {
            temp_v1 = FUN_002e3390(DAT_005737f0);
            temp_v0 = FUN_0019a37c(temp_v3,DAT_005737f0,temp_v1);
            if (temp_v0 == 0) {
              temp_v2 = 0;
              do {
                FUN_00100388(temp_v6,"%s%02d",DAT_005737f0,temp_v2);
                piVar4 = temp_v6;
                FUN_0030ea58(piVar4,temp_v3);
                if (piVar4 == (int *)0x0) {
                  FUN_004f612c(param_1);
                  temp_v1 = FUN_002282c8(temp_v2 & 0xff,7,0);
                  *(unsigned int *)(param_1 + 0x33a8) = temp_v1;
                  *(char *)(param_1 + 0x33ac) = (char)temp_v2;
                  goto LAB_004f73ec;
                }
                temp_v2 = temp_v2 + 1;
              } while ((int)temp_v2 < 0xb);
            }
          }
          if ((temp_v3 == 0) || (temp_v0 = temp_v3, FUN_0030ea58(temp_v3,DAT_00573804), temp_v0 != 0)) {
            FUN_002e6354(temp_v5,0x80);
            FUN_002e6354(temp_v6,0x80);
            FUN_00100388(temp_v6,"battle/effect/%s.eft",temp_v3);
            FUN_002e342c(temp_v5,temp_v6);
            temp_v0 = FUN_002e3390(temp_v5);
            if (temp_v0 != 0) {
              temp_v6[0] = temp_v3;
              if (temp_v3 != 0) {
                temp_v0 = 0;
                do {
                  temp_v1 = FUN_002e3390("ef_e_ref" + temp_v0 * 0x20);
                  temp_v3 = FUN_0019a37c(temp_v6[0],"ef_e_ref" + temp_v0 * 0x20,temp_v1);
                  if (temp_v3 == 0) {
                    if (-1 < temp_v0) goto LAB_004f73ec;
                    break;
                  }
                  temp_v0 = temp_v0 + 1;
                } while (temp_v0 < 0xb);
              }
              temp_v0 = param_1 + temp_v4 * 0x8c;
              temp_v3 = FUN_00100d60(temp_v5,0x2f);
              FUN_002e342c(temp_v0 + 0x1f64,temp_v3 + 1);
              temp_v3 = FUN_0035bcdc(temp_v0 + 0x1f64);
              if (temp_v3 == 0xff) {
                FUN_002804b0(temp_v5,temp_v0 + 0x1f60,1);
                *(unsigned char *)(temp_v0 + 0x1fe4) = *(unsigned char *)(temp_v0 + 0x1fe4) | 1;
              }
            }
          }
        }
      }
LAB_004f73ec:
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v1 = 1;
  }
  return temp_v1;
}
