/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9868` (_code @ 0x3a9868, 0x23c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned char LAB_003a9ac0; /* 0x3a9ac0 */
#ifndef ROMWRIGHT_STORAGE_s__B_B_0043d994_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__B_B_0043d994_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__B_B_0043d994_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__B_B_0043d994_9_1_size_check[(sizeof(union romwright_storage_s__B_B_0043d994_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__B_B_0043d994_9_1_u1_width_check[(sizeof(((union romwright_storage_s__B_B_0043d994_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__B_B_0043d994_9_1_s1_width_check[(sizeof(((union romwright_storage_s__B_B_0043d994_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__B_B_0043d994_9_1 s__B_B_0043d994; /* 0x43d994 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0022cc38(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0022d944. */
/* Supplied declaration required: FUN_00230e54. */
/* Supplied declaration required: FUN_00231d60. */
extern int FUN_002335c0(unsigned char *, unsigned int);
extern int FUN_00240e8c(int);
extern int FUN_0029ebc4(int);
/* Supplied declaration required: FUN_002be744. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bf6c8(int, unsigned int);
/* Supplied declaration required: FUN_003aa264. */


void FUN_003a9868(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  unsigned char temp_v7 [64];
  unsigned char temp_v8 [12];
  
  temp_v4 = *(int *)(param_1 + 0x594);
  VectorSignedToFloat(0x100 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00230e54(param_1 + 200,0xd,0,0,temp_v4);
  if (*(char *)(param_1 + 0xa6be) == '\0') {
    temp_v6 = 0x1025;
  }
  else {
    temp_v6 = 0x1023;
  }
  FUN_00231d60(param_1 + 200,temp_v6 - 4,0,0,temp_v4,1);
  FUN_00231d60(param_1 + 200,temp_v6,0,0,temp_v4,1);
  if (*(char *)(param_1 + 0xa6be) == '\x01') {
    temp_v6 = 0x1026;
  }
  else {
    temp_v6 = 0x1024;
  }
  FUN_00231d60(param_1 + 200,temp_v6 - 4,0,0,temp_v4,1);
  FUN_00231d60(param_1 + 200,temp_v6,0,0,temp_v4,1);
  temp_v1 = FUN_0022cc38(temp_v8,*(unsigned int *)(param_1 + 0xa5b4));
  FUN_002be7fc(temp_v7,&LAB_003a9ac0,temp_v1,(*(unsigned int *)&s__B_B_0043d994.u1[0]));
  temp_v6 = FUN_002bf6c8(param_1 + 200,0x102b);
  temp_v2 = FUN_002335c0(temp_v7,2);
  VectorSignedToFloat((int)*(short *)(temp_v6 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(((int)*(short *)(temp_v6 + 8) + (int)**(short **)(temp_v6 + 0xc) / 2) - temp_v2 / 2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be744(param_1 + 200,2,0xffffffff,temp_v7);
  temp_v2 = FUN_0029ebc4(param_1 + 0x20);
  temp_v5 = 0;
  temp_v6 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x28)) {
    temp_v6 = *(int *)(param_1 + 0x24);
  }
  if (0 < temp_v6) {
    do {
      if ((*(int *)(param_1 + 0x14) != 2) || (temp_v3 = FUN_00240e8c(param_1 + 0x20), temp_v3 != temp_v5))
      {
        FUN_003aa264(param_1,temp_v5 + 1,0,(int)*(short *)(param_1 + (temp_v2 + temp_v5) * 0x20 + 0x5ac));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v6);
  }
  if ((0 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x14) == 2)) {
    temp_v6 = FUN_00240e8c(param_1 + 0x20);
    temp_v0 = *(short *)(param_1 + (temp_v6 + temp_v2) * 0x20 + 0x5ac);
    temp_v6 = FUN_00240e8c(param_1 + 0x20);
    FUN_003aa264(param_1,temp_v6 + 1,1,(int)temp_v0);
  }
  FUN_0022d944(param_1,temp_v4 + 1);
  return;
}
