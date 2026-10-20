/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df390` (_code @ 0x3df390, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

typedef struct fn_003df390_arg0 fn_003df390_arg0;
struct fn_003df390_arg0 {
    unsigned char pad_0x0[0x7];
    byte field_0x7; /* +0x7 */
    unsigned char pad_0x8[0x11a];
    ushort field_0x122; /* +0x122 */
    unsigned char pad_0x124[0x2];
    ushort field_0x126; /* +0x126 */
    ushort field_0x128; /* +0x128 */
    ushort field_0x12a; /* +0x12a */
};

extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int partyEntryFlagsBit3(void);


void FUN_003df390(fn_003df390_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_001ad9b4();
  if ((((param_1 != (fn_003df390_arg0 *)0x0) &&
       ((param_1->field_0x122 == 0 || (temp_v0 = FUN_0018719c(), temp_v0 != 0)))) &&
      ((param_1->field_0x126 == 0 || (temp_v0 = partyEntryFlagsBit3(), temp_v0 != 0)))) &&
     (((param_1->field_0x128 == 0 || (temp_v0 = partyEntryFlagsBit3(), temp_v0 != 0)) &&
      ((param_1->field_0x12a == 0 || (temp_v0 = partyEntryFlagsBit3(), temp_v0 != 0)))))) {
    FUN_001ad9b4();
  }
  return;
}

} /* extern "C" */
