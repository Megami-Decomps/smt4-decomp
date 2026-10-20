#include "romwright_types.h"

extern "C" {

int FUN_002c0d08(void);

extern unsigned char DAT_00465198; /* 0x465198 */
extern unsigned int DAT_004651a4; /* 0x4651a4 */
extern unsigned int DAT_004e4138; /* 0x4e4138 */

/* Supplied declaration required: FUN_002c0d08. */
extern unsigned char nn_applet_CTR_IsExpectedToProcessHomeButton(void);
extern unsigned char nn_os_CriticalSection_TryEnter(unsigned int);
extern void nn_os_LightEvent_ClearSignal(unsigned int);


unsigned int FUN_001051f0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = nn_applet_CTR_IsExpectedToProcessHomeButton();
  if (temp_v0) {
    if ((*(signed char *)((unsigned char *)&DAT_00465198 + 0x1)) != '\0') {
      nn_os_LightEvent_ClearSignal((unsigned int)&DAT_004651a4);
      temp_v0 = nn_os_CriticalSection_TryEnter((unsigned int)&DAT_004e4138);
      temp_v1 = (temp_v0 == 0) ? 2 : 3;
    }
    else {
      FUN_002c0d08();
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
