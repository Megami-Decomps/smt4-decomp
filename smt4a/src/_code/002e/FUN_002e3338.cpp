/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3338` (_code @ 0x2e3338, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100df4(void);
int asdOperatorNewC(void);
int asdOperatorDeleteB(unsigned char *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

/* Supplied declaration required: FUN_00100df4. */
/* Supplied declaration required: asdOperatorNewC. */
/* Supplied declaration required: asdOperatorDeleteB. */


unsigned char * FUN_002e3338(unsigned char *param_1,unsigned char *param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  
  puVar2 = param_2;
  if (param_2 == (unsigned char *)0x0) {
    puVar2 = (unsigned char *)0x40;
  }
  if (param_1 != (unsigned char *)0x0) goto LAB_002e3358;
  while( 1 ) {
    param_1 = puVar2;
    asdOperatorNewC();
LAB_002e3358:
    puVar1 = param_1;
    FUN_00100df4();
    if ((int)puVar1 < 0) {
      *param_1 = 0;
      return param_1;
    }
    if ((int)puVar2 < (int)puVar1) {
      puVar2 = puVar1 + 1;
    }
    else {
      if (puVar2 != puVar1) {
        return param_1;
      }
      puVar2 = (unsigned char *)((int)puVar2 << 1);
    }
    if (param_2 != (unsigned char *)0x0) break;
    asdOperatorDeleteB(param_1);
  }
  return (unsigned char *)0x0;
}

} /* extern "C" */
