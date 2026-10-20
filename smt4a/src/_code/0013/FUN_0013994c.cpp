#include "romwright_types.h"

extern "C" {

int FUN_0015a568(void);
int FUN_001a0990(unsigned int *);

extern unsigned char DAT_005b408c; /* 0x5b408c */
extern unsigned int DAT_005b4098; /* 0x5b4098 */
extern unsigned int DAT_00640550; /* 0x640550 */

/* Supplied declaration required: FUN_0015a568. */
/* Supplied declaration required: FUN_001a0990. */
extern unsigned char nn_applet_CTR_IsExpectedToProcessHomeButton(void);
extern unsigned char nn_os_CriticalSection_TryEnter(unsigned int);


unsigned int FUN_0013994c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = nn_applet_CTR_IsExpectedToProcessHomeButton();
  if (temp_v0) {
    if ((*(signed char *)((unsigned char *)&DAT_005b408c + 0x1)) != '\0') {
      FUN_001a0990(&DAT_005b4098);
      temp_v0 = nn_os_CriticalSection_TryEnter((unsigned int)&DAT_00640550);
      temp_v1 = (temp_v0 == 0) ? 2 : 3;
    }
    else {
      FUN_0015a568();
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
