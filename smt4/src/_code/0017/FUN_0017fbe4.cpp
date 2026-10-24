/* NON_MATCHING: retail schedules the far/near vldr after `mov r1, #1`; ours emits them before it. */
#include "common.h"
#include "map/mapDepart.h"

struct CameraMatrixCache;

extern "C" {

/* A perspective projection: vertical field of view in degrees, clip planes and aspect ratio. */
typedef struct CameraPerspective {
    f32 fovy;
    f32 nearZ;
    f32 farZ;
    f32 aspect;
} CameraPerspective;

/* The job work area's camera block (offsets within the work area). */
typedef struct JobCameraWork {
    /* 0x000 */ u8 unk000[0x508];
    /* 0x508 */ MapVector eye;
    /* 0x514 */ MapVector target;
    /* 0x520 */ f32 fovy;
} JobCameraWork;

JobCameraWork *jobGetWork(void);
void effectTextureRequestsPump(void);
void FUN_002c1edc(JobCameraWork *camera, const MapVector *eye, const MapVector *target, const MapVector *up);
void FUN_002c1e30(JobCameraWork *camera, u32 pivot, CameraPerspective perspective);
void taskUpdateOrderedPasses(u32 pass);

/* Sets the work area camera to look from its eye at its target with a fixed perspective. */
u32 FUN_0017fbe4(void)
{
    JobCameraWork *work = jobGetWork();

    effectTextureRequestsPump();
    MapVector up;
    up.x = 0.0f;
    up.y = 1.0f;
    up.z = 0.0f;
    FUN_002c1edc(work, &work->eye, &work->target, &up);
    CameraPerspective perspective;
    perspective.aspect = 5.0f / 3.0f;
    perspective.fovy = work->fovy;
    perspective.farZ = 25600.0f;
    perspective.nearZ = 0.1f;
    FUN_002c1e30(work, 1, perspective);
    taskUpdateOrderedPasses(0);
    return 0;
}

} /* extern "C" */
