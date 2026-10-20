#include "romwright_types.h"

extern "C" {

int FUN_00110790(int, unsigned int, int);
int FUN_002eea94(int, int);

typedef struct fn_002f7b9c_arg1 fn_002f7b9c_arg1;
struct fn_002f7b9c_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* Supplied declaration required: FUN_00110790. */
extern int FUN_002ea0e4(void);
/* Supplied declaration required: FUN_002eea94. */


void FUN_002f7b9c(unsigned int param_1,fn_002f7b9c_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002ea0e4();
  FUN_002eea94(temp_v0,param_2->field_0x10 * 2 + 1);
  temp_v1 = *(unsigned int *)(temp_v0 + 4);
  FUN_00110790(param_2->field_0xc + param_2->field_0x18,temp_v1,param_2->field_0x10);
  return;
}

} /* extern "C" */
