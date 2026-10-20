/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed2b0` (_code @ 0x2ed2b0, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea668(unsigned char [88]);
int fixedBufferAssign(unsigned int, unsigned char [20], int);
int FUN_002ea6bc(...);
int FUN_002ea6cc(unsigned char [88]);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_7_stack;

extern unsigned char DAT_00538908; /* 0x538908 */

/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: fixedBufferAssign. */
/* Supplied declaration required: FUN_002ea6bc. */
/* Supplied declaration required: FUN_002ea6cc. */
extern int *wordRefMin(unsigned char *, unsigned int *);


void FUN_002ed2b0(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6,int param_7)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char temp_v1 [88];
  unsigned char temp_v2 [20];
  unsigned int temp_v3;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v3 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002ea668(temp_v1);
  FUN_002ea6bc(temp_v1,param_3,param_4);
  FUN_002ea6bc(temp_v1,param_5,0x1c);
  if ((param_6 != 0) && (param_7 != 0)) {
    temp_v0 = param_7;
    if (param_2 == 0) {
      piVar1 = (int *)wordRefMin(&DAT_00538908,(unsigned int *)&param_7);
      temp_v0 = *piVar1;
    }
    FUN_002ea6bc(temp_v1,param_6,temp_v0);
  }
  FUN_002ea6cc(temp_v1);
  fixedBufferAssign(temp_v3,temp_v2,0x10);
  return;
}

} /* extern "C" */
