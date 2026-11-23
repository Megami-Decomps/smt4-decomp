/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378000` (_code @ 0x378000, 0x918 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "gamedata/MapSaveBlockA.h"
#include "romwright_types.h"
#include "map/MapGimicGlobal.h"

extern "C" {

int libm_cosf(void); // declcheck: local (romwright prototype; the shared declaration in util/TrigF32.h does not compile here: too few arguments in function call)
int libm_sinf(void); // declcheck: local (decompiler placeholder; its calls do not fit the real libm_sinf(f32))
int mapCollisionQueueBoxWalls(...); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: libm_cosf. */
/* Supplied declaration required: libm_sinf. */
/* Supplied declaration required: mapCollisionQueueBoxWalls. */

void FUN_00378000(void)

{
/* irregular: 4 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned long long temp_v4;
  unsigned long long temp_v5;
  
  temp_v0 = (int)gameFlagsGetBlock();
  temp_v5 = 0x42f00000;
  temp_v4 = 0x3c8efa3500000000;
  temp_v2 = 0;
  do {
    temp_v1 = ((int)g_mapGimic) + temp_v2 * 0x3c;
    if (*(char *)(temp_v1 + 0x90) != '\0') {
      if (*(short *)(temp_v1 + 0xa6) == 0x10) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 10) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0xb) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0xc) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x17) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x15) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x14) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x19) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x1a) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x1d) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x27) {
        if (*(char *)(temp_v0 + 0x1525) != '\0') goto LAB_003788d0;
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x28) {
        if (*(char *)(temp_v0 + 0x1524) != '\0') goto LAB_003788d0;
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x29) {
        if (*(char *)(temp_v0 + 0x1526) != '\0') goto LAB_003788d0;
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x2e) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x33) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x36) {
        *(unsigned int *)(temp_v1 + 0xb8) = *(unsigned int *)(temp_v1 + 0x94);
        *(unsigned int *)(temp_v1 + 0xc0) = *(unsigned int *)(temp_v1 + 0x9c);
        temp_v3 = *(float *)(temp_v1 + 0xc4) * (float)((unsigned long long)temp_v4 >> 0x20);
        libm_sinf();
        *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xb8) - temp_v3 * (float)temp_v5;
        temp_v3 = *(float *)(temp_v1 + 0xc4) * (float)((unsigned long long)temp_v4 >> 0x20);
        libm_cosf();
        *(float *)(temp_v1 + 0xc0) = *(float *)(temp_v1 + 0xc0) - temp_v3 * (float)temp_v5;
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x38) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x39) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x3a) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x3b) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x5f) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x55) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x56) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x57) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4e) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x44) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4f) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x60) {
        *(unsigned int *)(temp_v1 + 0xc0) = *(unsigned int *)(temp_v1 + 0x9c);
        *(unsigned int *)(temp_v1 + 0xb8) = *(unsigned int *)(temp_v1 + 0x94);
        temp_v3 = *(float *)(temp_v1 + 0xc4) * (float)((unsigned long long)temp_v4 >> 0x20);
        libm_sinf();
        *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xb8) - temp_v3 * (float)temp_v5;
        temp_v3 = *(float *)(temp_v1 + 0xc4) * (float)((unsigned long long)temp_v4 >> 0x20);
        libm_cosf();
        *(float *)(temp_v1 + 0xc0) = *(float *)(temp_v1 + 0xc0) - temp_v3 * (float)temp_v5;
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x50) {
        if (*(short *)(temp_v1 + 0xa4) == 2) goto LAB_003788d0;
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x25) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x45) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x46) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x47) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x48) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x49) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4c) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4a) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4b) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x67) {
        mapCollisionQueueBoxWalls((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
    }
LAB_003788d0:
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x23) {
      if (*(char *)(((int)g_mapGimic) + 0x9b4) != '\0') {
        mapCollisionQueueBoxWalls(0x201e);
        return;
      }
      return;
    }
  } while( 1 );
}

} /* extern "C" */
