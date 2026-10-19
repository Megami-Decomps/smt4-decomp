/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021f57c` (_code @ 0x21f57c, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp198; /* 0x198: local_198 */
} param_5_stack;

extern unsigned int *DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_00238f44. */
/* Supplied declaration required: FUN_0024ee68. */
/* Supplied declaration required: FUN_00263308. */
extern int FUN_002b5a48(unsigned int);
/* Supplied declaration required: FUN_00357a24. */
/* Supplied declaration required: nn_cec_CTR_Message_Message_sub_object. */
/* Supplied declaration required: nn_cec_CTR_Message_NewMessage. */
extern unsigned int nn_cec_CTR_Message_SetExHeader(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int nn_cec_CTR_Message_SetMessageBody(unsigned int, unsigned int, unsigned int);


unsigned int FUN_0021f57c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 )

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [360];
  
  nn_cec_CTR_Message_Message_sub_object(temp_v3);
  temp_v0 = DAT_00464fac[6];
  FUN_00263308(temp_v0,*DAT_00464fac,DAT_00464fac[1]);
  if (-1 < (int)temp_v0) {
    nn_cec_CTR_Message_NewMessage
              (temp_v3,*DAT_00464fac,0,*(unsigned char *)(DAT_00464fac + 2),
               *(unsigned char *)((int)DAT_00464fac + 9),*(unsigned char *)((int)DAT_00464fac + 10),
               *(unsigned char *)((int)DAT_00464fac + 0xb));
    nn_cec_CTR_Message_SetExHeader((unsigned int)temp_v3,2,param_3,param_2);
    temp_v1 = FUN_002b5a48(param_1);
    nn_cec_CTR_Message_SetExHeader((unsigned int)temp_v3,4,temp_v1 << 1,param_1);
    nn_cec_CTR_Message_SetMessageBody((unsigned int)temp_v3,param_4,param_5);
    temp_v0 = DAT_00464fac[6];
    FUN_00357a24(temp_v0,temp_v3,1,DAT_00464fac[3]);
    temp_v2 = temp_v0 & 0x80000000;
    if ((int)temp_v2 < 0) {
      temp_v2 = 0xe0a1086c;
      if (temp_v0 != 0xe0a1086c) {
        temp_v2 = 0xe0a1086d;
      }
      if (temp_v0 != 0xe0a1086c && temp_v0 != temp_v2) {
        if (temp_v0 != 0xc8810bea) {
          temp_v2 = 0xc8e10865;
        }
        if ((temp_v0 != 0xc8810bea && temp_v0 != temp_v2) && (temp_v2 = 0xc8e10866, temp_v0 != 0xc8e10866)) {
          temp_v2 = 0xc8e10869;
        }
      }
    }
    FUN_00238f44(DAT_00464fac[6],temp_v2);
    FUN_0024ee68(0);
  }
  return temp_v0;
}
