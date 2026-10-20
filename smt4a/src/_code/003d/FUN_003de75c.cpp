/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de75c` (_code @ 0x3de75c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(...);
int FUN_001ad9b4(void);

typedef struct fn_003de75c_arg0 fn_003de75c_arg0;
struct fn_003de75c_arg0 {
    unsigned char pad_0x0[0x6];
    byte field_0x6; /* +0x6 */
    unsigned char pad_0x7[0x129];
    ushort field_0x130; /* +0x130 */
    ushort field_0x132; /* +0x132 */
};

extern int g_gameState; /* 0x5f15fc */

/* Supplied declaration required: gameFlagIsSet. */
extern int FUN_0019f1a4(fn_003de75c_arg0 *, unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_003df390(void);


unsigned int FUN_003de75c(fn_003de75c_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  fn_003de75c_arg0 *pfVar3;
  unsigned int temp_v2;
  
  temp_v1 = FUN_003df390();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    pfVar3 = param_1;
    FUN_001ad9b4();
    temp_v1 = FUN_0019f1a4(param_1,3);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = pfVar3->field_0x6;
    }
    if (((temp_v1 != 0 && temp_v0 != 9) ||
        (((((fn_003de75c_arg0 *)0x15d < param_1 &&
           (FUN_001ad9b4(), param_1 != (fn_003de75c_arg0 *)0x0)) && (param_1->field_0x6 == 9)) &&
         (g_gameState == 0x18)))) ||
       ((((pfVar3->field_0x130 != 0 && (temp_v1 = gameFlagIsSet(), temp_v1 != 0)) &&
         ((pfVar3->field_0x132 == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)))) ||
        (temp_v1 = gameFlagIsSet(0x560), temp_v1 != 0)))) {
      temp_v2 = 0;
    }
    else {
      temp_v2 = 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
