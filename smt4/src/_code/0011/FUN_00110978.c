/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110978` (_code @ 0x110978, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e909; /* 0x44e909 */
extern unsigned char DAT_0044e90a; /* 0x44e90a */
extern unsigned int DAT_0044e910; /* 0x44e910 */
extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Supplied declaration required: FUN_001216bc. */
/* Supplied declaration required: FUN_00121970. */
/* Supplied declaration required: FUN_00130498. */
/* Supplied declaration required: FUN_002b4e64. */
/* Supplied declaration required: FUN_002bae7c. */
/* Supplied declaration required: FUN_002baed8. */
/* Supplied declaration required: FUN_002baf30. */
/* Supplied declaration required: FUN_002bafb0. */
/* Supplied declaration required: FUN_002bb020. */
/* Supplied declaration required: FUN_002bd440. */
/* Supplied declaration required: FUN_002c37f0. */
/* Supplied declaration required: nw_snd_internal_TaskThread_Destroy. */
/* Supplied declaration required: nw_snd_internal_driver_ChannelManager_Finalize. */
/* Supplied declaration required: nw_snd_internal_driver_HardwareManager_Finalize. */
/* Supplied declaration required: nw_snd_internal_driver_SoundThread_Destroy. */
/* Supplied declaration required: nw_snd_internal_driver_SoundThread_Finalize. */
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_Finalize. */


void FUN_00110978(void)

{
/* irregular: 17 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0044e909 != '\0') {
    temp_v0 = FUN_002bb020();
    FUN_00130498(temp_v0);
    nw_snd_internal_TaskThread_Destroy();
    FUN_002bb020();
    FUN_002b4e64();
    FUN_002bd440();
    nw_snd_internal_driver_SoundThread_Destroy();
    FUN_002bd440();
    FUN_002c37f0();
    FUN_002bafb0();
    nw_snd_internal_driver_ChannelManager_Finalize();
    FUN_002baf30();
    nw_snd_internal_driver_VoiceManager_Finalize();
    nw_snd_internal_driver_HardwareManager_Finalize(&DAT_004ea168);
    FUN_001216bc(&DAT_0044e910);
    FUN_002bd440();
    nw_snd_internal_driver_SoundThread_Finalize();
    FUN_002baed8();
    FUN_00121970();
    FUN_002bae7c();
    FUN_00121970();
    DAT_0044e90a = 0;
    DAT_0044e909 = '\0';
  }
  return;
}
