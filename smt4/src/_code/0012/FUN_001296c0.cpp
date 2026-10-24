/* NON_MATCHING: near (205 rows against 204): same eye-separation maths (far/(far-depth) scaling, 3D slider from the shared config page at 0x1FF81000, per-eye frustum shift and look-at vectors) and nn::math calls; retail saves fp and reads the last two stack parameters with one ldrd, builds its two eye blocks in a 180-byte frame in a different order and recomputes the shift per use with different VFP registers, ours uses a 164-byte frame and ldm */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};

/* Stereo camera description (observed fields only). */
struct StereoCamera {
    f32 left;            /* 0x00 */
    f32 right;           /* 0x04 */
    f32 bottom;          /* 0x08 */
    f32 top;             /* 0x0C */
    f32 nearPlane;       /* 0x10 */
    f32 farPlane;        /* 0x14 */
    Vec3 eye;            /* 0x18 */
    Vec3 forward;        /* 0x24 */
    Vec3 up;             /* 0x30 */
    Vec3 targetOffset;   /* 0x3C */
    f32 scale;           /* 0x48 */
    f32 widthRatio;      /* 0x4C: output */
    f32 depth;           /* 0x50 */
    f32 nearCopy;        /* 0x54 */
    f32 farCopy;         /* 0x58 */
    f32 parallax;        /* 0x5C: output, world-space eye separation */
};

/* Per-eye projection and view description. */
struct EyeView {
    f32 frustum[6];      /* left, right, bottom, top, near, far */
    Vec3 position;
    Vec3 forward;
    Vec3 up;
    Vec3 target;
};

/* Shared system configuration page (observed fields only). */
struct SharedConfigPage {
    u8 pad00[0x80];
    f32 slider3d;        /* 0x80: 3D depth slider, 0..1 */
    u8 slider3dOff;      /* 0x84 */
};

#define SHARED_CONFIG_PAGE ((SharedConfigPage *)0x1FF81000)

extern f32 DAT_004d4644;   /* screen units per near-plane unit */

void asdFatalError(void);
void nn_math_ARMv6_MTX44FrustumC_FAST(u32 matrix, f32 left, f32 right, f32 bottom, f32 top, f32 nearPlane, f32 farPlane);
void nn_math_ARMv6_MTX44PivotC_FAST(u32 matrix, u32 pivot);
void nn_math_ARMv6_MTX34LookAtC_FAST(u32 matrix, const Vec3 *position, const Vec3 *up, const Vec3 *target);

static f32 absf(f32 value)
{
    return value < 0.0f ? -value : value;
}

/* Computes the eye separation for the 3D `factor` (0..1) at screen `depth` and builds the left/right
 * projection and view matrices of the stereo camera. */
void FUN_001296c0(StereoCamera *camera, u32 projectionA, u32 viewA, u32 projectionB, u32 viewB, u32 pivot, f32 depth, f32 factor)
{
    EyeView eyeA;
    EyeView eyeB;

    if (factor < 0.0f || factor > 1.0f) {
        asdFatalError();
    }
    camera->depth = depth;

    f32 separation;
    if (camera->farPlane <= depth) {
        separation = 0.0f;
        camera->parallax = 0.0f;
    } else {
        f32 world = absf(camera->top - camera->bottom) * depth / (camera->nearPlane * DAT_004d4644) * camera->scale;
        separation = camera->farPlane / (camera->farPlane - depth) * world;
        camera->parallax = separation;
    }
    camera->parallax = separation * factor;
    f32 slider = 0.0f;
    if (SHARED_CONFIG_PAGE->slider3dOff == 0) {
        slider = SHARED_CONFIG_PAGE->slider3d;
    }
    camera->parallax = slider * 0.5f * (separation * factor);

    f32 shift = camera->parallax * camera->nearPlane / depth;
    eyeA.frustum[0] = shift + camera->left;
    eyeA.frustum[1] = camera->parallax * camera->nearPlane / depth + camera->right;
    eyeA.frustum[2] = camera->bottom;
    eyeA.frustum[3] = camera->top;
    eyeA.frustum[4] = camera->nearPlane;
    eyeA.frustum[5] = camera->farPlane;
    eyeB.frustum[0] = camera->left - camera->parallax * camera->nearPlane / camera->depth;
    eyeB.frustum[1] = camera->right - camera->parallax * camera->nearPlane / camera->depth;
    eyeB.frustum[2] = camera->bottom;
    eyeB.frustum[3] = camera->top;
    eyeB.frustum[4] = camera->nearPlane;
    eyeB.frustum[5] = camera->farPlane;

    eyeA.position.x = camera->eye.x - camera->forward.x * camera->parallax;
    eyeA.position.y = camera->eye.y - camera->forward.y * camera->parallax;
    eyeA.position.z = camera->eye.z - camera->forward.z * camera->parallax;
    eyeA.target.x = eyeA.position.x + camera->targetOffset.x;
    eyeA.target.y = eyeA.position.y + camera->targetOffset.y;
    eyeA.target.z = eyeA.position.z + camera->targetOffset.z;
    eyeA.forward = camera->forward;
    eyeA.up = camera->up;

    eyeB.position.x = camera->eye.x + camera->forward.x * camera->parallax;
    eyeB.position.y = camera->eye.y + camera->forward.y * camera->parallax;
    eyeB.position.z = camera->eye.z + camera->forward.z * camera->parallax;
    eyeB.target.x = eyeB.position.x + camera->targetOffset.x;
    eyeB.target.y = eyeB.position.y + camera->targetOffset.y;
    eyeB.target.z = eyeB.position.z + camera->targetOffset.z;
    eyeB.forward = camera->forward;
    eyeB.up = camera->up;

    camera->nearCopy = camera->nearPlane;
    camera->farCopy = camera->farPlane;
    camera->widthRatio = absf(camera->right - camera->left) * (camera->depth / camera->nearPlane);

    nn_math_ARMv6_MTX44FrustumC_FAST(projectionA, eyeA.frustum[0], eyeA.frustum[1], eyeA.frustum[2], eyeA.frustum[3], eyeA.frustum[4], eyeA.frustum[5]);
    nn_math_ARMv6_MTX44PivotC_FAST(projectionA, pivot);
    nn_math_ARMv6_MTX44FrustumC_FAST(projectionB, eyeB.frustum[0], eyeB.frustum[1], eyeB.frustum[2], eyeB.frustum[3], eyeB.frustum[4], eyeB.frustum[5]);
    nn_math_ARMv6_MTX44PivotC_FAST(projectionB, pivot);
    nn_math_ARMv6_MTX34LookAtC_FAST(viewA, &eyeA.position, &eyeA.up, &eyeA.target);
    nn_math_ARMv6_MTX34LookAtC_FAST(viewB, &eyeB.position, &eyeB.up, &eyeB.target);
}

} /* extern "C" */
