/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec538` (_code @ 0x3ec538, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(unsigned char *, unsigned char *, int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_00349fbc; /* 0x349fbc */
extern unsigned char LAB_0034ad90; /* 0x34ad90 */
extern unsigned char LAB_0034b144; /* 0x34b144 */
extern unsigned int DAT_0044cdc0; /* 0x44cdc0 */
extern unsigned int DAT_0044cdc4; /* 0x44cdc4 */
extern unsigned char DAT_004be698; /* 0x4be698 */
extern unsigned char DAT_004bf89c; /* 0x4bf89c */
extern unsigned char DAT_004c14a0; /* 0x4c14a0 */
extern unsigned char DAT_004c2424; /* 0x4c2424 */

/* Supplied declaration required: FUN_002c5d5c. */


unsigned char * FUN_003ec538(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  DAT_0044cdc0 = 0;
  DAT_0044cdc4 = 0;
  FUN_002c5d5c(&DAT_004be698,&LAB_0034b144,0x20,0x90);
  FUN_002c5d5c(&DAT_004bf89c,&LAB_00349fbc,0x1c,0x100);
  FUN_002c5d5c(&DAT_004c14a0,&LAB_0034ad90,0x7c,0x20);
  temp_v0 = 0x80;
  puVar2 = &DAT_004c2424;
  while (temp_v1 = temp_v0 != 0, temp_v0 = temp_v0 - 1, temp_v1) {
    (*(romwright_code *)0x34bc70)(puVar2);
    puVar2 = puVar2 + 0x1c;
  }
  return &DAT_004c2424;
}

} /* extern "C" */
