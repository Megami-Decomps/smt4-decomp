/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c650` (_code @ 0x10c650, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char DAT_004e2634; /* 0x4e2634 */
extern unsigned char DAT_004e2636; /* 0x4e2636 */
extern unsigned char DAT_004e2637; /* 0x4e2637 */
extern unsigned int DAT_004e3138; /* 0x4e3138 */
extern unsigned int DAT_004e313c; /* 0x4e313c */
extern unsigned int DAT_004e3140; /* 0x4e3140 */
extern unsigned int DAT_004e3144; /* 0x4e3144 */
extern unsigned int DAT_004e3148; /* 0x4e3148 */
extern unsigned char DAT_004e3150; /* 0x4e3150 */
extern unsigned char DAT_004e3152; /* 0x4e3152 */
extern signed char DAT_004e316b; /* 0x4e316b */
extern int DAT_004e3180; /* 0x4e3180 */

/* Supplied declaration required: FUN_00121b78. */
extern unsigned int FUN_00121c30(int);
/* Supplied declaration required: FUN_002bd20c. */
/* Supplied declaration required: FUN_002bda30. */
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, int, unsigned int);


unsigned int FUN_0010c650(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (param_1 < 4) {
    temp_v0 = param_1 * 0x3c;
    if ((&DAT_004e2636)[temp_v0] == '\0') {
      if (param_2 != 0) {
        temp_v1 = FUN_002c5300(0x10000,0x100,0,param_2,1);
        *(unsigned int *)(temp_v0 + 0x4e262c) = temp_v1;
        FUN_00121b78(temp_v0 + 0x4e25fc,temp_v1,param_2);
        temp_v1 = FUN_00121c30(temp_v0 + 0x4e25fc);
        *(unsigned int *)(temp_v0 + 0x4e2630) = temp_v1;
        (&DAT_004e2637)[temp_v0] = 1;
      }
      (&DAT_004e2636)[temp_v0] = 1;
      *(char *)(temp_v0 + 0x4e2635) = (char)param_1;
      (&DAT_004e2634)[temp_v0] = 0x40;
      DAT_004e3138 = 0x3f000000;
      DAT_004e3150 = DAT_004e3150 | 1;
      DAT_004e313c = 0x1e;
      DAT_004e3140 = 0x1e;
      DAT_004e3144 = 0xf;
      DAT_004e3148 = 0xf;
      if (DAT_004e316b != '\0') {
        DAT_004e3152 = 1;
      }
      temp_v2 = 0;
      while ((&DAT_004e2636)[temp_v2 * 0x3c] == '\0') {
        temp_v2 = temp_v2 + 1;
        if ((int)temp_v2 >= 4) {
          DAT_004e3148 = 0xf;
          DAT_004e3144 = 0xf;
          DAT_004e3140 = 0x1e;
          DAT_004e313c = 0x1e;
          DAT_004e3138 = 0x3f000000;
          return 1;
        }
      }
      if (temp_v2 == 0xffffffff) {
        DAT_004e3138 = 0x3f000000;
        DAT_004e313c = 0x1e;
        DAT_004e3140 = 0x1e;
        DAT_004e3144 = 0xf;
        DAT_004e3148 = 0xf;
        DAT_004e3180 = 0;
        return 1;
      }
      if (temp_v2 >= 4) {
        DAT_004e3138 = 0x3f000000;
        DAT_004e313c = 0x1e;
        DAT_004e3140 = 0x1e;
        DAT_004e3144 = 0xf;
        DAT_004e3148 = 0xf;
        return 1;
      }
      temp_v0 = temp_v2 * 0x3c;
      if ((&DAT_004e2636)[temp_v0] == '\0') {
        DAT_004e3138 = 0x3f000000;
        DAT_004e313c = 0x1e;
        DAT_004e3140 = 0x1e;
        DAT_004e3144 = 0xf;
        DAT_004e3148 = 0xf;
        return 1;
      }
      if (DAT_004e3150 != 0) {
        temp_v4 = 0;
        do {
          temp_v3 = *(int *)(temp_v0 + 0x4e25fc + temp_v4 * 4 + 0x20);
          if (temp_v3 != 0) {
            FUN_002bda30(temp_v3,0);
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 4);
        (&DAT_004e2634)[temp_v0] = 0x40;
        if ((&DAT_004e2637)[temp_v0] != '\0') {
          FUN_002bd20c(temp_v0 + 0x4e25fc,*(unsigned int *)(temp_v0 + 0x4e2630));
        }
      }
      DAT_004e3180 = temp_v0 + 0x4e25fc;
      return 1;
    }
  }
  return 0;
}
