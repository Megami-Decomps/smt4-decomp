/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1b00` (_code @ 0x2a1b00, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002a1b00_arg0 fn_002a1b00_arg0;
struct fn_002a1b00_arg0 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x40];
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_00359330; /* 0x359330 */

/* Supplied declaration required: FUN_00163060. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019aa50. */
/* Supplied declaration required: FUN_00317534. */
/* Supplied declaration required: FUN_00340f90. */


unsigned int FUN_002a1b00(fn_002a1b00_arg0 *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_00164a9c();
  puVar2 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x220,1);
  strncpy((int)puVar2 + 6,param_2,0x100);
  *(unsigned char *)(puVar2 + 1) = 0;
  *puVar2 = *(unsigned int *)(temp_v0 + 0x70);
  *(int *)(temp_v0 + 0x70) = *(int *)(temp_v0 + 0x70) + 1;
  FUN_0019aa50(temp_v0,puVar2,&LAB_00359330);
  FUN_00317534(param_1);
  FUN_00340f90(temp_v0 + 0xc);
  *(unsigned int *)(temp_v0 + 0x6c) = *(unsigned int *)(temp_v0 + 0x28);
  return *puVar2;
}
