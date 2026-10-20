/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1d6c` (_code @ 0x3d1d6c, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(...);
int FUN_0026f3a0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_0020e7bc(...); /* 0x20e7bc */
extern unsigned char LAB_0020e83c; /* 0x20e83c */
extern int FUN_0020e8d0(...); /* 0x20e8d0 */
extern unsigned char LAB_00232044; /* 0x232044 */
extern int FUN_00232104(...); /* 0x232104 */
extern int FUN_00241874(...); /* 0x241874 */
extern int FUN_00290978(...); /* 0x290978 */
extern unsigned char LAB_002909f8; /* 0x2909f8 */
extern int FUN_00290a8c(...); /* 0x290a8c */
extern unsigned char LAB_002ce670; /* 0x2ce670 */
extern int FUN_002ce730(...); /* 0x2ce730 */
extern int FUN_002fddd8(...); /* 0x2fddd8 */
extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_0010063a. */
extern unsigned char *FUN_0026140c(void);
/* Supplied declaration required: FUN_0026f3a0. */


void FUN_003d1d6c(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned char *pbVar2;
  unsigned char temp_v1;
  
  temp_v0 = DAT_0057f268;
  pbVar2 = (unsigned char *)FUN_0026140c();
  temp_v1 = ~(*pbVar2 >> 7) & 1;
  if ((*pbVar2 & 0x7f) == 2) {
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,&LAB_0020e83c);
    }
    else {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,&LAB_002909f8);
    }
  }
  if ((*pbVar2 & 0x7f) == 1) {
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,FUN_00241874);
    }
    else {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,FUN_002fddd8);
    }
  }
  if ((*pbVar2 & 0x7f) == 4) {
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,FUN_0020e7bc);
    }
    else {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,FUN_00290978);
    }
  }
  if ((*pbVar2 & 0x7f) == 5) {
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,FUN_0020e8d0);
    }
    else {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,FUN_00290a8c);
    }
  }
  if ((*pbVar2 & 0x7f) == 0x1f) {
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,FUN_00232104);
    }
    else {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,FUN_002ce730);
    }
  }
  if ((*pbVar2 & 0x7f) == 3) {
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,&LAB_00232044);
    }
    else {
      FUN_0010063a(temp_v0 + 0xa80,0x18,8,&LAB_002ce670);
    }
  }
  FUN_0026f3a0();
  return;
}

} /* extern "C" */
