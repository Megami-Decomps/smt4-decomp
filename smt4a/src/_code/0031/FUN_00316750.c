/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316750` (_code @ 0x316750, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp198; /* 0x198: local_198 */
} param_5_stack;

extern unsigned int *DAT_005b3f98; /* 0x5b3f98 */

extern int FUN_002e783c(unsigned int);
/* Supplied declaration required: FUN_0042d5b4. */
/* Supplied declaration required: FUN_0042dd98. */
/* Supplied declaration required: FUN_0042e67c. */
/* Supplied declaration required: FUN_0042e868. */
/* Supplied declaration required: nn_cec_CTR_Message_Message_sub_object. */
/* Supplied declaration required: nn_cec_CTR_Message_NewMessage. */
extern unsigned int nn_cec_CTR_Message_SetExHeader(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int nn_cec_CTR_Message_SetMessageBody(unsigned int, unsigned int, unsigned int);


unsigned int FUN_00316750(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 )

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [360];
  
  nn_cec_CTR_Message_Message_sub_object(temp_v3);
  temp_v0 = DAT_005b3f98[6];
  FUN_0042e67c(temp_v0,*DAT_005b3f98,DAT_005b3f98[1]);
  if (-1 < (int)temp_v0) {
    nn_cec_CTR_Message_NewMessage
              (temp_v3,*DAT_005b3f98,0,*(unsigned char *)(DAT_005b3f98 + 2),
               *(unsigned char *)((int)DAT_005b3f98 + 9),*(unsigned char *)((int)DAT_005b3f98 + 10),
               *(unsigned char *)((int)DAT_005b3f98 + 0xb));
    nn_cec_CTR_Message_SetExHeader((unsigned int)temp_v3,2,param_3,param_2);
    temp_v1 = FUN_002e783c(param_1);
    nn_cec_CTR_Message_SetExHeader((unsigned int)temp_v3,4,temp_v1 << 1,param_1);
    nn_cec_CTR_Message_SetMessageBody((unsigned int)temp_v3,param_4,param_5);
    temp_v0 = DAT_005b3f98[6];
    FUN_0042dd98(temp_v0,temp_v3,1,DAT_005b3f98[3]);
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
    FUN_0042e868(DAT_005b3f98[6],temp_v2);
    FUN_0042d5b4(0);
  }
  return temp_v0;
}
