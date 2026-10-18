/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f6d4` (_code @ 0x11f6d4, 0xe6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned char sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0011f7bc; /* 0x11f7bc */
extern unsigned char LAB_0011fcb5; /* 0x11fcb5 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
extern int FUN_002ea6fc(int);
/* Supplied declaration required: FUN_002eb5f4. */
extern int FUN_002ee774(unsigned int **, unsigned int *);
extern unsigned int FUN_002ee978(int);
/* Supplied declaration required: FUN_002f8aa8. */
extern int FUN_002fd454(unsigned int *);
/* Supplied declaration required: FUN_003031f4. */
extern int FUN_003054ce(unsigned int);
/* Supplied declaration required: FUN_00305644. */
/* Supplied declaration required: FUN_00310784. */


void FUN_0011f6d4(int param_1)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *temp_v4;
  unsigned char temp_v5 [12];
  unsigned char temp_v6 [16];
  int temp_v7;
  int temp_v8;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v0 = FUN_003054ce(*(unsigned int *)(param_1 + 400));
  if (*(int *)(temp_v0 + 0x1c) != 2) {
    if (*(char *)(param_1 + 0xf0) != '\x02') {
      FUN_002ea41e(&temp_v8);
    }
    else {
      temp_v0 = FUN_002ea6fc(param_1 + 0x158);
      if (temp_v0 == 0) goto LAB_0011f72a;
      temp_v8 = *(unsigned int *)(param_1 + 0x158);
      uStack_1c = *(unsigned int *)(param_1 + 0x15c);
      uStack_18 = *(unsigned int *)(param_1 + 0x160);
    }
    FUN_00310784(param_1,&temp_v8);
  }
  else {
LAB_0011f72a:
    temp_v0 = param_1 + 0x194;
    FUN_00305644(temp_v0,*(unsigned int *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0x10));
    FUN_003031f4(temp_v0);
    temp_v1 = FUN_002eb5f4();
    FUN_002e6e34(temp_v5,temp_v1 + 0x58);
    temp_v4 = *(unsigned int **)(temp_v1 + 0x98);
    while( 1 ) {
      temp_v4 = (unsigned int *)*temp_v4;
      temp_v7 = *(unsigned int *)(temp_v1 + 0x98);
      temp_v2 = FUN_002ee774(&temp_v4,(unsigned int *)&temp_v7);
      if (temp_v2 == 0) break;
      temp_v2 = FUN_002fd454(temp_v4 + 2);
      if (temp_v2 == 0) {
        temp_v3 = FUN_002ee978(temp_v0);
        FUN_00305644(temp_v4 + 2,temp_v3);
      }
    }
    temp_v3 = FUN_002eb5f4();
    FUN_002f8aa8(temp_v3,temp_v0);
    (**(romwright_code **)(**(int **)(param_1 + 400) + 0xc))();
    temp_v3 = FUN_002ea3c0(temp_v6,&LAB_0011fcb5,0,&LAB_0011f7bc);
    FUN_002ea3d0(param_1,temp_v3);
    FUN_002e6e5c(temp_v5);
  }
  return;
}
