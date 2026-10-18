/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290874` (_code @ 0x290874, 0x1c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043dd50; /* 0x43dd50 */

extern int FUN_002904d0(void);
extern unsigned int FUN_00290694(void);
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_002b8794. */
/* Supplied declaration required: FUN_002b8b78. */


void FUN_00290874(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = DAT_0043dd50;
  if (*(char *)(DAT_0043dd50 + 0x5c4) != '\0') {
    if (*(int *)(DAT_0043dd50 + 0x5d0) == 1) {
      FUN_002b8b78(0x6c);
    }
    if (*(int *)(temp_v4 + 0x5d0) == 2) {
      if (*(int *)(temp_v4 + 0x5c8) == 0) {
        FUN_002b8b78(0x6d);
      }
      if (*(int *)(temp_v4 + 0x5c8) == 1) {
        FUN_002b8b78(0x6e);
        return;
      }
    }
    return;
  }
  if (*(int *)(DAT_0043dd50 + 0x5d0) == 1) {
    FUN_002b8b78(0x6f);
  }
  if (*(int *)(temp_v4 + 0x5d0) == 2) {
    if (*(int *)(temp_v4 + 0x5c8) == 0) {
      FUN_002b8b78(0x70);
    }
    if (*(int *)(temp_v4 + 0x5c8) == 1) {
      FUN_002b8b78(0x71);
    }
  }
  if (*(int *)(temp_v4 + 0x5d0) == 3) {
    if (*(int *)(temp_v4 + 0x5c8) == 0) {
      FUN_002b8b78(0x72);
    }
    if (*(int *)(temp_v4 + 0x5c8) == 1) {
      FUN_002b8b78(0x73);
    }
    if (*(int *)(temp_v4 + 0x5c8) == 2) {
      FUN_002b8b78(0x74);
    }
  }
  if (*(char *)(temp_v4 + 0x5f1) != '\0') {
    FUN_002b8794(5,1,0x32);
    FUN_002b8794(2,0x12,0,1);
  }
  temp_v1 = FUN_0029f260(temp_v4 + 0x660);
  temp_v2 = FUN_0029f248(temp_v4 + 0x660);
  temp_v0 = *(unsigned short *)(temp_v4 + (temp_v2 + temp_v1) * 2 + 0x78a);
  temp_v3 = FUN_00290694();
  if (temp_v3 == temp_v0) {
    FUN_002b8794(5,1,0x33);
  }
  else if (*(char *)(temp_v4 + 0x5f1) == '\0') {
    FUN_002b8794(5,1,0x31);
  }
  temp_v4 = FUN_002904d0();
  if (temp_v4 == 0) {
    FUN_002b8794(2,0x12,0,1);
    return;
  }
  FUN_002b8794(2,4,0x33,1);
  return;
}
