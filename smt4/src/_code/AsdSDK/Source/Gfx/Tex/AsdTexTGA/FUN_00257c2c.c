/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257c2c` (_code @ 0x257c2c, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b4414. */
/* Supplied declaration required: FUN_002bf5c0. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00257c2c(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int uStack_30;
  unsigned int uStack_2c;
  
  if (param_1 != 0 && param_2 != 0) {
    temp_v2 = FUN_002b4414(param_2 + 0x12,"NW4C_Tga Ver1.0",0x10);
    if (temp_v2 == 0) {
      temp_v0 = *(unsigned char *)(param_2 + 0xd);
      temp_v1 = *(unsigned char *)(param_2 + 0xc);
      *(unsigned int *)(param_1 + 0x18) =
           (unsigned int)*(unsigned char *)(param_2 + 0xe) + (unsigned int)*(unsigned char *)(param_2 + 0xf) * 0x100;
      *(unsigned int *)(param_1 + 0x14) = (unsigned int)temp_v1 + (unsigned int)temp_v0 * 0x100;
      *(unsigned int *)(param_1 + 8) = param_4;
      *(unsigned int *)(param_1 + 4) = 0xde1;
      param_2 = param_2 + *(int *)(param_2 + 0x22);
      while( 1 ) {
        temp_v2 = FUN_002b4414(param_2,"nw4c_txd",8);
        if (temp_v2 == 0) {
          *(int *)(param_1 + 0x28) = *(int *)(param_2 + 8) - 0xc;
          uStack_2c = 1;
          uStack_30 = 0x80;
          temp_v3 = 0x10000;
          FUN_002bf5c0(0x10000,0x100,0,*(unsigned int *)(param_1 + 0x28));
          *(unsigned int *)(param_1 + 0x24) = temp_v3;
          rt_memcpy();
        }
        temp_v2 = FUN_002b4414(param_2,"nw4c_tfm",8);
        if (temp_v2 == 0) {
          uStack_30 = 0;
          uStack_2c = 0;
          rt_memcpy(&uStack_30,param_2 + 0xc,*(int *)(param_2 + 8) - 0xc);
          temp_v2 = FUN_002b4414(&uStack_30,"Etc1_a4",8);
          if (temp_v2 == 0) {
            *(unsigned int *)(param_1 + 0x20) = 0x1401;
            *(unsigned int *)(param_1 + 0x1c) = 0x675b;
          }
          else {
            temp_v2 = FUN_002b4414(&uStack_30,"Etc1",8);
            if (temp_v2 == 0) {
              *(unsigned int *)(param_1 + 0x1c) = 0x675a;
              *(unsigned int *)(param_1 + 0x20) = 0x1401;
            }
          }
        }
        temp_v2 = FUN_002b4414(param_2,"nw4c_end",8);
        if (temp_v2 == 0) break;
        param_2 = param_2 + *(int *)(param_2 + 8);
      }
    }
    return;
  }
  return;
}
