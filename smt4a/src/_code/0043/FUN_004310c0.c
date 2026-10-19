/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004310c0` (_code @ 0x4310c0, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0056a000; /* 0x56a000 */
#ifndef ROMWRIGHT_STORAGE_DAT_0056c02c_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0056c02c_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0056c02c_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_0056c02c_1_1_size_check[(sizeof(union romwright_storage_DAT_0056c02c_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0056c02c_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_0056c02c_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0056c02c_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_0056c02c_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0056c02c_1_1 DAT_0056c02c; /* 0x56c02c */
extern unsigned int DAT_0061a638; /* 0x61a638 */

/* Supplied declaration required: FUN_0016e800. */
extern int FUN_00189738(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0042a44c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned char FUN_004310c0(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int in_r3;
  unsigned int temp_v2;
  
  temp_v2 = in_r3;
  temp_v1 = FUN_00189738(&temp_v2,4,0xd0000);
  if (temp_v1 < 0) {
    FUN_0016e800(temp_v1,0x4310dc);
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0061a638);
  puVar3 = &DAT_0056a000;
  FUN_0042a44c();
  temp_v0 = DAT_0056c02c.whole;
  if (-1 < (int)puVar3) {
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a638);
    return (unsigned int)temp_v0 <= (temp_v2 & 0xffff);
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a638);
  return 0;
}
