/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359f90` (_code @ 0x359f90, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0042d000; /* 0x42d000 */
#ifndef ROMWRIGHT_STORAGE_DAT_0042f02c_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0042f02c_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0042f02c_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_0042f02c_1_1_size_check[(sizeof(union romwright_storage_DAT_0042f02c_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0042f02c_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_0042f02c_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0042f02c_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_0042f02c_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0042f02c_1_1 DAT_0042f02c; /* 0x42f02c */
extern unsigned int DAT_004c6458; /* 0x4c6458 */

extern int FUN_0013a170(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_0035511c. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned char FUN_00359f90(void)

{
/* irregular: irregular input(s): in_r3; 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int in_r3;
  unsigned int temp_v2;
  
  temp_v2 = in_r3;
  temp_v1 = FUN_0013a170(&temp_v2,4,0xd0000);
  if (temp_v1 < 0) {
    FUN_002bbb2c(temp_v1,0x359fac);
  }
  FUN_002c38a4(&DAT_004c6458);
  puVar3 = &DAT_0042d000;
  FUN_0035511c();
  temp_v0 = DAT_0042f02c.whole;
  if (-1 < (int)puVar3) {
    FUN_002c3820(&DAT_004c6458);
    return (unsigned int)temp_v0 <= (temp_v2 & 0xffff);
  }
  FUN_002c3820(&DAT_004c6458);
  return 0;
}
