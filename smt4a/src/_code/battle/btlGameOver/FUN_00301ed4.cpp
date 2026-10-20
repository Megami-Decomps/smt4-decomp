/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301ed4` (_code @ 0x301ed4, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015155c(...);
int FUN_00163060(int, int, int, int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_002dedf0(...); /* 0x2dedf0 */
extern unsigned char LAB_00301fa8; /* 0x301fa8 */
extern unsigned char LAB_00301fc0; /* 0x301fc0 */
extern unsigned char LAB_00301fd8; /* 0x301fd8 */
extern int FUN_00328740(...); /* 0x328740 */
extern int FUN_00357e24(...); /* 0x357e24 */
extern unsigned int DAT_005738c8; /* 0x5738c8 */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */


void FUN_00301ed4(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  
  puVar1 = &LAB_00301fa8;
  FUN_0015155c(&LAB_00301fa8,4,0,0,FUN_002dedf0,FUN_00357e24,param_1,*param_1);
  param_1[0x13] = (unsigned int)puVar1;
  FUN_0015155c(&LAB_00301fc0,0x7e,0,0,FUN_00328740,0,param_1,puVar1);
  FUN_0015155c(&LAB_00301fd8,0xda,0,0,FUN_00328740,0,param_1,param_1[0x13]);
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0x4c,1);
  DAT_005738c8 = temp_v0;
  return;
}

} /* extern "C" */
