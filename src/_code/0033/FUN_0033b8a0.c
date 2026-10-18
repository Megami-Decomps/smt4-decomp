/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b8a0` (_code @ 0x33b8a0, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_003408ec(); /* 0x3408ec */
extern int FUN_00347554(); /* 0x347554 */
extern int FUN_00349758(); /* 0x349758 */
extern int FUN_00376b84(); /* 0x376b84 */
extern int FUN_00376f84(); /* 0x376f84 */
extern int FUN_00380b8c(); /* 0x380b8c */
extern unsigned char DAT_004215d4; /* 0x4215d4 */
extern unsigned char DAT_004215f4; /* 0x4215f4 */
extern unsigned char DAT_004218c0; /* 0x4218c0 */

/* Supplied declaration required: FUN_001408ac. */
/* Supplied declaration required: FUN_002b93f0. */
/* Supplied declaration required: FUN_002c68bc. */
extern int FUN_00377624(int);
extern int FUN_00378d50(int);
/* Supplied declaration required: func_0x0013fe34. */


unsigned int * FUN_0033b8a0(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  FUN_002c68bc(param_1 + 0x1000,FUN_00376b84,4,0x10);
  FUN_002c68bc(param_1 + 0x7c0,FUN_00376f84,0x84,0x10);
  *(unsigned char **)(param_1 + 0x784) = &DAT_004215d4;
  *(unsigned char **)(param_1 + 0x788) = &DAT_004215f4;
  FUN_002c68bc(param_1 + 0x694,FUN_00347554,0x3c,4);
  FUN_002c68bc(param_1 + 0x674,FUN_00349758,0x10,2);
  FUN_002c68bc(param_1 + 0x5fc,FUN_00380b8c,0x3c,2);
  FUN_002c68bc(param_1 + 0x4bc,FUN_003408ec,0x50,4);
  temp_v0 = FUN_00377624(param_1 + 0x244);
  temp_v0 = FUN_00378d50(temp_v0 - 0xc0);
  puVar2 = (unsigned int *)(temp_v0 - 0x184);
  *puVar2 = (unsigned int)&DAT_004218c0;
  if (*(char *)(temp_v0 - 4) != '\0') {
    if ((*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe) != 0) {
      FUN_002b93f0(*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe);
      *(unsigned int *)(temp_v0 - 0x74) = 0;
    }
    FUN_001408ac(temp_v0 - 0x58);
    *(unsigned char *)(temp_v0 - 4) = 0;
  }
  func_0x0013fe34(puVar2);
  *(unsigned int *)(temp_v0 - 8) = 0xffffffff;
  if ((*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe) != 0) {
    FUN_002b93f0(*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe);
    *(unsigned int *)(temp_v0 - 0x74) = 0;
  }
  return puVar2;
}
