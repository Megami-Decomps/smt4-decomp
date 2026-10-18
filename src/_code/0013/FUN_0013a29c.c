/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a29c` (_code @ 0x13a29c, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_00146f44. */
/* Supplied declaration required: FUN_00146f88. */
/* Supplied declaration required: FUN_00146fd8. */
/* Supplied declaration required: FUN_00147020. */
/* Supplied declaration required: FUN_00147074. */
/* Supplied declaration required: FUN_00147128. */
/* Supplied declaration required: FUN_002a8608. */
/* Supplied declaration required: FUN_002a8674. */
/* Supplied declaration required: FUN_002a86e4. */
extern int FUN_002bb5b4(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_0013a29c(char *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0x3f800000;
  if (*param_1 != '\0') {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '?';
    FUN_002a86e4(&DAT_004e6f64);
  }
  if (*param_1 != '\0') {
    *(unsigned int *)(param_1 + 8) = temp_v1;
    FUN_002a86e4(&DAT_004e6f64);
  }
  if (*param_1 != '\0') {
    *(unsigned int *)(param_1 + 0xc) = temp_v1;
    FUN_002a8674(&DAT_004e6f64,0);
  }
  if (*param_1 != '\0') {
    *(unsigned int *)(param_1 + 0x10) = temp_v1;
    FUN_002a8674(&DAT_004e6f64,1);
  }
  FUN_002c3aa8();
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  FUN_002a8608(&DAT_004e6f64,0,(int)param_1[0x30]);
  FUN_002c3a24(param_1 + 0x34);
  FUN_002c3aa8(param_1 + 0x34);
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  FUN_002a8608(&DAT_004e6f64,1,(int)param_1[0x31]);
  FUN_002c3a24(param_1 + 0x34);
  param_1[0x24] = '\0';
  FUN_00147074(&DAT_004e6f64,0);
  param_1[0x25] = '\0';
  FUN_00147074(&DAT_004e6f64,1);
  param_1[0x2a] = '\0';
  param_1[0x2b] = -0x80;
  FUN_00146f88(&DAT_004e6f64);
  param_1[0x28] = -1;
  param_1[0x29] = '\x7f';
  FUN_00147020(&DAT_004e6f64);
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    param_1[1] = '\x01';
    FUN_00146fd8(&DAT_004e6f64,1);
  }
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\x02';
  param_1[0x33] = '\0';
  FUN_00147128(&DAT_004e6f64);
  param_1[3] = '\0';
  FUN_00146f44(&DAT_004e6f64);
  return;
}
