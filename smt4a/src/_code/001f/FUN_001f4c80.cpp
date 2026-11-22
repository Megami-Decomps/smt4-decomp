/* NON_MATCHING: 4 lines: retail schedules the far/near vldr after `mov r1, #1`; ours emits them before it. The order
 * (fovy, camera, nearZ, farZ, pivot, aspect) would match, but the callee takes a by-value CameraPerspective; built as
 * one in field order here it is 6 lines off (wave 74). */
#include "common.h"
#include "map/mapDepart.h"
#include "task/TaskPasses.h"


extern "C" {

/* The job work area's camera block (offsets within the work area). */
typedef struct JobCameraWork {
    /* 0x000 */ u8 unk000[0x50C];
    /* 0x50C */ MapVector eye;
    /* 0x518 */ MapVector target;
    /* 0x524 */ f32 fovy;
} JobCameraWork;

u32 jobGetWork(u32 handle);
void FUN_0036f0a0(void);
void cameraMatrixCacheSetLookAt(JobCameraWork *camera, const MapVector *eye, const MapVector *target, const MapVector *up);
void stereoCameraSetPerspective(JobCameraWork *camera, u32 pivot, f32 fovy, f32 nearZ, f32 farZ, f32 aspect);

/* Sets the work area camera to look from its eye at its target with a fixed perspective. */
s32 FUN_001f4c80(u32 job)
{
    JobCameraWork *work = reinterpret_cast<JobCameraWork *>(jobGetWork(job));

    FUN_0036f0a0();
    MapVector up;
    up.x = 0.0f;
    up.y = 1.0f;
    up.z = 0.0f;
    cameraMatrixCacheSetLookAt(work, &work->eye, &work->target, &up);
    stereoCameraSetPerspective(work, 1, work->fovy, 0.1f, 25000.0f, 5.0f / 3.0f);
    taskUpdateOrderedPasses(0);
    return 0;
}

} /* extern "C" */
