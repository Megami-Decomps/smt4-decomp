/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4fec` (_code @ 0x1b4fec, 0x160 bytes) from smt4_v1.2.0.cxi.
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
/* Supplied declaration required: FUN_0027e974. */
/* Supplied declaration required: FUN_0028727c. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_0028d6d0. */
/* Supplied declaration required: FUN_0028d9b0. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_00296fec. */
/* Supplied declaration required: FUN_0029c3b0. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c5700. */
/* Supplied declaration required: FUN_002c57c8. */
/* Supplied declaration required: FUN_00392e74. */
extern unsigned int FUN_00393340(void);


unsigned int FUN_001b4fec(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
          FUN_002a03d8(0,1);
          FUN_002a03d8(1);
          FUN_0029c3b0(0xf);
        }
        else {
          temp_v4 = romwright_piece_3_1((int)((unsigned int)param_4 >> 8),1);
          FUN_002c57c8(1,&temp_v4);
        }
        *(unsigned char *)(temp_v3 + 0x1a) = 3;
        *(unsigned char *)(temp_v3 + 0x18) = 1;
        if ((*(int *)(temp_v3 + 0x1c) != 0) && (FUN_002c5700(), *(int *)(temp_v3 + 0x1c) != 0)) {
          FUN_0027e974();
          FUN_002b2368();
          *(unsigned int *)(temp_v3 + 0x1c) = 0;
        }
        FUN_002917b8();
        FUN_0028727c();
        FUN_00291944();
      }
    }
    else {
      FUN_00392e74(*(unsigned int *)(temp_v3 + 0x1c));
      if ((**(unsigned int **)(temp_v3 + 0x1c) & 1) != 0) {
        *(unsigned char *)(temp_v3 + 0x1a) = 2;
      }
    }
  }
  else {
    FUN_002898e4();
    FUN_0028d9b0();
    FUN_0028d6d0();
    temp_v1 = 0x2434;
    FUN_002c222c();
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_00393340();
    }
    *(unsigned int *)(temp_v3 + 0x1c) = temp_v2;
    FUN_00296fec();
    *(unsigned char *)(temp_v3 + 0x1a) = 1;
  }
  return 0;
}
