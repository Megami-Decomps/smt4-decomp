/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a01c` (_code @ 0x11a01c, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int FUN_002ea3d0(int, unsigned int);
int FUN_00305644(unsigned int *, int);
int FUN_00306d50(unsigned int *[2], int, unsigned int *[2]);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0011a0cc; /* 0x11a0cc */

extern unsigned int pendingValueTake(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002eb5f4(void);
extern int wordRefsDiffer_002ee774(unsigned int **, unsigned int *);
extern int FUN_002ee978(unsigned int *);
extern int FUN_002fd454(unsigned int *);
/* Supplied declaration required: FUN_00305644. */
/* Supplied declaration required: FUN_00306d50. */


void FUN_0011a01c(int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  unsigned int *temp_v5;
  unsigned int *temp_v6 [2];
  unsigned char temp_v7 [16];
  int temp_v8;
  unsigned int *temp_v9 [2];
  
  temp_v3 = *(int *)(*(int *)(param_1 + 0x70) + 0x10);
  if ((temp_v3 != 0) && (temp_v0 = FUN_002eb5f4(), temp_v0 != 0)) {
    temp_v0 = FUN_002eb5f4();
    FUN_002e6e34(temp_v7,temp_v0 + 0x58);
    temp_v5 = *(unsigned int **)(temp_v0 + 0x98);
    do {
      temp_v5 = (unsigned int *)*temp_v5;
      while( 1 ) {
        temp_v8 = *(unsigned int *)(temp_v0 + 0x98);
        temp_v1 = wordRefsDiffer_002ee774(&temp_v5,(unsigned int *)&temp_v8);
        if (temp_v1 == 0) {
          _ZN9Obj55b28cD1Ev(temp_v7);
          goto LAB_0011a09a;
        }
        temp_v1 = FUN_002ee978(temp_v5 + 2);
        if (temp_v1 != temp_v3) {
          temp_v5 = (unsigned int *)*temp_v5;
          continue;
        }
        temp_v1 = FUN_002fd454(temp_v5 + 2);
        if (temp_v1 == 0) break;
        temp_v6[0] = temp_v5;
        FUN_00306d50(temp_v9,temp_v0 + 0x88,temp_v6);
        temp_v5 = temp_v9[0];
      }
      FUN_00305644(temp_v5 + 2,0);
    } while( 1 );
  }
LAB_0011a09a:
  if (*(int *)(*(int *)(param_1 + 0x70) + 0x24) != 0) {
    temp_v2 = pendingValueTake();
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    temp_v2 = 0x11a0d1;
  }
  else {
    temp_v2 = 0x119fcf;
  }
  temp_v2 = FUN_002ea3c0(temp_v4,temp_v2,0,&LAB_0011a0cc);
  FUN_002ea3d0(param_1,temp_v2);
  return;
}

} /* extern "C" */
