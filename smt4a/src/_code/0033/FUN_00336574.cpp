/* NON_MATCHING: native scalar-subobject accessors retain different VFP base calculations and no-op slots; final render-stack scratch registers also differ. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

extern "C" {

void efctSetSpeed(float speed);


extern int g_renderCtx; /* 0x59dbb4 */

extern int vec2GetXInt(int position);
extern int vec2GetYInt(int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
extern int FUN_002a4878(int);


void FUN_00336574(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v6;
  
  if ((*(char *)(param_1 + 0x38b9) == '\0') && (*(int *)(param_1 + 0x3890) <= 3)) {
    temp_v0 = vec2GetXInt(param_1 + 0x12b8);
    temp_v1 = vec2GetYInt(param_1 + 0x12b8);
    const float opacity = *(float *)(param_1 + 0x12d8);
    efctSetSpeed(opacity);
    temp_v2 = FUN_001834a4(0xd,*(int *)(param_1 + 0x3890) + 0x5a);
    renderCtxSetB(reinterpret_cast<RenderCtxA *>(g_renderCtx), packNibblesAndByte(6,1,0));
    FUN_001835b4(2,0xd,0x56,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_001835b4(2,0xd,0x57,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_001835b4(2,0xd,0x58,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_001835b4(2,0xd,0x59,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    renderCtxSetB(reinterpret_cast<RenderCtxA *>(g_renderCtx), packNibblesAndByte(6,7,0));
    efctSetSpeed(1.0f);
    efctSetSpeed(*(float *)(param_1 + 0xcc) * opacity);
    if (param_2 != 0) {
      temp_v6 = 0;
      do {
        if (*(char *)(param_1 + temp_v6 + 0x3c84) != '\0') {
          temp_v3 = FUN_001834a4(0xd,temp_v6 + 0x52);
          renderCtxSetB(reinterpret_cast<RenderCtxA *>(g_renderCtx), packNibblesAndByte(6,1,0));
          efctSetSpeed(opacity);
          FUN_001835b4(2,0xd,0x1cb,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e
                      );
          efctSetSpeed(*(float *)(param_1 + 0xcc));
          FUN_001835b4(2,0xd,0x4b,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e)
          ;
          FUN_001835b4(2,0xd,0x4a,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e)
          ;
          FUN_001835b4(2,0xd,0x4c,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e)
          ;
          FUN_001835b4(2,0xd,0x4d,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e)
          ;
          renderCtxSetB(reinterpret_cast<RenderCtxA *>(g_renderCtx), packNibblesAndByte(6,7,0));
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
    }
    else {
      temp_v6 = FUN_002a4878(param_1 + 0x3bdc);
      temp_v2 = FUN_001834a4(0xd,temp_v6 + 0x52);
      renderCtxSetB(reinterpret_cast<RenderCtxA *>(g_renderCtx), packNibblesAndByte(6,1,0));
      efctSetSpeed(opacity);
      FUN_001835b4(2,0xd,0x1cb,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      efctSetSpeed(*(float *)(param_1 + 0xcc));
      FUN_001835b4(2,0xd,0x4b,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_001835b4(2,0xd,0x4a,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_001835b4(2,0xd,0x4c,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_001835b4(2,0xd,0x4d,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      renderCtxSetB(reinterpret_cast<RenderCtxA *>(g_renderCtx), packNibblesAndByte(6,7,0));
    }
    efctSetSpeed(1.0f);
    return;
  }
  return;
}

} /* extern "C" */
