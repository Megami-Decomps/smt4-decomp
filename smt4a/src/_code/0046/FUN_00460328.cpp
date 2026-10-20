#include "romwright_types.h"

extern "C" {

int vcallSlot12IfValid(unsigned int);
int FUN_00195fc8(void);

typedef struct fn_00460328_arg0 fn_00460328_arg0;
struct fn_00460328_arg0 {
    unsigned char pad_0x0[0x34];
    void *field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x18];
    byte field_0x50; /* +0x50 */
    byte field_0x51; /* +0x51 */
};

/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: FUN_00195fc8. */


void FUN_00460328(fn_00460328_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  void *pvVar2;
  unsigned char temp_v1;
  
  temp_v1 = param_1->field_0x51 != 0;
  temp_v0 = 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x50;
  }
  if (temp_v1 && temp_v0 != 0) {
    pvVar2 = param_1->field_0x34;
    if ((*(unsigned int *)((int)pvVar2 + 4) & 0xfffffffe) != 0) {
      if ((*(unsigned int *)((int)pvVar2 + 4) & 1) != 0) {
        FUN_00195fc8();
      }
      vcallSlot12IfValid(*(unsigned int *)((int)pvVar2 + 4) & 0xfffffffe);
      *(unsigned int *)((int)pvVar2 + 4) = 0;
    }
    param_1->field_0x50 = 0;
  }
  return;
}

} /* extern "C" */
