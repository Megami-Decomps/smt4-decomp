/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4eec` (_code @ 0x1b4eec, 0x160 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0027ebe4. */
/* Supplied declaration required: FUN_002874e4. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_0028dc54. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_00297284. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c58f0. */
/* Supplied declaration required: FUN_002c59b8. */
/* Supplied declaration required: FUN_0039308c. */
extern unsigned int FUN_00393558(void);


unsigned int FUN_001b4eec(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 15 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = *param_1;
  temp_v0 = *(char *)(temp_v3 + 0x1a);
  temp_v4 = param_4;
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          return 0xffffffff;
        }
      }
      else {
        if (*(char *)(temp_v3 + 0x19) != '\0') {
          FUN_002a0678(0,1);
          FUN_002a0678(1);
          FUN_0029c650(0xf);
        }
        else {
          temp_v4 = romwright_piece_3_1((int)((unsigned int)param_4 >> 8),1);
          FUN_002c59b8(1,&temp_v4);
        }
        *(unsigned char *)(temp_v3 + 0x1a) = 3;
        *(unsigned char *)(temp_v3 + 0x18) = 1;
        if ((*(int *)(temp_v3 + 0x1c) != 0) && (FUN_002c58f0(), *(int *)(temp_v3 + 0x1c) != 0)) {
          FUN_0027ebe4();
          FUN_002b2520();
          *(unsigned int *)(temp_v3 + 0x1c) = 0;
        }
        FUN_00291a5c();
        FUN_002874e4();
        FUN_00291be8();
      }
    }
    else {
      FUN_0039308c(*(unsigned int *)(temp_v3 + 0x1c));
      if ((**(unsigned int **)(temp_v3 + 0x1c) & 1) != 0) {
        *(unsigned char *)(temp_v3 + 0x1a) = 2;
      }
    }
  }
  else {
    FUN_00289b4c();
    FUN_0028dc54();
    FUN_0028d974();
    temp_v1 = 0x2434;
    FUN_002c23f8();
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_00393558();
    }
    *(unsigned int *)(temp_v3 + 0x1c) = temp_v2;
    FUN_00297284();
    *(unsigned char *)(temp_v3 + 0x1a) = 1;
  }
  return 0;
}
