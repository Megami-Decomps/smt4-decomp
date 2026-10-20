/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154edc` (_code @ 0x154edc, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017ced4(unsigned int, int, int, unsigned int, int, int, unsigned int);
int FUN_0017d294(void);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_0063fe10; /* 0x63fe10 */
extern int DAT_0063fe48; /* 0x63fe48 */
extern unsigned char DAT_0063fe88; /* 0x63fe88 */
extern int DAT_0063fec0; /* 0x63fec0 */
extern int DAT_0063ff80; /* 0x63ff80 */
extern signed char DAT_0063ff88; /* 0x63ff88 */
extern signed char DAT_0063ff89; /* 0x63ff89 */

/* Supplied declaration required: FUN_0017ced4. */
/* Supplied declaration required: FUN_0017d294. */


int FUN_00154edc(unsigned int param_1,int param_2,unsigned int param_3,int param_4)

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
    puVar9 = &DAT_0063fe10;
  }
  else if (param_1 == 2) {
    puVar9 = &DAT_0063fe88;
  }
  if (param_1 < 2) {
    param_4 = DAT_0063fe48;
  }
  temp_v9 = 0;
  if ((((param_1 >= 2) && (param_4 = DAT_0063fec0, param_1 != 2)) || (param_4 != 0x500)) &&
     (((temp_v4 = DAT_0063ff88, param_1 >= 2 && (temp_v4 = DAT_0063ff89, param_1 != 2)) ||
      (temp_v4 == '\0')))) {
    temp_v9 = 1;
  }
  temp_v7 = 2;
  temp_v8 = *(unsigned int *)(puVar9 + 0x30);
  temp_v10 = *(int *)(puVar9 + 0x34);
  temp_v0 = *(int *)(param_2 + 0x14);
  if (DAT_0063ff80 == 0x8058) {
    temp_v7 = 4;
  }
  FUN_0017d294();
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
  FUN_0017ced4(temp_v1,temp_v3,temp_v5,temp_v6,temp_v3,
               ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1d)) >> 3) * temp_v7 * 0x40 + temp_v2 * -0x40,
               temp_v8 * temp_v10 * temp_v7);
  return temp_v9;
}

} /* extern "C" */
