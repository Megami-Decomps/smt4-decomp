#include "classes/Obj55ada4.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129b00` (_code @ 0x129b00, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00129a40(unsigned int *);
int onlineObjectListRemove(unsigned char *, unsigned int *);

extern unsigned char DAT_005599b0; /* 0x5599b0 */
extern unsigned char DAT_00594b24; /* 0x594b24 */

/* Supplied declaration required: FUN_00129a40. */
/* Supplied declaration required: onlineObjectListRemove. */


int FUN_00129b00(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005599b0;
  onlineObjectListRemove(&DAT_00594b24,param_1);
  FUN_00129a40(param_1);
  temp_v0 = (((Obj55ada4 *)(param_1 + 8))->Obj55ada4::~Obj55ada4(), (int)(param_1 + 8));
  temp_v0 = (((Obj55ada4 *)(temp_v0 - 0x14))->Obj55ada4::~Obj55ada4(), (int)(temp_v0 - 0x14));
  return temp_v0 - 0xc;
}

} /* extern "C" */
