/* NON_MATCHING: register allocation only: the zero is built directly in r6; retail builds it in r0, copies it to r6 and stores the flag byte from r0. */
#include "frame_tex/FrameTexA.h"

extern "C" {

int asdTextureRelease(AsdTexture *texture);

/* Releases the HDR layer's scene and downsample textures and disables the layer. */
void frameTexturesRelease(void)
{
    FrameTexWorkA *tex = g_frameTex;
    tex->hdr.enabled = 0;
    if (tex->sceneSurface != NULL) {
        asdTextureRelease(tex->sceneSurface);
        tex->sceneSurface = NULL;
    }
    if (tex->hdrSurfaceQuarter != NULL) {
        asdTextureRelease(tex->hdrSurfaceQuarter);
        tex->hdrSurfaceQuarter = NULL;
    }
    if (tex->hdrSurfaceHalf != NULL) {
        asdTextureRelease(tex->hdrSurfaceHalf);
        tex->hdrSurfaceHalf = NULL;
    }
}

} /* extern "C" */
