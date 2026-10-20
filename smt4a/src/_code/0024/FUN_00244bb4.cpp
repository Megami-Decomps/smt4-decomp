/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244bb4` (_code @ 0x244bb4, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char DAT_00560ef6; /* 0x560ef6 */
extern unsigned char DAT_00561448; /* 0x561448 */
extern unsigned char DAT_00561475; /* 0x561475 */
extern unsigned char DAT_005614a4; /* 0x5614a4 */
extern unsigned char DAT_005614d3; /* 0x5614d3 */
extern unsigned char DAT_005614f0; /* 0x5614f0 */
extern unsigned char DAT_00561502; /* 0x561502 */
extern unsigned char DAT_00561523; /* 0x561523 */
extern unsigned char DAT_00561535; /* 0x561535 */
extern unsigned char DAT_00561547; /* 0x561547 */
extern char s______________________00582380[70]; /* 0x582380 */


char * FUN_00244bb4(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned char *temp_v2 [4];
  unsigned char *puStack_28;
  unsigned char *puStack_24;
  unsigned char *puStack_20;
  unsigned char *puStack_1c;
  unsigned char *temp_v3;
  unsigned char *puStack_14;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  
  temp_v2[0] = &DAT_00561547;
  temp_v2[1] = &DAT_00560ef6;
  temp_v2[2] = &DAT_00561502;
  temp_v2[3] = &DAT_00561535;
  puStack_28 = &DAT_00561502;
  puStack_24 = &DAT_005614a4;
  puStack_20 = &DAT_00561448;
  puStack_1c = &DAT_00561448;
  temp_v4 = &DAT_005614f0;
  temp_v5 = &DAT_005614d3;
  temp_v3 = &DAT_00561523;
  puStack_14 = &DAT_00561475;
  if (param_1 == 0x18) {
    return (char *)temp_v2[param_2];
  }
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = *(int *)(temp_v0 * 0x5c + 0x582364);
    if (temp_v1 == -1) {
      return (char *)0x0;
    }
    if ((temp_v1 == param_1) && (*(int *)(temp_v0 * 0x5c + 0x582368) == param_2)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x3e7) {
      return (char *)0x0;
    }
  }
  return s______________________00582380 + temp_v0 * 0x5c;
}

} /* extern "C" */
