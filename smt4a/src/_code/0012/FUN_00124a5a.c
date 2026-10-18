/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124a5a` (_code @ 0x124a5a, 0x11a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: while (INT_ADD). */
/* Supplied declaration required: FUN_001247c0. */
/* Supplied declaration required: FUN_002e3f68. */
extern int FUN_0030e914(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0030eca8. */
/* Supplied declaration required: FUN_0030ed04. */


void FUN_00124a5a(int param_1)

{
/* irregular: 4 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar5;
  unsigned char temp_v4 [8];
  int temp_v5;
  unsigned int temp_v6;
  
  FUN_001247c0(&temp_v5);
  FUN_0030ed04(temp_v4,temp_v5,2);
  FUN_002e3f68(&temp_v5);
  temp_v2 = 0;
  temp_v3 = 0xff;
  do {
    temp_v1 = FUN_0030e914(param_1,0x10,temp_v2 & 0xff);
    if (temp_v1 != 0) goto LAB_00124a9e;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xff);
LAB_00124aaa:
  *(unsigned int *)(param_1 + 0x20) = temp_v3;
  *(unsigned int *)(param_1 + 0x1c) = temp_v2;
  puVar5 = *(unsigned char **)(param_1 + 0x2c);
  for (; temp_v2 <= temp_v3; temp_v2 = temp_v2 + 1) {
    if ((temp_v2 - 0x61 < 0x1a) && (temp_v1 = FUN_0030e914(param_1,0x10,temp_v2 & 0xff), temp_v1 != 0)) {
      temp_v6 = temp_v2 - 0x20;
      temp_v1 = FUN_0030e914(param_1,8,temp_v6 & 0xff);
      if (temp_v1 != 0) {
        temp_v0 = (unsigned char)temp_v6;
      }
      else {
        temp_v0 = (unsigned char)temp_v2;
      }
    }
    else {
      temp_v0 = (unsigned char)temp_v2;
    }
    *puVar5 = temp_v0;
    puVar5 = puVar5 + 1;
  }
  temp_v2 = 0;
  temp_v3 = 0xff;
  do {
    temp_v1 = FUN_0030e914(param_1,8,temp_v2 & 0xff);
    if (temp_v1 != 0) goto LAB_00124b18;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xff);
LAB_00124b24:
  *(unsigned int *)(param_1 + 0x28) = temp_v3;
  *(unsigned int *)(param_1 + 0x24) = temp_v2;
  puVar5 = *(unsigned char **)(param_1 + 0x30);
  do {
    if (temp_v3 < temp_v2) {
      FUN_0030eca8(temp_v4);
      return;
    }
    if ((temp_v2 - 0x41 < 0x1a) && (temp_v1 = FUN_0030e914(param_1,8,temp_v2 & 0xff), temp_v1 != 0)) {
      temp_v6 = temp_v2 + 0x20;
      temp_v1 = FUN_0030e914(param_1,0x10,temp_v6 & 0xff);
      if (temp_v1 == 0) {
        temp_v0 = (unsigned char)temp_v2;
        *puVar5 = temp_v0;
        puVar5 = puVar5 + 1;
        temp_v2 = temp_v2 + 1;
        continue;
      }
      temp_v0 = (unsigned char)temp_v6;
    }
    else {
      temp_v0 = (unsigned char)temp_v2;
    }
    *puVar5 = temp_v0;
    puVar5 = puVar5 + 1;
    temp_v2 = temp_v2 + 1;
  } while( 1 );
LAB_00124a9e:
  while ((temp_v2 < temp_v3 && (temp_v1 = FUN_0030e914(param_1,0x10,temp_v3 & 0xff), temp_v1 == 0))) {
    temp_v3 = temp_v3 - 1;
  }
  goto LAB_00124aaa;
LAB_00124b18:
  while ((temp_v2 < temp_v3 && (temp_v1 = FUN_0030e914(param_1,8,temp_v3 & 0xff), temp_v1 == 0))) {
    temp_v3 = temp_v3 - 1;
  }
  goto LAB_00124b24;
}
