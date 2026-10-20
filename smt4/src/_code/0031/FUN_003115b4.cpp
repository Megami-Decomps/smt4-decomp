/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003115b4` (_code @ 0x3115b4, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00250798(void);
int FUN_0028fe0c(unsigned int, int);
int FUN_0029eb5c(int, int);
int FUN_002b8838(int);
int timerStart(...);
int FUN_002bf810(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_00250798. */
/* Supplied declaration required: FUN_0028fe0c. */
extern int FUN_00298f88(unsigned int);
/* Supplied declaration required: FUN_0029eb5c. */
extern int FUN_0029ee54(int);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bf810. */


void FUN_003115b4(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int unaff_r6;
  int unaff_r8;
  
  temp_v0 = DAT_0043dd50;
  *(short *)(DAT_0043dd50 + 0x97e) = (short)param_1;
  temp_v1 = FUN_00298f88(param_1);
  if (temp_v1 != 0) {
    unaff_r8 = temp_v0 + 0x5fc;
    unaff_r6 = temp_v0 + 0x6c4;
  }
  *(char *)(temp_v0 + 0x5c4) = (char)temp_v1;
  if (temp_v1 == 0) {
    unaff_r8 = temp_v0 + 0x660;
    unaff_r6 = temp_v0 + 0x78a;
  }
  temp_v2 = 0;
  *(unsigned char *)(temp_v0 + 0x5f2) = 1;
  temp_v1 = FUN_0029ee54(unaff_r8);
  if (0 < temp_v1) {
    do {
      if (*(unsigned short *)(unaff_r6 + temp_v2 * 2) == param_1) {
        FUN_0029eb5c(unaff_r8,temp_v2);
        break;
      }
      temp_v2 = temp_v2 + 1;
      temp_v1 = FUN_0029ee54(unaff_r8);
    } while (temp_v2 < temp_v1);
  }
  FUN_00250798();
  FUN_0028fe0c(param_1,0);
  timerStart(temp_v0 + 0x34,0);
  timerStart(temp_v0 + 0x494,2,0);
  temp_v0 = DAT_0043dd50;
  *(unsigned int *)(DAT_0043dd50 + 8) = *(unsigned int *)(DAT_0043dd50 + 4);
  *(unsigned int *)(temp_v0 + 4) = 0x17;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  FUN_002b8838(0x1a);
  FUN_002bf810(0x100025c);
  return;
}

} /* extern "C" */
