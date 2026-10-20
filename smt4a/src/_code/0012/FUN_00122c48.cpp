/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122c48` (_code @ 0x122c48, 0xd6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00122d36(int, unsigned int *);
int FUN_002e6e34(...);
int FUN_002e6e5c(...);
int FUN_002e75fa(unsigned int);
int FUN_0030f8f2(int, int *);
int FUN_0030f90c(unsigned char [8], int, int *);
int FUN_0030f974(void);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char DAT_0062e558; /* 0x62e558 */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_00122d36. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_0030f8f2. */
/* Supplied declaration required: FUN_0030f90c. */
/* Supplied declaration required: FUN_0030f974. */


void FUN_00122c48(int param_1,unsigned int *param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [12];
  int temp_v8;
  unsigned char temp_v9 [8];
  unsigned char temp_v10 [16];
  int iStack_1c;
  unsigned int *temp_v11;
  
  temp_v0 = 1;
  iStack_1c = param_1;
  temp_v11 = param_2;
  FUN_0030f974();
  temp_v2 = &DAT_0062e558;
  temp_v6 = param_1 + 0xb8;
  temp_v3 = &DAT_0062e558;
  do {
    FUN_002e6e34(temp_v7,temp_v6);
    if (*(int *)(param_1 + 0xf8) != 0) {
      *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 0xec);
      *(unsigned char *)(param_1 + 8) = 1;
      FUN_002e75fa(*(unsigned int *)(param_1 + 0xec));
      temp_v8 = *(unsigned int *)(param_1 + 0xec);
      FUN_0030f90c(temp_v9,param_1 + 0xe8,&temp_v8);
    }
    else {
      *(unsigned int *)(param_1 + 4) = 0;
      *(unsigned char *)(param_1 + 8) = 0;
    }
    FUN_002e6e5c(temp_v7);
    temp_v1 = *(int *)(param_1 + 4);
    if (temp_v1 != 0) {
      if (*(char *)(temp_v1 + 0x39) != '\0') {
        temp_v2 = &DAT_0062e6a0;
      }
      if (*(char *)(temp_v1 + 0x38) != '\0') {
        temp_v3 = (unsigned char *)(param_1 + 0x88);
      }
      FUN_002e6e34(temp_v7,temp_v2);
      FUN_002e6e34(&temp_v8,param_1 + 0x58);
      FUN_002e6e34(temp_v10,temp_v3);
      FUN_00122d36(param_1,temp_v11);
      FUN_002e6e5c(temp_v10);
      FUN_002e6e5c(&temp_v8);
      FUN_002e6e5c(temp_v7);
    }
    else {
      temp_v1 = param_1;
      FUN_0030f974();
      if (temp_v1 == 0) {
        temp_v0 = 0;
      }
    }
    temp_v4 = *temp_v11;
    temp_v5 = temp_v11[1];
    temp_v1 = param_1;
    FUN_0030f8f2(param_1,&temp_v4);
  } while ((temp_v1 == 0) && (temp_v0));
  return;
}

} /* extern "C" */
