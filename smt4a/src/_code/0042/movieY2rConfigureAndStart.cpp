/* NON_MATCHING: retail spills r0-r3 with the stack arguments (push {r0-r3,...}) and keeps the failure test as lsrs r0 / movne r0, r1; register allocation of the 13 arguments differs. */
#include "common.h"
#include "nn/svc.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
void nnResultCheckReport0043aab4();
u32 serviceQuerySignedByteChecked();
void FUN_0043a718(s32 enabled);
void FUN_0043a750(s32 format);
void FUN_0043a31c(s32 format);
void FUN_0043a7b0(u32 alignment);
void FUN_0043a844(s32 enabled);
void FUN_0043a7cc(s32 width);
void FUN_0043a654(s32 height);
void FUN_0043a828(u32 rotation);
void FUN_0043ad24(u32 alpha);
void FUN_0043a4a8(u32 address, u32 bytes, s32 unit, s32 gap);
void FUN_0043a338(u32 address, u32 bytes, s32 unit, s32 gap);
void FUN_0043a3f0(u32 address, u32 bytes, s32 unit, s32 gap);
void FUN_0043a59c(u32 address, u32 bytes, s32 unit, s32 gap);
void FUN_0043a76c();
extern u32 g_y2rTransferEvent;

void movieY2rConfigureAndStart(s32 width, s32 height, s32 format, u32 rotation, u32 alignment,
                  u32 inputY, u32 inputU, u32 inputV, s32 gapY, u32 gapU, u32 gapV,
                  u32 output, u32 outputGap)
{
    nnResultCheckReport0043aab4();
    while (serviceQuerySignedByteChecked()) {
    }
    const u32 result = nn::svc::ClearEvent(g_y2rTransferEvent);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    FUN_0043a718(1);
    FUN_0043a750(format);
    FUN_0043a31c(0);
    FUN_0043a7b0(alignment);
    FUN_0043a844(1);
    FUN_0043a7cc(static_cast<s16>(width));
    FUN_0043a654(static_cast<s16>(height));
    FUN_0043a828(rotation);
    FUN_0043ad24(0xff);

    const u32 pixels = static_cast<u32>(width) * static_cast<u32>(height);
    FUN_0043a4a8(inputY, pixels, static_cast<s16>(width), static_cast<s16>(gapY));
    const s32 halfWidth = width / 2;
    const u32 chromaPixels = static_cast<u32>(halfWidth) * static_cast<u32>(height / 2);
    FUN_0043a338(inputU, chromaPixels, static_cast<s16>(halfWidth), static_cast<s16>(gapU));
    FUN_0043a3f0(inputV, chromaPixels, static_cast<s16>(halfWidth), static_cast<s16>(gapV));

    u32 bytesPerPixel;
    if (format == 0) {
        bytesPerPixel = 4;
    } else if (format == 1) {
        bytesPerPixel = 3;
    } else if (format == 2 || format == 3) {
        bytesPerPixel = 2;
    } else {
        bytesPerPixel = 0;
    }
    FUN_0043a59c(output, pixels * bytesPerPixel,
        static_cast<s16>(static_cast<u32>(width) * bytesPerPixel * 8u),
        static_cast<s16>(outputGap * bytesPerPixel * 8u));
    FUN_0043a76c();
}
} // extern "C"
