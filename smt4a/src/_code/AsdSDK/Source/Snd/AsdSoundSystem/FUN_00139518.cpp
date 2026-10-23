/* NON_MATCHING: ARM11 inline data-memory barrier requires an unavailable compiler intrinsic; retained romwright draft. */
#include "romwright_types.h"

extern "C" {
int FUN_00141b24(void);
int dspUnloadIdleComponent(void);
int FUN_00146e30(void);
int FUN_00147120(void);
int sndSystemFinalize(void);
int FUN_00150784(void);
int FUN_00152bf8(int);
int asdMemFree(void);
int coproc_moveto_Data_Memory_Barrier(int);
extern int DAT_0063e6b4;
extern unsigned int g_asdSoundDuck;
extern unsigned int DAT_0063f4cc;
extern unsigned int DAT_0063f4d0;
extern unsigned int DAT_0063f4d4;
extern unsigned int DAT_0063f4d8;
extern unsigned int DAT_0063f4dc;
extern unsigned char DAT_0063f4e0;
extern unsigned char DAT_0063f4e1;
extern unsigned char DAT_0063f4e2;
extern int g_asdSoundStatus;
extern unsigned int DAT_0063f4e8;
extern unsigned int DAT_0063f4f8;
extern signed char DAT_0063f4fd;
extern int FUN_001b1f04(void);

void FUN_00139518(void)
{
  int temp_v0;
  int temp_v1;
  unsigned int in_r3;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  FUN_00150784();
  FUN_00141b24();
  DAT_0063f4cc = 0;
  g_asdSoundDuck = 0;
  DAT_0063f4d4 = 0;
  DAT_0063f4d8 = 0;
  DAT_0063f4d0 = 0;
  DAT_0063f4dc = 0;
  DAT_0063f4e1 = 0;
  DAT_0063f4e0 = 0;
  DAT_0063f4e2 = 0;
  if (DAT_0063f4fd != '\0') {
    temp_v0 = FUN_001b1f04();
    *(unsigned int *)(temp_v0 + 0x1e8) = 0;
    coproc_moveto_Data_Memory_Barrier(0);
    *(unsigned int *)(temp_v0 + 0x1ec) = 0;
    temp_v2 = 0;
    if ((int)temp_v2 < (int)DAT_0063f4e8) {
      do {
        temp_v3 = -1 < (int)temp_v2;
        temp_v4 = temp_v2 == 0;
        if (temp_v3) {
          in_r3 = DAT_0063f4e8;
        }
        if (temp_v3) {
          temp_v4 = in_r3 == temp_v2;
        }
        temp_v0 = 0;
        if ((!temp_v4 && (temp_v3 && (int)temp_v2 <= (int)in_r3)) &&
           (temp_v0 = g_asdSoundStatus, 0 < (int)temp_v2)) {
          if ((temp_v2 & 1) != 0) {
            temp_v0 = *(int *)(g_asdSoundStatus + 0xd8);
          }
          for (temp_v1 = (int)temp_v2 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
            temp_v0 = *(int *)(*(int *)(temp_v0 + 0xd8) + 0xd8);
          }
        }
        FUN_00152bf8(temp_v0);
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < (int)DAT_0063f4e8);
    }
    DAT_0063f4fd = '\0';
    DAT_0063f4f8 = 0xffffffff;
  }
  if (DAT_0063e6b4 != 0) {
    asdMemFree();
  }
  sndSystemFinalize();
  FUN_00147120();
  dspUnloadIdleComponent();
  FUN_00146e30();
}
}
