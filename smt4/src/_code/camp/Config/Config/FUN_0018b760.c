/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b760` (_code @ 0x18b760, 0x1b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0018b954; /* 0x18b954 */
extern unsigned char LAB_0018b964; /* 0x18b964 */
extern int DAT_0043dc58; /* 0x43dc58 */

extern int FUN_002973ec(void);
/* Supplied declaration required: FUN_00297410. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: FUN_002a5ed0. */
extern int FUN_002c09d0(unsigned int);
extern unsigned int FUN_002c0c74(unsigned int);
/* Supplied declaration required: FUN_002c0cc4. */
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4c2c. */


void FUN_0018b760(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (DAT_0043dc58 == 0) {
    temp_v0 = 0x100;
    FUN_002c498c(0x100,0x100,0,0xbc,1);
    DAT_0043dc58 = temp_v0;
  }
  temp_v0 = DAT_0043dc58;
  FUN_002c4938();
  *(unsigned int *)(temp_v0 + 100) = 0;
  *(unsigned char *)(temp_v0 + 0xa8) = 0;
  FUN_002c4c2c(0x2f);
  FUN_002a5ed0(0x2f,0);
  FUN_00297468(&LAB_0018b954,temp_v0 + 0xac,0);
  FUN_00297468(&LAB_0018b964,temp_v0 + 0xb0,0);
  FUN_00297410(0x36);
  temp_v1 = FUN_002c0cec(0x36,0);
  FUN_002c0cc4();
  temp_v1 = FUN_002c0c74(temp_v1);
  FUN_0029f848(temp_v0,temp_v1,1,1,0,1);
  temp_v2 = FUN_002973ec();
  temp_v1 = 1;
  temp_v3 = FUN_002c09d0(0x555);
  if ((temp_v3 != 0) && (temp_v3 = FUN_002c09d0(0x557), temp_v3 != 0)) {
    if (temp_v2 != 0) {
      if (temp_v2 != 1) {
        if (temp_v2 == 2) {
          temp_v1 = 2;
        }
      }
      else {
        temp_v1 = 0;
      }
    }
  }
  else {
    temp_v3 = FUN_002c09d0(0x557);
    if (temp_v3 != 0) {
      if ((temp_v2 != 0) && (temp_v2 == 1)) {
        temp_v1 = 0;
      }
    }
    else {
      temp_v3 = FUN_002c09d0(0x555);
      if ((temp_v3 != 0) && (temp_v2 == 0)) {
        temp_v1 = 0;
      }
    }
  }
  *(unsigned int *)(temp_v0 + 0x80) = temp_v1;
  temp_v2 = FUN_002c09d0(0x555);
  if ((temp_v2 != 0) && (temp_v2 = FUN_002c09d0(0x557), temp_v2 != 0)) {
    *(unsigned char *)(temp_v0 + 0xa8) = 1;
  }
  else {
    *(unsigned char *)(temp_v0 + 0xa8) = 0;
  }
  return;
}
