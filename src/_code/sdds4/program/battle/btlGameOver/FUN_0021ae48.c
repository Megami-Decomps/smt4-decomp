/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ae48` (_code @ 0x21ae48, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0020edb0(); /* 0x20edb0 */
extern unsigned char LAB_0021af68; /* 0x21af68 */
extern unsigned char LAB_0021af80; /* 0x21af80 */
extern unsigned char LAB_0021af98; /* 0x21af98 */
extern int FUN_002c9fdc(); /* 0x2c9fdc */
extern int FUN_002e0640(); /* 0x2e0640 */
extern int DAT_00435d60; /* 0x435d60 */

extern int FUN_002c0b94(void);
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */


void FUN_0021ae48(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = &LAB_0021af68;
  FUN_002c4c00(&LAB_0021af68,2,0,0,FUN_0020edb0,FUN_002e0640,param_1,*param_1);
  param_1[0xb] = (unsigned int)puVar1;
  FUN_002c4c00(&LAB_0021af80,0x7a,0,0,FUN_002c9fdc,0,param_1,puVar1);
  FUN_002c4c00(&LAB_0021af98,0xd8,0,0,FUN_002c9fdc,0,param_1,param_1[0xb]);
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0x40,1);
  DAT_00435d60 = temp_v0;
  temp_v1 = FUN_002c0b94();
  if ((*(char *)(temp_v1 + 0x24b29) != '\0') && (temp_v1 = FUN_002c0ba8(0x557), temp_v1 == 0)) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
    param_1[0x1128] = param_1[0x1128] | 0x80000000;
  }
  return;
}
