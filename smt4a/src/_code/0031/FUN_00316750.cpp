/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316750` (_code @ 0x316750, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

struct AsdCecMessageBox;

extern "C" {

int FUN_0042d5b4(int);
int FUN_0042dd98(unsigned int, unsigned char [360], int, unsigned int);
s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 id, u32 expectedTag);
int asdCecMessageBoxClose(unsigned int, unsigned int);
int nn_cec_CTR_Message_Message_sub_object(unsigned char [360]);
int nn_cec_CTR_Message_NewMessage(unsigned char [360], unsigned int, int, int, int, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp198; /* 0x198: local_198 */
} param_5_stack;

extern unsigned char g_asdCec; /* 0x5b3f94 */

extern int wstrlenU16(unsigned int);
/* Supplied declaration required: FUN_0042d5b4. */
/* Supplied declaration required: FUN_0042dd98. */
/* Supplied declaration required: asdCecMessageBoxClose. */
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
  temp_v0 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6];
  temp_v0 = asdCecMessageBoxOpen((AsdCecMessageBox*)temp_v0,
      *(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)),
      (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[1]);
  if (-1 < (int)temp_v0) {
    nn_cec_CTR_Message_NewMessage
              (temp_v3,*(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)),0,*(unsigned char *)((*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)) + 2),
               *(unsigned char *)((int)(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)) + 9),*(unsigned char *)((int)(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)) + 10),
               *(unsigned char *)((int)(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)) + 0xb));
    nn_cec_CTR_Message_SetExHeader((unsigned int)temp_v3,2,param_3,param_2);
    temp_v1 = wstrlenU16(param_1);
    nn_cec_CTR_Message_SetExHeader((unsigned int)temp_v3,4,temp_v1 << 1,param_1);
    nn_cec_CTR_Message_SetMessageBody((unsigned int)temp_v3,param_4,param_5);
    temp_v0 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6];
    FUN_0042dd98(temp_v0,temp_v3,1,(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[3]);
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
    asdCecMessageBoxClose((*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6],temp_v2);
    FUN_0042d5b4(0);
  }
  return temp_v0;
}

} /* extern "C" */
