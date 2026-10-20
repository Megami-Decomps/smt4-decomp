/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf94c` (_code @ 0x3cf94c, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227ab4(int *, unsigned int *);
int FUN_00246454(int, unsigned int *);
int FUN_002569ac(int *, unsigned int);
int FUN_0026beb4(int, unsigned int *, unsigned int, unsigned int);
int FUN_00282924(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00227ab4. */
/* Supplied declaration required: FUN_00246454. */
/* Supplied declaration required: FUN_002569ac. */
/* Supplied declaration required: FUN_0026beb4. */
/* Supplied declaration required: FUN_00282924. */


void FUN_003cf94c(int *param_1,unsigned int *param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = *param_1;
  FUN_00282924(temp_v1,(int)*(short *)(temp_v1 + 0x225a));
  if ((temp_v1 != 0) && (temp_v2 = *param_1, (*(unsigned int *)(temp_v2 + 0x44a0) & 0x200) == 0)) {
    temp_v3 = *(unsigned int *)(temp_v2 + 0x226c);
    if ((int)*(unsigned int *)(temp_v2 + 0x226c) <= (int)(unsigned int)*(unsigned short *)(temp_v1 + 0x1cc)) {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x1cc);
    }
    *(unsigned int *)(temp_v2 + 0x226c) = temp_v3;
  }
  temp_v1 = *(int *)(*param_1 + 0x225c);
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      if (temp_v1 == 3) {
        *(unsigned short *)(param_2[10] + 0x14c) = 4;
        return;
      }
    }
    else {
      puVar4 = (unsigned int *)(*param_1 + 0x44a0);
      *puVar4 = *puVar4 | 0x400000;
    }
  }
  temp_v1 = *param_1;
  temp_v0 = 0;
  temp_v4 = 0;
  if (*(int *)(temp_v1 + 0x225c) == 1) {
    switch(*(unsigned int *)(temp_v1 + 0x2260)) {
    case 1:
      temp_v0 = 1;
      temp_v4 = 0xc;
      break;
    case 2:
      temp_v0 = 1;
      temp_v4 = 5;
      break;
    case 3:
      temp_v0 = 1;
      temp_v4 = 3;
      break;
    case 4:
      temp_v0 = 1;
      temp_v4 = 0xe;
      break;
    case 7:
      *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x80;
      *param_2 = *param_2 | 4;
    }
    temp_v1 = *param_1;
    if ((*(int *)(temp_v1 + 0x2264) == 2) &&
       (FUN_00282924(temp_v1,(int)*(short *)(temp_v1 + 0x225a)), temp_v1 != 0)) {
      FUN_00246454(0,param_2);
    }
    if (temp_v0) {
      FUN_0026beb4(0,param_2,temp_v4,param_2[9]);
    }
  }
  temp_v1 = 0;
  temp_v2 = 0x32;
  puVar4 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + 0xa20);
  do {
    if (((*puVar4 & 1) != 0) && ((*puVar4 & 0x40) == 0)) {
      temp_v1 = temp_v1 + 1;
    }
    temp_v2 = temp_v2 - 1;
    puVar4 = puVar4 + 0xa2;
  } while (temp_v2 != 0);
  if (temp_v1 == 0) {
    *(unsigned int *)(*param_1 + 0x88) = 10;
  }
  FUN_002569ac(param_1,*(unsigned int *)(*param_1 + 0x84));
  FUN_00227ab4(param_1,param_2);
  return;
}

} /* extern "C" */
