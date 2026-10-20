#include "romwright_types.h"

extern "C" {

typedef struct fn_0049277c_arg0 fn_0049277c_arg0;
struct fn_0049277c_arg0 {
    unsigned char pad_0x0[0x8];
    short field_0x8; /* +0x8 */
    short field_0xa; /* +0xa */
    void *field_0xc; /* +0xc */
};

extern int FUN_001834a4(void);


void FUN_0049277c(fn_0049277c_arg0 *param_1,unsigned int param_2,int *param_3,int *param_4,
                 unsigned int *param_5,unsigned int *param_6)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001834a4();
  *param_3 = (int)*(short *)(temp_v0 + 8);
  *param_4 = (int)*(short *)(temp_v0 + 10);
  if (*(short **)(temp_v0 + 0xc) != (short *)0x0) {
    *param_5 = (int)**(short **)(temp_v0 + 0xc);
    temp_v1 = (unsigned int)*(short *)(*(int *)(temp_v0 + 0xc) + 2);
  }
  else {
    *param_5 = *(unsigned short *)(temp_v0 + 4) & 0xffff7fff;
    temp_v1 = *(unsigned short *)(temp_v0 + 6) & 0xffff7fff;
  }
  *param_6 = temp_v1;
  return;
}

} /* extern "C" */
