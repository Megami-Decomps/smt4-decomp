#include "romwright_types.h"

extern "C" {

int FUN_002ad8b4(int, unsigned int);

extern unsigned int FUN_00238c80(unsigned char *, int);
/* Supplied declaration required: FUN_002ad8b4. */
extern unsigned int nn_cec_CTR_MessageBox_GetMessHeader(unsigned int, int, unsigned int);


unsigned int
nn_cec_CTR_MessageBox_GetMessageId(unsigned int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  
  temp_v0 = nn_cec_CTR_MessageBox_GetMessHeader(param_1,param_3,param_4);
  if (temp_v0 == 0 || temp_v0 == -0x20) {
    temp_v1 = 0xc8810bef;
  }
  else {
    if (param_2 != 0) {
      temp_v1 = FUN_00238c80(temp_v2,temp_v0 + 0x20);
      FUN_002ad8b4(param_2,temp_v1);
    }
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
