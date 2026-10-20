/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104074` (_code @ 0x104074, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010befc(void);
int FUN_0010dc54(void);
int FUN_002c415c(unsigned int *);
int FUN_002c498c(int, int, int, int, int);
int FUN_002c5788(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char LAB_0010417c; /* 0x10417c */
extern unsigned char LAB_00104198; /* 0x104198 */
extern unsigned char LAB_001041b4; /* 0x1041b4 */
extern int FUN_0010a1b8(...); /* 0x10a1b8 */
extern unsigned char LAB_0010af48; /* 0x10af48 */
extern unsigned char LAB_0010b844; /* 0x10b844 */
extern int FUN_0010b854(...); /* 0x10b854 */
extern unsigned char *DAT_00464be8; /* 0x464be8 */

/* Supplied declaration required: FUN_0010befc. */
/* Supplied declaration required: FUN_0010dc54. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */


unsigned char * FUN_00104074(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0xc,1);
  puVar2 = (unsigned char *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = &LAB_0010417c;
    FUN_002c5788(&LAB_0010417c,param_1,0,0,&LAB_0010af48,FUN_0010a1b8,puVar1);
    DAT_00464be8 = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      FUN_002c415c(puVar1);
      return (unsigned char *)0x0;
    }
    puVar2 = &LAB_00104198;
    FUN_002c5788(&LAB_00104198,param_2,0,0,FUN_0010b854,0,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_0010befc();
    puVar2 = &LAB_001041b4;
    FUN_002c5788(&LAB_001041b4,param_3,0,0,&LAB_0010b844,0,puVar1);
    puVar1[2] = (unsigned int)puVar2;
    FUN_0010dc54();
    puVar2 = (unsigned char *)0x0;
    if (param_1 != 0) {
      puVar2 = DAT_00464be8;
    }
  }
  return puVar2;
}

} /* extern "C" */
