/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103ff8` (_code @ 0x103ff8, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char LAB_00104138; /* 0x104138 */
extern unsigned char LAB_00104154; /* 0x104154 */
extern unsigned char LAB_00104170; /* 0x104170 */
extern int FUN_0010a150(); /* 0x10a150 */
extern unsigned char LAB_0010aed4; /* 0x10aed4 */
extern unsigned char LAB_0010b7d4; /* 0x10b7d4 */
extern int FUN_0010b7e4(); /* 0x10b7e4 */
extern unsigned char *DAT_00464be8; /* 0x464be8 */

/* Supplied declaration required: FUN_0010be80. */
/* Supplied declaration required: FUN_0010dbc0. */
/* Supplied declaration required: FUN_002c4360. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


unsigned char * FUN_00103ff8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xc,1);
  puVar2 = (unsigned char *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = &LAB_00104138;
    FUN_002c5978(&LAB_00104138,param_1,0,0,&LAB_0010aed4,FUN_0010a150,puVar1);
    DAT_00464be8 = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      FUN_002c4360(puVar1);
      return (unsigned char *)0x0;
    }
    puVar2 = &LAB_00104154;
    FUN_002c5978(&LAB_00104154,param_2,0,0,FUN_0010b7e4,0,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_0010be80();
    puVar2 = &LAB_00104170;
    FUN_002c5978(&LAB_00104170,param_3,0,0,&LAB_0010b7d4,0,puVar1);
    puVar1[2] = (unsigned int)puVar2;
    FUN_0010dbc0();
    puVar2 = (unsigned char *)0x0;
    if (param_1 != 0) {
      puVar2 = DAT_00464be8;
    }
  }
  return puVar2;
}
