/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106650` (_code @ 0x106650, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_001066f4; /* 0x1066f4 */
extern int DAT_004c5814; /* 0x4c5814 */
extern unsigned char DAT_004c5818; /* 0x4c5818 */
extern unsigned char DAT_004c5819; /* 0x4c5819 */
extern unsigned char DAT_004c581a; /* 0x4c581a */
extern unsigned int DAT_004c581c; /* 0x4c581c */
extern unsigned int DAT_004c5820; /* 0x4c5820 */
extern unsigned int DAT_004c5824; /* 0x4c5824 */
extern unsigned int DAT_004c5828; /* 0x4c5828 */
extern unsigned int DAT_004c582c; /* 0x4c582c */

/* Supplied declaration required: FUN_0010d2bc. */
/* Supplied declaration required: FUN_0010dd80. */
/* Supplied declaration required: FUN_0010e948. */
extern int FUN_002c3124(unsigned char *, unsigned int *, unsigned int);
extern int FUN_002c564c(unsigned int);


void FUN_00106650(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    FUN_0010dd80();
    DAT_004c5819 = 0x60;
    DAT_004c5818 = DAT_004c5818 | 3;
    DAT_004c581a = 0;
    FUN_0010d2bc(1);
    DAT_004c581c = 0x3f333333;
    DAT_004c5820 = 5;
    DAT_004c5824 = 0x1e;
    DAT_004c5828 = 1;
    DAT_004c582c = 0x14;
    FUN_0010e948(1);
    temp_v1[0] = 0;
    if (DAT_004c5814 == 0) {
      DAT_004c5814 = FUN_002c3124(&LAB_001066f4,temp_v1,0);
    }
  }
  return;
}
