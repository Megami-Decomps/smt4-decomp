/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfadc` (_code @ 0x2bfadc, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001372c8(unsigned int, int, int, unsigned int, int, int, unsigned int);
int FUN_002bc1e4(void);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern int DAT_004e3aa0; /* 0x4e3aa0 */
extern unsigned char DAT_004e3ae0; /* 0x4e3ae0 */
extern int DAT_004e3b18; /* 0x4e3b18 */
extern int DAT_004e3bd8; /* 0x4e3bd8 */
extern signed char DAT_004e3be0; /* 0x4e3be0 */
extern signed char DAT_004e3be1; /* 0x4e3be1 */

/* Supplied declaration required: FUN_001372c8. */
/* Supplied declaration required: FUN_002bc1e4. */


int FUN_002bfadc(unsigned int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char *puVar9;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  
  puVar9 = (unsigned char *)0x0;
  if (param_1 < 2) {
    puVar9 = &DAT_004e3a68;
  }
  else if (param_1 == 2) {
    puVar9 = &DAT_004e3ae0;
  }
  if (param_1 < 2) {
    param_4 = DAT_004e3aa0;
  }
  temp_v9 = 0;
  if ((((param_1 >= 2) && (param_4 = DAT_004e3b18, param_1 != 2)) || (param_4 != 0x500)) &&
     (((temp_v4 = DAT_004e3be0, param_1 >= 2 && (temp_v4 = DAT_004e3be1, param_1 != 2)) ||
      (temp_v4 == '\0')))) {
    temp_v9 = 1;
  }
  temp_v7 = 2;
  temp_v8 = *(unsigned int *)(puVar9 + 0x30);
  temp_v10 = *(int *)(puVar9 + 0x34);
  temp_v0 = *(int *)(param_2 + 0x14);
  if (DAT_004e3bd8 == 0x8058) {
    temp_v7 = 4;
  }
  FUN_002bc1e4();
  if (temp_v9 != 0) {
    temp_v2 = (temp_v8 >> 4) * temp_v7;
    temp_v3 = temp_v2 * 0x40;
    temp_v6 = *(unsigned int *)(param_2 + 0x24);
    temp_v1 = *(unsigned int *)(puVar9 + 8);
    temp_v5 = temp_v3;
    temp_v8 = temp_v8 >> 1;
  }
  else {
    temp_v2 = (temp_v8 >> 3) * temp_v7;
    temp_v3 = temp_v2 * 0x40;
    temp_v6 = *(unsigned int *)(param_2 + 0x24);
    temp_v1 = *(unsigned int *)(puVar9 + 8);
    temp_v5 = 0;
  }
  FUN_001372c8(temp_v1,temp_v3,temp_v5,temp_v6,temp_v3,
               ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1d)) >> 3) * temp_v7 * 0x40 + temp_v2 * -0x40,
               temp_v8 * temp_v10 * temp_v7);
  return temp_v9;
}

} /* extern "C" */
