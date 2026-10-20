/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104204` (_code @ 0x104204, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002ea214(int, unsigned char [12]);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(unsigned char [12], int);
int FUN_002ea43c(int);
int FUN_002ea446(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_00104288; /* 0x104288 */
extern unsigned char LAB_0010428d; /* 0x10428d */

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea214. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ea408(void);
/* Supplied declaration required: FUN_002ea41e. */
extern int FUN_002ea42c(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ea446. */


void FUN_00104204(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [16];
  unsigned char temp_v4 [12];
  unsigned int temp_v5 [2];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0xe0));
  if (temp_v0 != 0) {
    temp_v0 = FUN_002ea408();
    if (temp_v0 != 0) {
      FUN_002ea41e(temp_v2,param_1 + 0x68);
      temp_v5[0] = 0x80680006;
      temp_v1 = FUN_002e7908(temp_v4,temp_v5);
      temp_v0 = FUN_002ea42c(temp_v2,temp_v1);
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v3,&LAB_0010428d,0,&LAB_00104288);
        FUN_002ea3d0(param_1,temp_v1);
      }
      else {
        FUN_002ea214(param_1,temp_v2);
      }
    }
    else {
      FUN_002ea446(param_1,0xfa);
    }
  }
  else {
    FUN_002ea43c(param_1);
  }
  return;
}

} /* extern "C" */
