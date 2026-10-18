/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147550` (_code @ 0x147550, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern signed char DAT_005891b2; /* 0x5891b2 */
extern int DAT_005891b8; /* 0x5891b8 */

/* Supplied declaration required: FUN_00158df0. */
extern int FUN_00158e08(unsigned int);
/* Supplied declaration required: FUN_0015a230. */
extern unsigned int FUN_0015a2d8(void);
extern int FUN_0015a2e8(void);
/* Supplied declaration required: FUN_0015a308. */
/* Supplied declaration required: FUN_0015a32c. */
/* Supplied declaration required: FUN_0015a4d0. */
/* Supplied declaration required: FUN_0015a4e0. */
/* Supplied declaration required: FUN_0015a52c. */
/* Supplied declaration required: FUN_0015a79c. */
extern int FUN_0015aa30(unsigned int, unsigned int, unsigned int *, unsigned int *);
extern int FUN_0015aa80(unsigned int *, unsigned int, unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_0015ac90. */
/* Supplied declaration required: FUN_0015adc4. */
extern int FUN_001703e8(void);
/* Supplied declaration required: FUN_001713d8. */
/* Supplied declaration required: FUN_001713e8. */
/* Supplied declaration required: FUN_00189a38. */
extern unsigned int FUN_0018b70c(void);
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */


int FUN_00147550(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int uStack_18;
  
  if (DAT_005891b2 != '\0') {
    temp_v0 = -0x1f5f3007;
  }
  else {
    DAT_005891b2 = '\x01';
    if (DAT_005891b8 == 0) {
      DAT_005891b8 = FUN_00158e08(0x5891c0);
      FUN_00158df0();
    }
    FUN_0015ac90();
    temp_v3 = 0;
    temp_v0 = FUN_0015aa80((unsigned int *)&temp_v3,param_2,(unsigned int *)&uStack_18,&temp_v4);
    if (-1 < temp_v0) {
      FUN_0015a52c(temp_v3);
      FUN_001713d8(temp_v4 & 1);
      FUN_001713e8((temp_v4 & 2) >> 1);
      FUN_0015a4e0();
      FUN_0015a4d0(param_1);
      FUN_0015a308(uStack_18);
      temp_v0 = FUN_0015a2e8();
      if (temp_v0 == 0) {
        FUN_0018b868();
        FUN_0015adc4();
        temp_v3 = 0;
        temp_v4 = 0;
        temp_v1 = FUN_0015a2d8();
        temp_v2 = FUN_0018b70c();
        temp_v0 = FUN_0015aa30(temp_v2,temp_v1,&temp_v4,(unsigned int *)&temp_v3);
        if (temp_v0 < 0) {
          FUN_00189a38(temp_v0,0x147694);
        }
        FUN_0015a32c();
        FUN_0015a79c(param_3,temp_v3,temp_v4);
        FUN_0018b964();
        temp_v0 = FUN_001703e8();
        if (temp_v0 == 0) {
          FUN_0015a230();
        }
      }
      return 0;
    }
    FUN_0015a4e0();
  }
  return temp_v0;
}
