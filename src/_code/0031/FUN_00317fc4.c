/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317fc4` (_code @ 0x317fc4, 0x194 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_001e15bc; /* 0x1e15bc */
extern unsigned char LAB_001f64c4; /* 0x1f64c4 */
extern unsigned char LAB_002d0474; /* 0x2d0474 */
extern unsigned char LAB_002d0630; /* 0x2d0630 */
extern unsigned char LAB_002dca30; /* 0x2dca30 */
extern unsigned char LAB_002e4a94; /* 0x2e4a94 */
extern unsigned char LAB_002e4aac; /* 0x2e4aac */
extern unsigned char LAB_00300b50; /* 0x300b50 */

/* Supplied declaration required: FUN_0027f3d4. */
extern int *FUN_002b49d8(unsigned int);
/* Supplied declaration required: FUN_002b7f0a. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_00317fc4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  
  temp_v0 = FUN_002c0ec4(5,1);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  FUN_002b7f0a(temp_v1,temp_v0,4,&LAB_002d0474);
  temp_v0 = FUN_002c0ec4(5,2);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  FUN_002b7f0a(temp_v1,temp_v0,4,&LAB_00300b50);
  temp_v0 = FUN_002c0ec4(5,3);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  FUN_002b7f0a(temp_v1,temp_v0,4,&LAB_002d0630);
  temp_v0 = FUN_002c0ec4(5,4);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  FUN_002b7f0a(temp_v1,temp_v0,0x1c,&LAB_001f64c4);
  temp_v0 = FUN_002c0ec4(5,7);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  FUN_002b7f0a(temp_v1,temp_v0,4,&LAB_002e4a94);
  temp_v0 = FUN_002c0ec4(5,8);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  FUN_002b7f0a(temp_v1,temp_v0,0x14,&LAB_002e4aac);
  temp_v0 = FUN_002c0ec4(6,1);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  FUN_002b7f0a(temp_v1,temp_v0,4,&LAB_002dca30);
  piVar3 = (int *)FUN_002b49d8(0x1f);
  FUN_0027f3d4(piVar3 + 1,(*piVar3 - 4U) >> 3,8,&LAB_001e15bc);
  return;
}
