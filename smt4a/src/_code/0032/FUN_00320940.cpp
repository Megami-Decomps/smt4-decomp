/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320940` (_code @ 0x320940, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003343c0(int);
int FUN_00372100(unsigned short *, int);
int FUN_003df7c4(unsigned short *);
int rt_memcpy_w(unsigned short *, unsigned int, int);

/* stack frame of param_1: 7 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp74; /* 0x74: local_74 */
    unsigned short sp76; /* 0x76: local_76 */
    unsigned short sp78; /* 0x78: local_78 */
    unsigned short sp7A; /* 0x7a: local_7a */
    unsigned short sp7C; /* 0x7c: local_7c */
    unsigned short sp7E; /* 0x7e: local_7e */
    unsigned short sp80; /* 0x80: local_80 */
} param_1_stack;

extern int DAT_0057f108; /* 0x57f108 */

extern unsigned int FUN_001801a4(void);
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_003343c0. */
/* Supplied declaration required: FUN_00372100. */
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00320940(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  
  temp_v1 = DAT_0057f108;
  temp_v0 = FUN_001801a4();
  temp_v3 = 0;
  temp_v2 = 0;
  if (param_1 == 0x13 || param_1 == 0x48) {
    temp_v3 = temp_v1 + 0x2b4;
    temp_v2 = temp_v1 + 0x2b68;
  }
  if (param_1 == 0x14 || param_1 == 0x49) {
    temp_v3 = temp_v1 + 0x318;
    temp_v2 = temp_v1 + 0x2c58;
  }
  if (param_1 == 0x15 || param_1 == 0x4a) {
    temp_v3 = temp_v1 + 0x37c;
    temp_v2 = temp_v1 + 0x2d48;
  }
  if (param_1 == 0x16 || param_1 == 0x4b) {
    temp_v3 = temp_v1 + 0x3e0;
    temp_v2 = temp_v1 + 0x2dac;
  }
  if (param_1 == 0x17 || param_1 == 0x4c) {
    temp_v3 = temp_v1 + 0x444;
    temp_v2 = temp_v1 + 0x2e9c;
  }
  if (param_1 == 0x18 || param_1 == 0x4d) {
    temp_v3 = temp_v1 + 0x4a8;
    temp_v2 = temp_v1 + 0x2f8c;
  }
  if (param_1 == 0x19 || param_1 == 0x4e) {
    temp_v3 = temp_v1 + 0x50c;
    temp_v2 = temp_v1 + 0x307c;
  }
  temp_v1 = FUN_002a4860(temp_v3);
  temp_v3 = FUN_002a4894(temp_v3);
  temp_v1 = temp_v1 + temp_v3;
  rt_memcpy_w(&temp_v4,temp_v0,100);
  if (param_1 == 0x13 || param_1 == 0x48) {
    temp_v4 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
  }
  if (param_1 == 0x14 || param_1 == 0x49) {
    temp_v5 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
  }
  if (param_1 == 0x15 || param_1 == 0x4a) {
    temp_v6 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
  }
  if (param_1 == 0x16 || param_1 == 0x4b) {
    temp_v7 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
  }
  if (param_1 == 0x17 || param_1 == 0x4c) {
    temp_v8 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
  }
  if (param_1 == 0x18 || param_1 == 0x4d) {
    temp_v9 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
  }
  if (param_1 == 0x19 || param_1 == 0x4e) {
    temp_v10 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
  }
  FUN_003df7c4(&temp_v4);
  FUN_00372100(&temp_v4,0);
  FUN_003343c0(0);
  return;
}

} /* extern "C" */
