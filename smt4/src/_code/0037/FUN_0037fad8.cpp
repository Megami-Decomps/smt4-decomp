/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037fad8` (_code @ 0x37fad8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015c6bc(...);
int FUN_002bafb0(...);
int FUN_00380024(...);
int nw_snd_internal_driver_ChannelManager_Free(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int nw_snd_internal_driver_Channel_VoiceCallbackFunc(...); /* 0x2ac2c4 */

/* Supplied declaration required: FUN_0015c6bc. */
extern int FUN_002baf30(void);
/* Supplied declaration required: FUN_002bafb0. */
/* Supplied declaration required: FUN_00380024. */
extern int nw_snd_internal_driver_ChannelManager_Alloc(void);
/* Supplied declaration required: nw_snd_internal_driver_ChannelManager_Free. */


int FUN_0037fad8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  FUN_002bafb0();
  temp_v0 = nw_snd_internal_driver_ChannelManager_Alloc();
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 199) = 1;
    temp_v1 = FUN_002baf30();
    FUN_0015c6bc(temp_v1,param_1,param_2,nw_snd_internal_driver_Channel_VoiceCallbackFunc,temp_v0);
    if (temp_v1 == 0) {
      temp_v2 = FUN_002bafb0();
      nw_snd_internal_driver_ChannelManager_Free(temp_v2,temp_v0);
      return 0;
    }
    *(int *)(temp_v0 + 0x134) = temp_v1;
    FUN_00380024(temp_v0,param_3,param_4);
  }
  return temp_v0;
}

} /* extern "C" */
