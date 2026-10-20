/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c58c4` (_code @ 0x3c58c4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029127c(void);
int FUN_002e342c(unsigned char *, unsigned char [56]);
int FUN_0037cdcc(unsigned char *, int, unsigned char [200]);
int FUN_003ba614(unsigned char *, int);
int rt_memcpy_w(unsigned int *, unsigned char *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_003c5958; /* 0x3c5958 */
extern unsigned char LAB_00400001; /* 0x400001 */
extern unsigned char LAB_00400002; /* 0x400002 */
extern unsigned int DAT_0059dbec; /* 0x59dbec */
extern unsigned char *DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int DAT_0059e9b4; /* 0x59e9b4 */
extern unsigned char DAT_00634c50; /* 0x634c50 */
extern unsigned int DAT_00634ca0; /* 0x634ca0 */

/* Supplied declaration required: FUN_0029127c. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_0037cdcc. */
/* Supplied declaration required: FUN_003ba614. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned char * FUN_003c58c4(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  unsigned char temp_v0 [200];
  unsigned char temp_v1 [56];
  int temp_v2;
  
  puVar1 = temp_v0;
  puVar2 = &LAB_00400001;
  FUN_0037cdcc(&LAB_003c5958,0x10,temp_v0);
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if (temp_v2 == 1) {
    if (DAT_0059dbf4 != (unsigned char *)0x0) {
      FUN_003ba614(DAT_0059dbf4,3);
    }
    FUN_002e342c(&DAT_00634c50,temp_v1);
    FUN_0029127c();
    DAT_0059dbf4 = puVar1;
    rt_memcpy_w(&DAT_00634ca0,puVar1,0x80);
    puVar2 = &LAB_00400002;
    DAT_0059dbec = 0;
    DAT_0059e9b4 = 0;
  }
  return puVar2;
}

} /* extern "C" */
