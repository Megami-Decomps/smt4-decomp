/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147b84` (_code @ 0x147b84, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015e8c0(unsigned int *);
int FUN_0015eb74(void);
int FUN_0015ec28(void);
int FUN_0015ec84(unsigned char *);
int FUN_00174ae0(unsigned int);
int FUN_00175678(void);
int FUN_0019065c(void);
int FUN_00191330(void);
int FUN_00191548(void);
int FUN_00197e28(void);
int FUN_001b1998(void);
int FUN_001b1f04(void);
int FUN_001c2484(void);
int FUN_002f59a8(void);
int nw_snd_internal_driver_SoundThread_Destroy(void);
int nw_snd_internal_driver_SoundThread_Finalize(void);
int nw_snd_internal_driver_VoiceManager_Finalize(void);

extern unsigned char DAT_0059dba4; /* 0x59dba4 */
extern unsigned char DAT_0059dba6; /* 0x59dba6 */
extern unsigned int DAT_0059dbac; /* 0x59dbac */
extern unsigned char DAT_00646b38; /* 0x646b38 */

/* Supplied declaration required: FUN_0015e8c0. */
/* Supplied declaration required: FUN_0015eb74. */
/* Supplied declaration required: FUN_0015ec28. */
/* Supplied declaration required: FUN_0015ec84. */
/* Supplied declaration required: FUN_00174ae0. */
/* Supplied declaration required: FUN_00175678. */
/* Supplied declaration required: FUN_0019065c. */
/* Supplied declaration required: FUN_00191330. */
/* Supplied declaration required: FUN_00191548. */
/* Supplied declaration required: FUN_00197e28. */
/* Supplied declaration required: FUN_001b1998. */
/* Supplied declaration required: FUN_001b1f04. */
/* Supplied declaration required: FUN_001c2484. */
/* Supplied declaration required: FUN_002f59a8. */
/* Supplied declaration required: nw_snd_internal_driver_SoundThread_Destroy. */
/* Supplied declaration required: nw_snd_internal_driver_SoundThread_Finalize. */
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_Finalize. */


void FUN_00147b84(void)

{
/* irregular: 17 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&DAT_0059dba4 + 0x1)) != '\0') {
    temp_v0 = FUN_001b1998();
    FUN_00174ae0(temp_v0);
    FUN_0019065c();
    FUN_001b1998();
    FUN_00197e28();
    FUN_001b1f04();
    nw_snd_internal_driver_SoundThread_Destroy();
    FUN_001b1f04();
    FUN_002f59a8();
    FUN_00191548();
    FUN_0015ec28();
    FUN_001c2484();
    nw_snd_internal_driver_VoiceManager_Finalize();
    FUN_0015ec84(&DAT_00646b38);
    FUN_0015e8c0(&DAT_0059dbac);
    FUN_001b1f04();
    nw_snd_internal_driver_SoundThread_Finalize();
    FUN_00175678();
    FUN_0015eb74();
    FUN_00191330();
    FUN_0015eb74();
    DAT_0059dba6 = 0;
    (*(signed char *)((unsigned char *)&DAT_0059dba4 + 0x1)) = '\0';
  }
  return;
}

} /* extern "C" */
