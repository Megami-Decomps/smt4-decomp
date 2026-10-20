/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003416a0` (_code @ 0x3416a0, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int fileHandleClose(unsigned char **, int);
int FUN_002e0c48(void);
int FUN_002e0fac(void);
int taggedOwnerRelease(unsigned char **);
int taggedOwnerRelease2(void);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_00558024; /* 0x558024 */

/* Supplied declaration required: fileHandleClose. */
extern int FUN_002bee0c(unsigned char **);
extern int FUN_002befc0(void);
extern int FUN_002e09b4(unsigned char **, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e0c48. */
/* Supplied declaration required: FUN_002e0fac. */
/* Supplied declaration required: taggedOwnerRelease. */
extern int FUN_0032cab4(unsigned char **);
/* Supplied declaration required: taggedOwnerRelease2. */


unsigned int FUN_003416a0(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v1 = &DAT_00558024;
  temp_v2 = 0x55809c;
  temp_v0 = -0x181c0001;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (param_1 == 3) {
          temp_v0 = FUN_002befc0();
        }
      }
      else {
        temp_v0 = FUN_0032cab4(&temp_v1);
      }
    }
    else {
      temp_v0 = FUN_002bee0c(&temp_v1);
    }
  }
  else {
    temp_v0 = FUN_002e09b4(&temp_v1,param_2,2);
  }
  if (temp_v0 < 0) {
    fileHandleClose(&temp_v1,0);
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (param_1 == 3) {
          FUN_002e0fac();
        }
      }
      else {
        taggedOwnerRelease2();
      }
    }
    else {
      FUN_002e0c48();
    }
  }
  else {
    taggedOwnerRelease(&temp_v1);
  }
  fileHandleClose(&temp_v1,0);
  return 1;
}

} /* extern "C" */
