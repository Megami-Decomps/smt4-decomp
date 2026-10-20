/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119374` (_code @ 0x119374, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(int, unsigned int);
int FUN_003054f0(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern unsigned char LAB_001193c0; /* 0x1193c0 */
extern unsigned char LAB_001194ed; /* 0x1194ed */

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002eea7c(int);
/* Supplied declaration required: FUN_003054f0. */


void FUN_00119374(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [16];
  unsigned char temp_v3 [12];
  int temp_v4;
  
  temp_v0 = FUN_002eea7c(param_1 + 0x6c);
  if ((temp_v0 != 0) && (*(int *)(param_1 + 0x74) != 0)) {
    temp_v1 = FUN_002ea3c0(temp_v2,&LAB_001194ed,0,&LAB_001193c0);
    FUN_002ea3d0(param_1,temp_v1);
  }
  else {
    temp_v4 = 0x8001000a;
    temp_v1 = FUN_002e7908(temp_v3,(unsigned int *)&temp_v4);
    FUN_003054f0(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
