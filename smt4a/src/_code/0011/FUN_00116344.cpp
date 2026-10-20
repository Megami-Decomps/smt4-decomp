/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116344` (_code @ 0x116344, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vectorCopyHeader(unsigned int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(...);
int FUN_0030202c(int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_001163c4; /* 0x1163c4 */
extern unsigned char LAB_001163cd; /* 0x1163cd */

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: vectorCopyHeader. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
extern int FUN_002ea6fc(unsigned int);
/* Supplied declaration required: FUN_0030202c. */


void FUN_00116344(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char *puVar4;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [16];
  unsigned char temp_v5 [12];
  unsigned int temp_v6 [2];
  
  puVar4 = temp_v3;
  if (*(char *)(param_1 + 0x120) != '\x02') {
    FUN_002ea41e(temp_v3,param_1 + 0x110);
    temp_v2 = 3;
  }
  else {
    temp_v3[0] = 1;
    temp_v0 = FUN_002ea6fc(*(unsigned int *)(param_1 + 0x1a8));
    if (temp_v0 != 0) {
      temp_v6[0] = 0x8001000b;
      temp_v1 = FUN_002e7908(temp_v5,temp_v6);
      vectorCopyHeader(*(unsigned int *)(param_1 + 0x1a8),temp_v1);
      temp_v1 = FUN_002ea3c0(temp_v4,&LAB_001163cd,0,&LAB_001163c4);
      FUN_002ea3d0(param_1,temp_v1);
      return;
    }
    FUN_002ea41e(temp_v4,param_1 + 0x110);
    temp_v2 = *(unsigned char *)(param_1 + 0x120);
    puVar4 = temp_v4;
  }
  FUN_0030202c(param_1,temp_v2,puVar4);
  return;
}

} /* extern "C" */
