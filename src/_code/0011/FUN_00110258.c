/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110258` (_code @ 0x110258, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern signed char DAT_0044e362; /* 0x44e362 */

/* Supplied declaration required: FUN_0011d00c. */
extern int FUN_0011d0b4(void);
/* Supplied declaration required: FUN_0011d0d4. */
/* Supplied declaration required: FUN_0011d12c. */
/* Supplied declaration required: FUN_0011d270. */
/* Supplied declaration required: FUN_0011d280. */
/* Supplied declaration required: FUN_0011d2cc. */
/* Supplied declaration required: FUN_0011d31c. */
extern int FUN_0011d564(unsigned int, unsigned int, unsigned int *, unsigned int *);
extern int FUN_0011d5b4(unsigned int *, unsigned int, unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_0011d854. */
/* Supplied declaration required: FUN_0011d8c4. */
extern unsigned int FUN_002bb440(void);
extern unsigned int FUN_002bb450(void);
/* Supplied declaration required: FUN_002bb460. */
/* Supplied declaration required: FUN_002bb470. */
extern int FUN_002bb608(void);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c14f4. */


int FUN_00110258(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int uStack_18;
  
  if (DAT_0044e362 != '\0') {
    temp_v0 = -0x1f5f3007;
  }
  else {
    DAT_0044e362 = '\x01';
    FUN_0011d854();
    temp_v3 = 0;
    temp_v0 = FUN_0011d5b4((unsigned int *)&temp_v3,param_2,(unsigned int *)&uStack_18,&temp_v4);
    if (-1 < temp_v0) {
      FUN_0011d2cc(temp_v3);
      FUN_002bb470(temp_v4 & 1);
      FUN_002bb460((temp_v4 & 2) >> 1);
      FUN_0011d280();
      FUN_0011d270(param_1);
      FUN_0011d0d4(uStack_18);
      temp_v0 = FUN_0011d0b4();
      if (temp_v0 == 0) {
        FUN_002bb6b8();
        FUN_0011d8c4();
        temp_v3 = 0;
        temp_v4 = 0;
        temp_v1 = FUN_002bb450();
        temp_v2 = FUN_002bb440();
        temp_v0 = FUN_0011d564(temp_v2,temp_v1,&temp_v4,(unsigned int *)&temp_v3);
        if (temp_v0 < 0) {
          FUN_002c14f4(temp_v0,0x110368);
        }
        FUN_0011d12c();
        FUN_0011d31c(param_3,temp_v3,temp_v4);
        FUN_002bb648();
        temp_v0 = FUN_002bb608();
        if (temp_v0 == 0) {
          FUN_0011d00c();
        }
      }
      return 0;
    }
    FUN_0011d280();
  }
  return temp_v0;
}
