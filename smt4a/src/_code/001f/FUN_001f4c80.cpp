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
    /* 0x000 */ u8 unk000[0x50C];
    /* 0x50C */ MapVector eye;
    /* 0x518 */ MapVector target;
    /* 0x524 */ f32 fovy;
} JobCameraWork;

JobCameraWork *jobGetWork(void);
void FUN_0036f0a0(void);
void FUN_0014f0dc(JobCameraWork *camera, const MapVector *eye, const MapVector *target, const MapVector *up);
void FUN_001523b8(JobCameraWork *camera, u32 pivot, CameraPerspective perspective);
void taskUpdateOrderedPasses(u32 pass);

/* Sets the work area camera to look from its eye at its target with a fixed perspective. */
u32 FUN_001f4c80(void)
{
    JobCameraWork *work = jobGetWork();

    FUN_0036f0a0();
    MapVector up;
    up.x = 0.0f;
    up.y = 1.0f;
    up.z = 0.0f;
    FUN_0014f0dc(work, &work->eye, &work->target, &up);
    CameraPerspective perspective;
    perspective.aspect = 5.0f / 3.0f;
    perspective.fovy = work->fovy;
    perspective.farZ = 25000.0f;
    perspective.nearZ = 0.1f;
    FUN_001523b8(work, 1, perspective);
    taskUpdateOrderedPasses(0);
    return 0;
}

} /* extern "C" */
