/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001218d8` (_code @ 0x1218d8, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001215cc(int [3], int);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_0030ff06(int, int *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0012165d; /* 0x12165d */
extern unsigned char LAB_00121930; /* 0x121930 */

/* Supplied declaration required: FUN_001215cc. */
extern int *FUN_002e7908(unsigned char *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_0030ff06. */


void FUN_001218d8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2 [3];
  unsigned char temp_v3 [12];
  unsigned int temp_v4 [2];
  
  piVar3 = temp_v2;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_001215cc(temp_v2,param_1);
    if (-1 < temp_v2[0]) {
      temp_v1 = FUN_002ea3c0(temp_v3,&LAB_0012165d,0,&LAB_00121930);
      FUN_002ea3d0(param_1,temp_v1);
      return;
    }
  }
  else {
    temp_v4[0] = 0x80010004;
    piVar3 = (int *)FUN_002e7908(temp_v3,temp_v4);
  }
  FUN_0030ff06(param_1,piVar3);
  return;
}

} /* extern "C" */
